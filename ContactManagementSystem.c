#include<stdio.h>
#include<string.h>
#include <stdlib.h>

#define N 100

// whenever we want to use long long simpliy type ll;
typedef long long ll;

typedef struct Contact{
    char *name;
    long long int phone;
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


void defultData(Contact *cont){

    cont[0].name = "kunal";
    cont[0].phone = 1234567890;
    
    cont[1].name = "aman";
    cont[1].phone = 1234567891;
    
    cont[2].name = "Dev";
    cont[2].phone = 1234567892;
    
    cont[3].name = "kajal";
    cont[3].phone = 1234567893;

    dataSize = 4;

}


void addContact(Contact *cont,int n)
{
    for (int i=0; i < n; i++)
    { 
        cont[dataSize].name = (char*)malloc(50 * sizeof(char));

        printf("Enter phone of Contact %d: ", i+1);
        scanf("%d", &cont[dataSize].phone);
        getchar(); 
        printf("Enter Contact Name %d:", i+1);
        fgets(cont[dataSize].name,50,stdin);
        removeNewline(cont[dataSize].name);

        dataSize++;
    }
}

void showContact(Contact *cont){

    
    printf("--------------------------------------------------\n");
    printf("%-15s %-15s\n","Name","ContactNo");
    printf("--------------------------------------------------\n");
    for(int i=0;i<dataSize;i++){
    printf("%-15s %-15lld\n",cont[i].name,cont[i].phone);
    printf("--------------------------------------------------\n");
    }


}


void deleteCont(Contact *cont,int pNum){
    // this N is only for now testing

    int j ; 
    for (int i = 0; i < N; i++)
    {   
        if (pNum == cont[i].phone)
        {
            j = i;
            printf("%s is Deleted with Phone Number %lld\n",cont[i].name,cont[i].phone);
        }
        
    }
    for ( j;j < N; j++)
    {
        /* code */   
        cont[j].phone = cont[j+1].phone; 
        cont[j].name = cont[j+1].name;
    }
    N-1;    
}


void menu(Contact *cont){
    int option=10;

    while (option)
    {
            int n;
            printf("\n");
            printf("---------Choose Option To Perform a Task------------------\n");
            printf("To Add New Contact choose 1\n");
            printf("To Show Contact choose 2\n");
            printf("To Search Contact choose 3\n");
            printf("To Delete Contact choose 4\n");
            printf("To Exit choose 0\n :--");
            scanf("%d",&option);

            if(option == 0){
                break;
            }else if (option == 1)
            {
                printf("Enter Number of Contacts to Add : ");
                scanf("%d",&n);
                // this function will take input form user
                addContact(cont,n);

               
              }else if(option == 2){
                // here need to put show function 
                showContact(cont);
            }else if(option == 3){
                //here we need to put search function
            }
            else if(option == 4){
                printf("Enter Phone Number Delete: \n");
                ll pNum;
                scanf("%d", &pNum);
                deleteCont(cont, pNum);
            }
            else
            {
                printf("Enter a correct option!!!!!!!!\n");
            }
    }
}


int main(){

    struct Contact Cont[N];
    
    defultData(Cont);
    menu(Cont);

    // this is only tesing purpose
    

}