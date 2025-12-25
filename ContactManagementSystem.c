#include<stdio.h>
#include<string.h>
#define N 100

typedef struct Contact{
    char name[50];
    int phone;
}Contact;

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

int dataSize = 0;

void addContact(Contact *cont,int n)
{
    for (int i=0; i < n; i++)
    { 
        printf("Enter phone of Contact %d: ", i+1);
        scanf("%d", &cont[dataSize].phone);
        getchar(); 
        printf("Enter Contact Name %d:", i+1);
        fgets(cont[dataSize].name,50,stdin);
        removeNewline(cont[dataSize].name);

        dataSize++;
    }
}

void menu(Contact *cont){

    int option=10;

    while (option)
    {
        int n;
            printf("\n");
            printf("---------Choose Option To Perform a Task------------------\n");
            printf("To Add Data choose 1\n");
            printf("To Display  Data choose 2\n");
            printf("To search Contact choose 3\n");
            printf("To Exit choose 0\n");
            scanf("%d",&option);
            if(option == 0){
                break;
            }else if (option == 1)
            {
                printf("Enter number of Contacts: ");
                scanf("%d",&n);
                // this function will take input form user
                addContact(cont,n);
            }
            else
            {
                printf("Enter a correct option!!!!!!!!\n");
            }
    }
}


int main(){

    struct Contact cont[N];
    menu(cont);

}