#include <stdio.h>
#define N 100
// #define dataSize sizeof(stu)/sizeof(stu[N])

// there is an main Struture of an students
typedef struct Student
{
    char name[50];
    int id;
    char batch[50];
    float marks[5];
    float totalMarks;
    char grade;
} Student;

void removeNewline(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
        i++;
    }
}



// taking input as from user

void takingInput(Student *stu,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter Id of Student %d: ", i+1);
        scanf("%d", &stu[i].id);
        getchar();   

        printf("Enter Name of  Student %d: ", i+1);
        fgets(stu[i].name, 50, stdin);
        removeNewline(stu[i].name);

        printf("Enter Batch of  Student %d: ", i+1);
        fgets(stu[i].batch, 50, stdin);
        removeNewline(stu[i].batch);


        // the loop is used for inner array marks till (0-->4) 5 ele
        for (int j = 0; j < 5; j++)
        {
            printf("\nEnter marks for %d Subject for Student : ",j+1);
            scanf("%f",&stu[i].marks[j]);
        }
        
    }
    
}

void printAllData(Student *std, int n){

    printf("---------------------------------------------------------------------------------\n");
    printf("%-6s %-20.20s %-8.8s %-6s %-6s %-6s %-6s %-7s %-6s\n", "Id","Name","Batch","Grade","OS","DSA","CN","Maths","Progr.");
    for (int i = 0; i < n; i++)
    {
        printf("---------------------------------------------------------------------------------\n");
        printf("%-6d %-20.20s %-8.8s %-6c %-6f %-6f %-6f %-7f %-6f\n", std[i].id,std[i].name,std[i].batch ,std[i].grade,std[i].marks[0],std[i].marks[1],std[i].marks[2],std[i].marks[3],std[i].marks[4]);
    } 
}


void menu(Student *stu){

    int option=10;

    
    
    while (option)
    {
        int n;
            printf("---------Choose Option To Perform a Task------------------\n");
            printf("To Add Data choose 1\n");
            printf("To Display  Data choose 2\n");
            scanf("%d",&option);
            if(option == 0){
                break;
            }else if (option == 1)
            {
                printf("Enter number of sutdents: ");
                scanf("%d",&n);
                // this function will take input form user
                takingInput(stu,n);

            }else if(option == 2){
                int dataSize = sizeof(stu)/sizeof(stu[0]);
                printf("%d",dataSize);
                printAllData(stu,n);    
            }else
            {
                printf("Enter a correct option!!!");
            }
    }
}


int main(){
    
    // here we creating the sutdent obj
     struct Student stu[N];

    menu(stu);
    


    return 0;
}