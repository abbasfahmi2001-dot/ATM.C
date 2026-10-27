#include<stdio.h>
int main()
{
int pin=1234;
int enteredpin;
int choice;
float balance=5000;
float amount;
printf("=====WELOCOME TO ATM =====\n");
printf("Enter your PIN:");
scanf("%d",&enteredpin);
if(enteredpin !=pin)
{
printf("Invalid PIN!\n");
return 0;
}
printf("\nlogin successful!\n");
do
{
printf("\n=====ATM MENU=====\n");
printf("1.check Balance|n");
printf("2.Deposit Money\n");
printf("3.Withdraw Money\n");
printf("4.Exit\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case1:
  printf("Your Balance:Rs.%2f\n",balance);
break;

case2:
  printf("Enter deposit amount:");
  scanf("%f",&amount);
  if (amount>0)
  {
  balance=balance+amount;
  printf("Money Deposited Succesfully!\n");
  printf("New Balance:Rs.%.2f\n",balance);
  }
  else
  {
  printf("Invalid Amount!\n");
  }
break;

case3:
  printf("Enter Withdrawal amount:");
  scanf("%f",&amount);
  if(amount<=0)
  {
  printf("invalid Amount!\n");
  }
  else if (amount<=balance)
  {
  balance=balance-amount;
  printf("please collect your cash.\n");
  printf("Remaining Balance:Rs.%.2f\n",balance);
  }
  else
  {
  printf("Insufficient Balance!\n");
  }
break;

case4:
  printf("Thank You for using ATM!\n");
break;
default:
  printf("Invalid Choice!\n");
}
}while(choice!=4);
return 0;
}
