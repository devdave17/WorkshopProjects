#include <stdio.h>
#include <string.h>
#define N 100

int dataSize = 0;
// there is an main Struture of an students
typedef struct Student
{
    char name[50];
    int id;
    char batch[50];
    float marks[5];
    float totalMarks;
    float percentage;
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

void calculateResult(Student *std,int n){
    int i,j;
    float sum;

    //total marks
    for( i=0;i<n;i++){
    sum=0;
     for(int j=0;j<5;j++){
     sum=sum+std[i].marks[j];
     }
     std[i].totalMarks=sum;
     std[i].percentage=sum/5;
}
    
 
 for(int i=0;i<n;i++){
    if(std[i].percentage>85 ){
    std[i].grade='A';

    }
    else if(std[i].percentage>70 ){
        std[i].grade='B';

    }
   else if(std[i].percentage>55 ){
        std[i].grade='C';

    }
    else if(std[i].percentage>40){
        std[i].grade='D';

    }
    else if(std[i].percentage>33){
        std[i].grade='E';

    }
    else if(std[i].percentage>0){
        std[i].grade='F';

    }
}
}
void defaultData(Student *stu){

// Student 0
stu[0].id = 202501;
strcpy(stu[0].name, "Musi");
strcpy(stu[0].batch, "MCA");
stu[0].grade = 'B';
stu[0].marks[0] = 80;  // OS
stu[0].marks[1] = 82;  // DSA
stu[0].marks[2] = 88;  // CN
stu[0].marks[3] = 78;  // Maths
stu[0].marks[4] = 70;  // Progr


// Student 1
stu[1].id = 202501;
strcpy(stu[1].name, "Lusi");
strcpy(stu[1].batch, "MCA");
stu[1].grade = 'B';
stu[1].marks[0] = 80;
stu[1].marks[1] = 82;
stu[1].marks[2] = 88;
stu[1].marks[3] = 78;
stu[1].marks[4] = 70;


// Student 2
stu[2].id = 202502;
strcpy(stu[2].name, "Jhon");
strcpy(stu[2].batch, "MCA");
stu[2].grade = 'B';
stu[2].marks[0] = 80;
stu[2].marks[1] = 82;
stu[2].marks[2] = 95;
stu[2].marks[3] = 85;
stu[2].marks[4] = 70;


// Student 3
stu[3].id = 202503;
strcpy(stu[3].name, "Johny");
strcpy(stu[3].batch, "MCA");
stu[3].grade = 'A';
stu[3].marks[0] = 90;
stu[3].marks[1] = 92;
stu[3].marks[2] = 95;
stu[3].marks[3] = 85;
stu[3].marks[4] = 90;


// Student 4
stu[4].id = 202504;
strcpy(stu[4].name, "Komal");
strcpy(stu[4].batch, "MCA");
stu[4].grade = 'B';
stu[4].marks[0] = 30;
stu[4].marks[1] = 52;
stu[4].marks[2] = 45;
stu[4].marks[3] = 66;
stu[4].marks[4] = 35;

dataSize = 5;
calculateResult(stu, dataSize);
}

// taking input as from user    

void takingInput(Student *stu,int n)
{
    for (int i=0; i < n; i++)
    {
        printf("Enter Id of Student %d: ", i+1);
        scanf("%d", &stu[dataSize].id);
        getchar();   

        printf("Enter Name of Student %d: ", i+1);
        fgets(stu[dataSize].name, 50, stdin);
        removeNewline(stu[dataSize].name);

        printf("Enter Batch of Student %d: ", i+1);
        fgets(stu[dataSize].batch, 50, stdin);
        removeNewline(stu[dataSize].batch);


        // the loop is used for inner array marks till (0-->4) 5 ele
        for (int j = 0; j < 5; j++)
        {
            char subs[5][15] = {"OS", "DSA", "CN", "Maths", "Programming"};
            printf("\nEnter marks for %s (Student %d): ",subs[j],i+1);
            scanf("%f",&stu[dataSize].marks[j]);
        }
        dataSize++;
    }
}


void printAllData(Student *std, int n){

    printf("----------------------------------------------------------------------------------------------------------------\n");
    printf("%-6s %-20.20s %-8.8s %-6s %-6s %-6s %-6s %-7s %-6s %-10s %-10s\n", "Id","Name","Batch","Grade","OS","DSA","CN","Maths","Progr.","totalMarks","percentage");
    for (int i = 0; i < n; i++)
    {
        printf("----------------------------------------------------------------------------------------------------------------\n");
        printf("%-6d %-20.20s %-8.8s %-6c %-6.2f %-6.2f %-6.2f %-7.2f %-6.2f %-6.2f\n", std[i].id,std[i].name,std[i].batch ,std[i].grade,std[i].marks[0],std[i].marks[1],std[i].marks[2],std[i].marks[3],std[i].marks[4], std[i].totalMarks);
    } 
}



void menu(Student *stu){

    int option=10;

    while (option)
    {
        int n;
            printf("");
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
                calculateResult(stu,dataSize);
            }else if(option == 2){
                printAllData(stu,dataSize);    
            }else
            {
                printf("Enter a correct option!!!");
            }
    }
}

int main(){
    struct Student stu[N];
    defaultData(stu);
    menu(stu);
    return 0;
}