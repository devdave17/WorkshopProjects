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


int main(){

// here we creating the sutdent obj
    struct Student s1;
    // assining the objects
    s1.id = 10;

    printf ("%d",s1.id);
    return 0;
}