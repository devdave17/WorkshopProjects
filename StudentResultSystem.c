#include <stdio.h>


// there is an main Struture of an students
typedef struct Student
{
    char name[50];
    int id;
    char batch[50];
    int marks[5];
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
        printf("Enter Id of %d Student: ", i+1);
        scanf("%d", &stu[i].id);
        getchar();   

        printf("Enter Name of %d Student: ", i+1);
        fgets(stu[i].name, 50, stdin);
        removeNewline(stu[i].name);

        printf("Enter Batch of %d Student: ", i+1);
        fgets(stu[i].batch, 50, stdin);
        removeNewline(stu[i].batch);


        // the loop is used for inner array marks till (0-->4) 5 ele
        for (int j = 0; j < 5; j++)
        {
            printf("\nEnter marks for %d Subject: ",j+1);
            scanf("%d",&stu[i].marks[j]);
        }
        
    }
    
}

void printAllData(Student *std, int n){

    printf("---------------------------------------------------------------------------------\n");
    printf("%-6s %-20.20s %-8.8s %-6s %-6s %-6s %-6s %-7s %-6s\n", "Id","Name","Batch","Grade","OS","DSA","CN","Maths","Progr.");
    for (int i = 0; i < n; i++)
    {
        printf("---------------------------------------------------------------------------------\n");
        printf("%-6d %-20.20s %-8.8s %-6c %-6d %-6d %-6d %-7d %-6d\n", std[i].id,std[i].name,std[i].batch ,std[i].grade,std[i].marks[0],std[i].marks[1],std[i].marks[2],std[i].marks[3],std[i].marks[4]);
    } 
}

int main(){
    int n;
    printf("Enter number of sutdents: ");
    scanf("%d",&n);
    
    // here we creating the sutdent obj
     struct Student stu[n];

    // this function will take input form user
    takingInput(stu,n);
    printAllData(stu, n);
    // assining the objects
    // s1.id = 10;
    // s1.grade = 'A';

    // printf ("%d",s1.id);
    // printf ("%d",s1.grade);


    return 0;
}