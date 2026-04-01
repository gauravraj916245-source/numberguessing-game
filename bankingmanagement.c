#include<stdio.h>
#include<string.h>
void Creat_Account();
void Deposite_Money();
void Withdrawal_Money();
void Check_Money();
typedef struct {
    char Name[45];
    int acc_no;
    float balance;
} Account;
int main(){
    while(1){
        int choice;
        printf("\n\n*** Bank Management System***\n");
        printf("1. Creat Account\n");
        printf("2. Deposit Money\n");
        printf("3. withdrawal Money\n");
        printf("4. Check Money\n");
        printf("5. Exit\n");
        printf("enter your choice::\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            Creat_Account();
            break;
            case 2:
            Deposite_Money();
            break;
            case 3:
            Withdrawal_Money();
            break;
            case 4:
            Check_Money();
            break;
            case 5:
            printf("\nbank server is currently down\n");
            return 0;
            break;
            default:
            printf("\n  invalid choice\n ");
            break;
        }

    }
}
void Creat_Account(){
Account acc;
FILE*file=fopen("account.dat", "a+");
if(file==NULL){
    printf("\nUnable to open file!");
    return;
}
printf("\n Enter your name: ");
getchar();
fgets(acc.Name,sizeof(acc.Name),stdin);
int ind  =strcspn(acc.Name,"\n");
acc.Name[ind]='\0';
printf("enter your Account number:");
scanf("%d",&acc.acc_no);
acc.balance=0;
fwrite(&acc,sizeof(acc),1,file);
fclose(file);
printf("Account Created Successfully!");
}

void Deposite_Money(){
 FILE *file=fopen("account.dat","r+");
 if(file==NULL){
    printf("unable to open account file");
    return;
 }
 float money;
 int acc_no;
 Account acc_r;
 printf("enter your account number:");
 scanf("%d",&acc_no);
 printf("enter amount to deposit : ");
 scanf("%f",&money);
while(fread(&acc_r,sizeof(acc_r),1,file)){
if(acc_r.acc_no==acc_no){
    acc_r.balance+=money;
    fseek(file ,-sizeof(acc_r),SEEK_CUR);
    fwrite(&acc_r,sizeof(acc_r),1,file);
    fclose(file);
    printf("Successfully deposited Rs %.2f New balance is Rs %.2f",money,acc_r.balance);
    return;
}
}
fclose(file);
printf("Account number %d is not found",acc_no);
}

void Withdrawal_Money(){
FILE *file = fopen("account.dat","r+");
if(file==NULL){
    printf("\nunable to open the account file\n");
    return;
}
int acc_no;
Account acc_r;
float money;
printf("enter your Account number:");
scanf("%d",&acc_no);
printf("enter the amount you wish to withdraw ");
scanf("%f",&money);   
while(fread(&acc_r,sizeof(acc_r),1,file)){
    if(acc_r.acc_no==acc_no){
        if(acc_r.balance>=money){
            acc_r.balance-=money;
            fseek(file,-sizeof(acc_r),SEEK_CUR);
            fwrite(&acc_r,sizeof(acc_r),1,file);
            printf("Successfully withdrawing Rs %.2f And remaing Balance is Rs %.2f",money,acc_r.balance);
        }
            else
            {
                printf("insufficient balance");
            }
            fclose(file);
            return;
        }
    }
    printf("MOney could not be withdraw as the acc_no %d was not found in record!!",acc_no);
}

void  Check_Money(){
  FILE *file =fopen("account.dat","r");
  if(file==NULL){
    printf("\nUnable to open file!");
    return;
}
  int acc_no;
  Account acc_read;
  printf("enter your account number:");
  scanf("%d",&acc_no);
  while(fread(&acc_read,sizeof(acc_read),1,file)){
    if(acc_read.acc_no==acc_no){
        printf("\nyour Account balance is Rs.%.2f",acc_read.balance);
        fclose(file);
        return;
    }
}
}
