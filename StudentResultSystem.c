#include <stdio.h>
#include <string.h>
#define N 100


// there is an main Struture of an students
typedef struct Student
{
    char name[50];
    int id;
    char batch[50];
    float marks[5];
    float totalMarks;
    char grade;
    int os, dsa, cn, maths, progr;
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

void defaultData( Student *stu){

     stu[0].id = 202501;
    strcpy(stu[0].name, "Musi");
    strcpy(stu[0].batch, "MCA");
    stu[0].grade = 'B';
    stu[0].os = 80;
    stu[0].dsa = 82;
    stu[0].cn = 88;
    stu[0].maths = 78;
    stu[0].progr = 70;
    stu[0].id = 202501;


    strcpy(stu[1].name, "Lusi");
    strcpy(stu[1].batch, "MCA");
    stu[1].grade = 'B';
    stu[1].os = 80;
    stu[1].dsa = 82;
    stu[1].cn = 88;
    stu[1].maths = 78;
    stu[1].progr = 70;

    stu[2].id = 202502;
    strcpy(stu[2].name, "Jhon");
    strcpy(stu[2].batch, "MCA");
    stu[2].grade = 'B';
    stu[2].os = 80;
    stu[2].dsa = 82;
    stu[2].cn = 95;
    stu[2].maths = 85;
    stu[2].progr = 70;

    stu[3].id = 202503;
    strcpy(stu[3].name, "Johny");
    strcpy(stu[3].batch, "MCA");
    stu[3].grade = 'A';
    stu[3].os = 90;
    stu[3].dsa = 92;
    stu[3].cn = 95;
    stu[3].maths = 85;
    stu[3].progr = 90;

    stu[4].id = 202504;
    strcpy(stu[4].name, "Komal");
    strcpy(stu[4].batch, "MCA");
    stu[4].grade = 'B';
    stu[4].os = 80;
    stu[4].dsa = 82;
    stu[4].cn = 95;
    stu[4].maths = 86;
    stu[4].progr = 65;

    //  printf("---------------------------------------------------------------------------------\n");
    //  printf("Id    Name        Batch   Grade   OS   DSA   CN   Maths   Progr.\n");
                   
    // for(int i = 1; i < 5; i++) {
    //          printf("%-6d %-20.20s %-8.8s %-6c %-6d %-6d %-6d %-7d %-6d\n", stu[i].id,stu[i].name,stu[i].batch ,stu[i].grade,stu[i].os,stu[i].dsa,stu[i].cn,stu[i].maths,stu[i].progr);
    // }
    // printf("-------------------------------------------------------------------------------\n");
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
void calculateResult(Student *std,int n){
    int i,j;
    float sum;
    
     float percentage[n];
    

    //total marks
    for( i=0;i<n;i++){
    sum=0;
     for(int j=0;j<5;j++){
     sum=sum+std[i].marks[j];
     }
     std[i].totalMarks=sum;
     percentage[i]=sum/5;
}
    
 for(int i=0;i<n;i++){
   
 } 
 for(int i=0;i<n;i++){
    if(percentage[i]>85 ){
    std[i].grade='A';

    }
    else if(percentage[i]>70 ){
        std[i].grade='B';

    }
   else if(percentage[i]>70 ){
        std[i].grade='C';

    }
    else if(percentage[i]>55 ){
        std[i].grade='D';

    }
    else if(percentage[i]>40 ){
        std[i].grade='E';

    }
    else if(percentage[i]<33){
        std[i].grade='F';

    }
    }

}


int main(){
<<<<<<< HEAD
    int n;
    printf("Enter number of sutdents: ");
    scanf("%d",&n);

    
    
    // here we creating the sutdent obj
     struct Student stu[n];
    defaultData(stu);

    // this function will take input form user
    // takingInput(stu,n);
    printAllData(stu, n);
    // assining the objects
    // s1.id = 10;
    // s1.grade = 'A';

    // printf ("%d",s1.id);
    // printf ("%d",s1.grade);
=======
    
    // here we creating the sutdent obj
     struct Student stu[N];

    menu(stu);
    
>>>>>>> c5a2b4faa888933cf71b1f91b0deb7c0a546ae24


    return 0;
}