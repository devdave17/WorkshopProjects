#include<stdio.h>
#include<string.h>
#define N 100

int dataSize=0;
typedef struct BankDetail{
    long long int acNo;
    char name[50];
    int age;
    char address[50];
    long long int phone;
    double intailBal;
    double currentBal;
    int NoTransection;
}BankDetail;



void defautltData(BankDetail *info){

info[0].acNo = 100123456789;
strcpy(info[0].name,"Maya");
info[0].age = 44;
info[0].phone = 9870988907;

info[1].acNo = 100123456790;    
strcpy(info[1].name,"Ravi");
info[1].age = 32;
info[1].phone = 9870988908;

info[2].acNo = 100123456791;
strcpy(info[2].name,"Anita");
info[2].age = 29;
info[2].phone = 9870988909;

info[3].acNo = 100123456792;
strcpy(info[3].name,"Suresh");
info[3].age = 51;
info[3].phone = 9870988910;

info[4].acNo = 100123456793;
strcpy(info[4].name,"Pooja");
info[4].age = 24;
info[4].phone = 9870988911;

info[5].acNo = 100123456794;
strcpy(info[5].name,"Amit");
info[5].age = 36;
info[5].phone = 9870988912;

info[6].acNo = 100123456795;
strcpy(info[6].name,"Neha");
info[6].age = 27;
info[6].phone = 9870988913;

info[7].acNo = 100123456796;
strcpy(info[7].name,"Rahul");
info[7].age = 41;
info[7].phone = 9870988914;

info[8].acNo = 100123456797;
strcpy(info[8].name,"Kiran");
info[8].age = 34;
info[8].phone = 9870988915;

info[9].acNo = 100123456798;
strcpy(info[9].name,"Sunita");
info[9].age = 48;
info[9].phone = 9870988916;

info[10].acNo = 100123456799;
strcpy(info[10].name,"Vikas");
info[10].age = 26;
info[10].phone = 9870988917;

info[11].acNo = 100123456800;
strcpy(info[11].name,"Rina");
info[11].age = 31;
info[11].phone = 9870988918;

info[12].acNo = 100123456801;
strcpy(info[12].name,"Deepak");
info[12].age = 45;
info[12].phone = 9870988919;

info[13].acNo = 100123456802;
strcpy(info[13].name,"Kavita");
info[13].age = 28;
info[13].phone = 9870988920;

info[14].acNo = 100123456803;
strcpy(info[14].name,"Manoj");
info[14].age = 39;
info[14].phone = 9870988921;

info[15].acNo = 100123456804;
strcpy(info[15].name,"Priya");
info[15].age = 23;
info[15].phone = 9870988922;

info[16].acNo = 100123456805;
strcpy(info[16].name,"Nitin");
info[16].age = 52;
info[16].phone = 9870988923;

info[17].acNo = 100123456806;
strcpy(info[17].name,"Sneha");
info[17].age = 30;
info[17].phone = 9870988924;

info[18].acNo = 100123456807;
strcpy(info[18].name,"Arjun");
info[18].age = 35;
info[18].phone = 9870988925;

info[19].acNo = 100123456808;
strcpy(info[19].name,"Meena");
info[19].age = 47;
info[19].phone = 9870988926;

info[20].acNo = 100123456809;
strcpy(info[20].name,"Rohit");
info[20].age = 22;
info[20].phone = 9870988927;

info[21].acNo = 100123456810;
strcpy(info[21].name,"Nisha");
info[21].age = 33;
info[21].phone = 9870988928;

info[22].acNo = 100123456811;
strcpy(info[22].name,"Sanjay");
info[22].age = 40;
info[22].phone = 9870988929;

info[23].acNo = 100123456812;
strcpy(info[23].name,"Asha");
info[23].age = 38;
info[23].phone = 9870988930;

info[24].acNo = 100123456813;
strcpy(info[24].name,"Vinod");
info[24].age = 55;
info[24].phone = 9870988931;

info[25].acNo = 100123456814;
strcpy(info[25].name,"Rekha");
info[25].age = 43;
info[25].phone = 9870988932;

info[26].acNo = 100123456815;
strcpy(info[26].name,"Imran");
info[26].age = 29;
info[26].phone = 9870988933;

info[27].acNo = 100123456816;
strcpy(info[27].name,"Farah");
info[27].age = 34;
info[27].phone = 9870988934;

info[28].acNo = 100123456817;
strcpy(info[28].name,"Rajesh");
info[28].age = 49;
info[28].phone = 9870988935;

info[29].acNo = 100123456818;
strcpy(info[29].name,"Geeta");
info[29].age = 37;
info[29].phone = 9870988936;

info[30].acNo = 100123456819;
strcpy(info[30].name,"Alok");
info[30].age = 28;
info[30].phone = 9870988937;

info[31].acNo = 100123456820;
strcpy(info[31].name,"Bhavna");
info[31].age = 42;
info[31].phone = 9870988938;

info[32].acNo = 100123456821;
strcpy(info[32].name,"Tushar");
info[32].age = 25;
info[32].phone = 9870988939;

info[33].acNo = 100123456822;
strcpy(info[33].name,"Isha");
info[33].age = 21;
info[33].phone = 9870988940;

info[34].acNo = 100123456823;
strcpy(info[34].name,"Harish");
info[34].age = 58;
info[34].phone = 9870988941;

info[35].acNo = 100123456824;
strcpy(info[35].name,"Komal");
info[35].age = 27;
info[35].phone = 9870988942;

info[36].acNo = 100123456825;
strcpy(info[36].name,"Yogesh");
info[36].age = 46;
info[36].phone = 9870988943;

info[37].acNo = 100123456826;
strcpy(info[37].name,"Shalini");
info[37].age = 35;
info[37].phone = 9870988944;

info[38].acNo = 100123456827;
strcpy(info[38].name,"Kunal");
info[38].age = 31;
info[38].phone = 9870988945;

info[39].acNo = 100123456828;
strcpy(info[39].name,"Divya");
info[39].age = 26;
info[39].phone = 9870988946;

info[40].acNo = 100123456829;
strcpy(info[40].name,"Madhushri");
info[40].age = 40;
info[40].phone = 9870988947;

dataSize=41;

}


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


void takinginput(BankDetail *info,int n){
    
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

    printf("enter address:");
    fgets(info[dataSize].address, 50, stdin);
    RemoveNewLine(info[dataSize].address);
    printf("\n");
    dataSize++;
  }
}



void printfData(BankDetail *info,int n){
printf("----------------------------------------------------------------------------\n");
printf("%-20s %-20s %-8s %-15s\n","AccountNo." ,"Name","Age","phone");
printf("----------------------------------------------------------------------------\n");
for(int i=0;i<n;i++){
printf("%-20lld %-20s %-8d %-15lld\n",info[i].acNo,info[i].name,info[i].age,info[i].phone);
printf("----------------------------------------------------------------------------\n");
}
}

void search(BankDetail *info,int n){
   long long int accountNo;
    printf("Enter account number to search:");
    scanf("%lld",&accountNo);
    for(int i=0;i<n;i++){
       if(accountNo==info[i].acNo){
        //printf information
        printf("account number:%lld",info[i].acNo);
        printf("account holder :%s",info[i].name);
        printf("phone number::%lld",info[i].phone);
        printf("account holder age:%d",info[i].age);
        printf("current balance:%lld",info[i].acNo);
        printf("number of transection done:%d",info[i].NoTransection);

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
            printf("To know transaction history 9");
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

            }else if(option == 3){
                
            }else if(option == 4){
                   
            }else if(option == 5){
                   
            }else if(option == 6){
                  
            }

            else
            {
                printf("Enter a correct option!!!!!!!!\n");
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