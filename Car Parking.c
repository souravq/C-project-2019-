#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int N;
    int car=0,bike=0,cycle=0,total=0,amount=0;


    while(1){
      system("cls");
      printf("\n\n\t\t\t CAR PARKING\n\n\n");
      printf("\t1. Enter 1 for Car\n");
      printf("\t2. Enter 2 for Bike\n");
      printf("\t3. Enter 3 for Cycle\n\n");
      printf("\t4. Show Details\n");
      printf("\t5. Delete Details\n");
      printf("\t6. Exit\n\n\n");
      printf("\t Enter the No:");
      scanf("%d",&N);
     switch(N)
     {
      case 1:
        car++;
        total++;
        amount=amount+50;
        printf("\n\n\t\t Details Updated\n");
        getch();
        break;
      case 2:
        bike++;
        total++;
        amount=amount+30;
        printf("\n\n\t\t Details Updated\n");
        getch();
        break;
      case 3:
        cycle++;
        total++;
        amount=amount+10;
        printf("\n\n\t\t Details Updated\n");
        getch();
        break;
      case 4:
        printf("\n\n\tThe number of CAR is %d\n",car);
        printf("\tThe number of BIKE is %d\n",bike);
        printf("\tThe number of CYCLE is %d\n",cycle);
        printf("\tThe total AMOUNT is %d\n\n",amount);
        getch();
        break;

      case 5:
        car=0;
        bike=0;
        cycle=0;
        amount=0;
        printf("\n\n\t\t Details Updated\n");
        getch();
        break;
     case 6:
        exit(0);

     }
    }
    return 0;
}
