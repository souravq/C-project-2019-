#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void Deposit();
void Withdraw();
void Transfer();
void CheckDetails();
void details();

int totalAmount=1000,totalDeposit=0,totalWithdraw=0,totalTransfer=0 ;
char a[20];
int acc;

int main()
{
    printf("\n\t**** BANKING SYSTEM****\n");
    printf("\n\n Enter your Name:");
    gets(a);
    printf("\n Enter your Account Number:");
    scanf("%d",&acc);
    while(1)
    {
     system("cls");
    switch(list())
    {
    case 1:
        Deposit();
        break;
    case 2:
        Withdraw();
        break;
    case 3:
        Transfer();
        break;
    case 4:
        CheckDetails();
        getch();
        break;
    case 5:
        system("cls");
        details();
        getch();
        exit(0);
        //break;

    }
}
    return 0;
}

int list()
{
    int ch;
    printf("\n\t 1.Deposit Amount");
    printf("\n\t 2.Withdraw Amount");
    printf("\n\t 3.Transfer Amount");
    printf("\n\t 4.Check Details");
    printf("\n\t 5.Exit");
    printf("\n\n\t Enter your choice:");
    scanf("%d",&ch);
    return ch;
}

void Deposit()
{
    int damount;
    printf("\n How much amount do you want to deposit:");
    scanf("%d",&damount);
    totalDeposit+=damount;
    totalAmount=totalAmount+damount;
}

void Withdraw()
{
    int  wamount;
    printf("\n Enter the amount for withdraw:");
    scanf("%d",&wamount);
    if(wamount<=totalAmount)
    {
        totalWithdraw+=wamount;
        totalAmount=totalAmount-wamount;
    }
    else
    {
        printf("\n Due to less Amount , withdraw is not possible,,,,,");
    }

}

void Transfer()
{
    int tamount;
    printf("\n Enter the amount for transfer:");
    scanf("%d",&tamount);
    if(tamount<=totalAmount)
    {
        totalTransfer+=tamount;
        totalAmount=totalAmount-tamount;
    }
    else
    {
        printf("\n Transfer is not possible,,,,,,");
    }

}

void CheckDetails()
{
  printf("\n Total Amount %d",totalAmount);
  printf("\n Total Deposit Amount %d",totalDeposit);
  printf("\n Total withdrawn amount %d",totalWithdraw);
  printf("\n Total Transfer amount %d",totalTransfer);
}

void details()
{
  printf("\n\t ****** XXX BANK ******\n");
  printf("\n The Customer name is -> %s",a);
  printf("\n Customer's Account number is -> %d",acc);
  printf("\n Total Amount -> %d",totalAmount);
  printf("\n Total Deposit Amount -> %d",totalDeposit);
  printf("\n Total withdrawn amount -> %d",totalWithdraw);
  printf("\n Total Transfer amount -> %d",totalTransfer);
  printf("\n\t******** WELCOME ********");
}













