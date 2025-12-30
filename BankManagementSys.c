#include<stdio.h>
#include<string.h>
#define N 100

// int dataSize=0;
// typedef struct BankDetail{
//     long long int acNo;
//     char name[50];
//     int age;
//     char address[50];
//     long long int phone;
//     double InitialBal;
//     double CurrentBal;
//     int NoOfTrans;
// }BankDetail;
typedef long long int ll;
int dataSize=0;
typedef struct BankDetail{
    ll acNo;
    char name[50];
    int age;
    ll phone;
    double IntialBal;
    double CurrentBal;
    int Trans[N];
    char accType[20];
    int NoOfTrans;
    

}BankDetail;


void RemoveNewLine(char *str){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='\n'){
            str[i]='\0';
            break;
        }
        i++;
    }
}

void defautltData(BankDetail *info){

info[0].acNo = 56789567867;
strcpy(info[0].name,"Maya");
info[0].age = 45;
info[0].phone = 9870988907;
sprintf(info[0].accType,"saving");

info[1].acNo = 100123456790;    
strcpy(info[1].name,"Ravi");
info[1].age = 32;
info[1].phone = 9870988908;
sprintf(info[0].accType,"ccurrent");

info[2].acNo = 100123456791;
strcpy(info[2].name,"Anita");
info[2].age = 29;
info[2].phone = 9870988909;
sprintf(info[0].accType,"saving");

info[3].acNo = 100123456792;
strcpy(info[3].name,"Suresh");
info[3].age = 51;
info[3].phone = 9870988910;
sprintf(info[0].accType,"current");

info[4].acNo = 10012345679;
strcpy(info[4].name,"Pooja");
info[4].age = 24;
info[4].phone = 9870988911;
sprintf(info[0].accType,"saving");

info[5].acNo = 100123456794;
strcpy(info[5].name,"Amit");
info[5].age = 36;
info[5].phone = 9870988912;
sprintf(info[0].accType,"current");

info[6].acNo = 100123456795;
strcpy(info[6].name,"Neha");
info[6].age = 27;
info[6].phone = 9870988913;
sprintf(info[0].accType,"saving");

info[7].acNo = 100123456796;
strcpy(info[7].name,"Rahul");
info[7].age = 41;
info[7].phone = 9870988914;
sprintf(info[0].accType,"current");

info[8].acNo = 10012345679;
strcpy(info[8].name,"Kiran");
info[8].age = 34;
info[8].phone = 9870988915;
sprintf(info[0].accType,"saving");

info[9].acNo = 100123456798;
strcpy(info[9].name,"Sunita");
info[9].age = 48;
info[9].phone = 9870988916;
sprintf(info[0].accType,"saving");

info[10].acNo = 100123456799;
strcpy(info[10].name,"Vikas");
info[10].age = 26;
info[10].phone = 9870988917;
sprintf(info[0].accType,"current");

info[11].acNo = 100123456800;
strcpy(info[11].name,"Rina");
info[11].age = 31;
info[11].phone = 9870988918;
sprintf(info[0].accType,"saving");

info[12].acNo = 100123456801;
strcpy(info[12].name,"Deepak");
info[12].age = 45;
info[12].phone = 9870988919;
sprintf(info[0].accType,"saving");

info[13].acNo = 100123456802;
strcpy(info[13].name,"Kavita");
info[13].age = 28;
info[13].phone = 9870988920;
sprintf(info[0].accType,"current");

info[14].acNo = 100123456803;
strcpy(info[14].name,"Manoj");
info[14].age = 39;
info[14].phone = 9870988921;
sprintf(info[0].accType,"saving");

info[15].acNo = 100123456804;
strcpy(info[15].name,"Priya");
info[15].age = 23;
info[15].phone = 9870988922;
sprintf(info[0].accType,"current");

info[16].acNo = 100123456805;
strcpy(info[16].name,"Nitin");
info[16].age = 52;
info[16].phone = 9870988923;

info[17].acNo = 100123456806;
strcpy(info[17].name,"Sneha");
info[17].age = 30;
info[17].phone = 9870988924;
sprintf(info[0].accType,"current");

info[18].acNo = 100123456807;
strcpy(info[18].name,"Arjun");
info[18].age = 35;
info[18].phone = 9870988925;
sprintf(info[0].accType,"saving");

info[19].acNo = 100123456808;
strcpy(info[19].name,"Meena");
info[19].age = 47;
info[19].phone = 9870988926;
sprintf(info[0].accType,"saving");

info[20].acNo = 100123456809;
strcpy(info[20].name,"Rohit");
info[20].age = 22;
info[20].phone = 9870988927;
sprintf(info[0].accType,"current");

info[21].acNo = 100123456810;
strcpy(info[21].name,"Nisha");
info[21].age = 33;
info[21].phone = 9870988928;
sprintf(info[0].accType,"saving");

info[22].acNo = 100123456811;
strcpy(info[22].name,"Sanjay");
info[22].age = 40;
info[22].phone = 9870988929;
sprintf(info[0].accType,"current");

info[23].acNo = 100123456812;
strcpy(info[23].name,"Asha");
info[23].age = 38;
info[23].phone = 9870988930;
sprintf(info[0].accType,"saving");

info[24].acNo = 100123456813;
strcpy(info[24].name,"Vinod");
info[24].age = 55;
info[24].phone = 9870988931;
sprintf(info[0].accType,"current");

info[25].acNo = 100123456814;
strcpy(info[25].name,"Rekha");
info[25].age = 43;
info[25].phone = 9870988932LL;
sprintf(info[0].accType,"current");


for(int i = 0;i<25;i++){
    info[i].IntialBal= 1000.0;
    info[i].CurrentBal = 1000.0;
    info[i].NoOfTrans = 0;
}

dataSize=25;

}

void takinginput(BankDetail *info,int n){

    info[dataSize].CurrentBal = 0.0;

    
    for(int i=0;i<n;i++){
    printf("Information about candidate %d\n",i+1);

    printf("enter account number:");
    scanf("%lld",&info[dataSize].acNo);

     printf("enter phone number:");
    scanf("%lld",&info[dataSize].phone);

    printf("enter age:");
    scanf("%d",&info[dataSize].age);
    getchar();

    printf("enter name:");
    fgets(info[dataSize].name, 50, stdin);
    RemoveNewLine(info[dataSize].name);

    printf("enter account type:");
    fgets(info[dataSize].accType, 50, stdin);
    RemoveNewLine(info[dataSize].accType);



    info[dataSize].NoOfTrans = 0;
    info[dataSize].CurrentBal = 0.0;

    dataSize ++;
  }
}

// Deposit amount
void depositMoney(BankDetail *info,int n){
    long long int ac;
    double amt;

    printf("Enter account numbera: ");
    scanf("%lld",&ac);


    for(int i=0;i<n;i++){
        if(info[i].acNo == ac){
            printf("Enter deposit amount: ");
            scanf("%lf",&amt);

            if(amt > 0){
                info[i].CurrentBal += amt;
                info[i].NoOfTrans++;
                printf("Deposit Successful\n");
                printf("Current Balance: %.2lf\n",info[i].CurrentBal);
            }else{
                printf("Invalid amount\n");
            }
            return;
        }
    }
    printf("Account not found\n");
}

// Withdrawl Money
void WithdrawlMoney(BankDetail *info,int n){
    long long int ac;
    double amt;

    printf("Enter account number: ");
    scanf("%lld",&ac);


    for(int i = 0;i<n;i++){
        if(info[i].acNo == ac){
            printf("Enter Withdrawl Amount: ");
            scanf("%lf",&amt);

            if(amt > 0 && amt <= info[i].CurrentBal){
                info[i].CurrentBal -= amt;
                info[i].NoOfTrans++;
                printf("Withdrawal Successful\n");
                printf("Remaining Balance: %.2lf\n",info[i].CurrentBal);
            }else{
                printf("Insufficient balance\n");
            }
            return;
        }
    }
    printf("Account not found\n");
}

void printfData(BankDetail *info,int n){
printf("----------------------------------------------------------------------------\n");
printf("%-20s %-20s %-8s %-15s \n","AccountNo." ,"Name","Age","Phone");
printf("----------------------------------------------------------------------------\n");
for(int i=0;i<n;i++){
printf("%-20lld %-20s %-8d %-15lld \n",info[i].acNo,info[i].name,info[i].age,info[i].phone);
printf("----------------------------------------------------------------------------\n");
}

}

void search(BankDetail *info,int n){
   long long int ac;
    printf("Enter account number to search:");
    scanf("%lld",&ac);
    for(int i=0;i<n;i++){
       if(info[i].acNo == ac){
        //printf information
        printf("\nAccount Found\n");
        printf("Account number:%lld\n",info[i].acNo);
        printf("Account holder :%s\n",info[i].name);
        printf("Phone number::%lld\n",info[i].phone);
        printf("Account holder age:%d\n",info[i].age);
        printf("current balance:%.2lf\n",info[i].CurrentBal);
        printf("Number of transection done:%d\n",info[i].NoOfTrans);

       }
    }
   
}

void menu(BankDetail *info){

    int option=10;

    while (option)
    {
        int n;
            printf("\n");
            printf("---------Choose Option To Perform a Task------------------\n");
            printf("To add account detail 1\n");
            printf("To Display all account 2\n");
            printf("To search account info 3\n");
            printf("To deposite money 4\n");
            printf("To withdrawal money 5\n");
            printf("To show account balance 6\n");
            printf("To update account detail 7\n");
            printf("To delete account 8\n");
            printf("To know transaction history 9\n");
            //login system
            printf("To Exit choose 0\n");
            printf("Enter:");
            scanf("%d",&option);
            if(option == 0){
                break;
            }else if (option == 1)
            {
                printf("Enter number of sutdents: ");
                scanf("%d",&n);
                // this function will take input form user
                takinginput(info,n);
                printfData(info,dataSize);
                 
            }else if(option == 2){
                // defautltData(info,n);
                 printfData(info,dataSize); 
            }
             else if(option == 3){
             search(info,dataSize);
            }
            else if(option == 4){
              depositMoney(info,dataSize);
            }
            else if(option == 5){
            WithdrawlMoney(info,dataSize);
            }
            else if(option == 6){
               
            }
            else if(option == 9){
                // printfData(info,dataSize);
            }
            else if(option == 0){
            break;
            }
            else{
            printf("Enter correct option\n");
        }
    }
}



int main(){
    struct BankDetail info[N];
    defautltData(info);
    menu(info);
    // takinginput(info,n);
    // printfData(info,n);
    return 0;

}