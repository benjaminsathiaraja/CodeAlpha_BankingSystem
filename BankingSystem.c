#include<stdio.h>
struct Account{
  int accNo;
  char name[50];
  float balance;
};
void deposit(struct Account *a){
  float amount;
  printf("Enter amount to deposit: ");
  scanf("%f",&amount);
  a->balance+=amount;
  printf("Amount Deposited Successfully!\n");
}
void withdraw(struct Account *a){
  float amount;
  printf("Enter amount to withdraw: ");
  scanf("%f",&amount);
  if(amount>a->balance)
    printf("Insufficient Balance!\n");
  else{
    a->balance-=amount;
    printf("Withdrawal Successful!\n");
  }
}
void checkBalance(struct Account a){
  printf("Account Number: %d\n",a.accNo);
  printf("Account Holder: %s\n",a.name);
  printf("Current Balance: %.2f\n",a.balance);
}
int main(){
  struct Account a;
  int choice;
  printf("Enter the Account Number: ");
  scanf("%d",&a.accNo);
  printf("Enter the Account Holder Name: ");
  scanf(" %[^\n]",a.name);
  printf("Enter the Initial Balance: ");
  scanf("%f",&a.balance);
  do{
    printf("\n===== CODEALPHA ONLINE BANKING SYSTEM =====\n");
    printf("1.Deposit\n");
    printf("2.Withdraw\n");
    printf("3.Check Balance\n");
    printf("4.Exit\n");

    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
      case 1:
        deposit(&a);
        break;

      case 2:
        withdraw(&a);
        break;

      case 3:
        checkBalance(a);
        break;

      case 4:
        printf("Thank You!\n");
        break;

      default:
        printf("Invalid Choice\n");
    }
  }while(choice!=4);

  return 0;
}
