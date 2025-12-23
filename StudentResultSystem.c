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
    s1.grade = 'A';

    printf ("%d",s1.id);
    printf ("%d",s1.grade);
    return 0;
}