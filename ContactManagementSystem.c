#include<stdio.h>
#include<string.h>
#include <stdlib.h>

#define N 100

// whenever we want to use long long simpliy type ll;
typedef long long ll;

int dataSize = 0;
FILE *file;
typedef struct Contact {
    char name[50];
    long long int phone;
} Contact;

void addDummyData(Contact *cont) {

    cont[0].phone = 1234567890;
sprintf(cont[0].name, "Alice");

cont[1].phone = 9876543210;
sprintf(cont[1].name, "Bob");

cont[2].phone = 9000000002;
sprintf(cont[2].name, "Charlie");

cont[3].phone = 9000000003;
sprintf(cont[3].name, "David");

cont[4].phone = 9000000004;
sprintf(cont[4].name, "Eve");

cont[5].phone = 9000000005;
sprintf(cont[5].name, "Frank");

cont[6].phone = 9000000006;
sprintf(cont[6].name, "Grace");

cont[7].phone = 9000000007;
sprintf(cont[7].name, "Hannah");

cont[8].phone = 9000000008;
sprintf(cont[8].name, "Ivy");

cont[9].phone = 9000000009;
sprintf(cont[9].name, "Jack");

cont[10].phone = 9000000010;
sprintf(cont[10].name, "Karen");

cont[11].phone = 9000000011;
sprintf(cont[11].name, "Leo");

cont[12].phone = 9000000012;
sprintf(cont[12].name, "Mia");

cont[13].phone = 9000000013;
sprintf(cont[13].name, "Nora");

cont[14].phone = 9000000014;
sprintf(cont[14].name, "Oscar");

cont[15].phone = 9000000015;
sprintf(cont[15].name, "Paul");

cont[16].phone = 9000000016;
sprintf(cont[16].name, "Quinn");

cont[17].phone = 9000000017;
sprintf(cont[17].name, "Rita");

cont[18].phone = 9000000018;
sprintf(cont[18].name, "Sam");

cont[19].phone = 9000000019;
sprintf(cont[19].name, "Tina");

cont[20].phone = 9000000020;
sprintf(cont[20].name, "Uma");

cont[21].phone = 9000000021;
sprintf(cont[21].name, "Victor");

cont[22].phone = 9000000022;
sprintf(cont[22].name, "Wendy");

cont[23].phone = 9000000023;
sprintf(cont[23].name, "Xavier");

cont[24].phone = 9000000024;
sprintf(cont[24].name, "Yara");

cont[25].phone = 9000000025;
sprintf(cont[25].name, "Zack");

cont[26].phone = 9000000026;
sprintf(cont[26].name, "Arjun");

cont[27].phone = 9000000027;
sprintf(cont[27].name, "Bhavik");

cont[28].phone = 9000000028;
sprintf(cont[28].name, "Chetan");

cont[29].phone = 9000000029;
sprintf(cont[29].name, "Dev");

cont[30].phone = 9000000030;
sprintf(cont[30].name, "Ekta");

cont[31].phone = 9000000031;
sprintf(cont[31].name, "Farhan");

cont[32].phone = 9000000032;
sprintf(cont[32].name, "Gauri");

cont[33].phone = 9000000033;
sprintf(cont[33].name, "Harsh");

cont[34].phone = 9000000034;
sprintf(cont[34].name, "Ishaan");

cont[35].phone = 9000000035;
sprintf(cont[35].name, "Juhi");

cont[36].phone = 9000000036;
sprintf(cont[36].name, "Karan");

cont[37].phone = 9000000037;
sprintf(cont[37].name, "Lina");

cont[38].phone = 9000000038;
sprintf(cont[38].name, "Mahesh");

cont[39].phone = 9000000039;
sprintf(cont[39].name, "Nisha");

cont[40].phone = 9000000040;
sprintf(cont[40].name, "Omkar");

cont[41].phone = 9000000041;
sprintf(cont[41].name, "Pooja");
dataSize+= 42;
}

void writeContactToFile(Contact *cont) {
    file = fopen("contacts.txt", "w");
    if(!file){
        printf("Error opening file.\n");
        return;
    }

    for(int i = 0; i < dataSize; i++){
        fprintf(file, "%s %lld\n", cont[i].name, cont[i].phone);
    }

    fclose(file);

    file = fopen("contacts.txt", "r");

    if(!file){
        printf("Error opening file.\n");
        return;
    }
}

void readContactFromFile(Contact *cont) {
    Contact temp;
    int index = 0;
    
    while(fscanf(file, "%s %lld", temp.name, &temp.phone) == 2){
        sprintf(cont[index].name, "%s", temp.name);
        cont[index].phone = temp.phone;
        index++;
    }

    // printf("\nReading from file:\n");
    // for (int i = 0; i < index; i++)
    // {
    //     printf("Name: %s, Phone: %lld\n", cont[i].name, cont[i].phone);
    // }
    fclose(file);
    }

    

int main() {

    FILE *file;

    Contact cont[N];

    // Data fill
   addDummyData(cont);
    // ----- WRITE -----
    writeContactToFile(cont);

    // ----- READ -----
    readContactFromFile(cont);

    return 0;
}
