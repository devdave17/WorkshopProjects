#include<stdio.h>
#include<string.h>
#define N 100

typedef struct Contact{
    int id;
    char name[50];
    int phone;
    char email[50];
    char location[50]; 
}Contact;

int main(){
    struct Contact cont[N];
}