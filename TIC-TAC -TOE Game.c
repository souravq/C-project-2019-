#include<stdio.h>
#include<stdlib.h>

char a[9]={'1','2','3','4','5','6','7','8','9'};
int end();
void inputSymbol();
void check(char,char);

void show()
{
     printf("\n\n\t\tSUDUKU GAME\n\n");
     printf("\t\t %c| %c| %c",a[0],a[1],a[2]);
     printf("\n\t\t--|--|--\n");
     printf("\t\t %c| %c| %c",a[3],a[4],a[5]);
     printf("\n\t\t--|--|--\n");
     printf("\t\t %c| %c| %c",a[6],a[7],a[8]);
     printf("\n\t\t--|--|--\n");

}

void inputSymbol()
{
    printf("\n Player 1 Symbol: x");
    printf("\n Player 2 Symbol: 0\n");

}

void start()
{
    char pa;
    printf("\n Enter who will start this game ,,,Player 1 or Player 2:");
    fflush(stdin);
    scanf("%c",&pa);
}

int count=0;
void play()
{

    char p,s;
    printf("\n Enter position and symbol for the player\n");
    fflush(stdin);
    scanf("%c",&p);
    fflush(stdin);
    scanf("%c",&s);
    //printf("%c %c",p,s);
    count++;
    check(p,s);
}

void check(char p, char s)
{
  int i;
  for(i=0;i<=8;i++)
  {
      if(a[i]==p)
      {
          a[i]=s;
      }
  }
}

int end()
{
    if((a[0]=='x'&&a[1]=='x'&&a[2]=='x')||(a[3]=='x'&&a[4]=='x'&&a[5]=='x')||(a[6]=='x'&&a[7]=='x'&&a[8]=='x'))
        return(100);
     else if((a[0]=='0'&&a[1]=='0'&&a[2]=='0')||(a[3]=='0'&&a[4]=='0'&&a[5]=='0')||(a[6]=='0'&&a[7]=='0'&&a[8]=='0'))
        return 200;
     else if(a[0]=='x'&&a[4]=='x'&&a[8]=='x')
        return 100;
     else if(a[0]=='0'&&a[4]=='0'&&a[8]=='0')
        return 200;
     else if(a[2]=='x'&&a[5]=='x'&&a[8]=='x')
        return 100;
     else if(a[2]=='0'&&a[5]=='0'&&a[8]=='0')
        return 200;
        else if(a[1]=='X'&&a[4]=='X'&&a[7]=='X')
        return 100;
      else if(a[1]=='0'&&a[4]=='0'&&a[7]=='0')
        return 200;

     else if(a[2]=='x'&&a[4]=='x'&&a[6]=='x')
        return 100;
     else if(a[2]=='0'&&a[4]=='0'&&a[6]=='0')
        return 200;
     else if(a[0]=='x'&&a[3]=='x'&&a[6]=='x')
        return 100;
     else if(a[0]=='0'&&a[3]=='0'&&a[6]=='0')
        return 200;
    return 300;

}

int main()
{

    int k,i;
    char ch;

    label2:
        system("cls");
     show();
     inputSymbol();
     start();
     play();

     label:
     system("cls");
     show();
     play();
    k=end();
    system("cls");
    show();
    if(count<9)
    {
    if(k==100)
    {
        printf("Player 1 win\n");
        count=0;
    }
    else if(k==200)
    {
        printf("Player 2 win\n");
        count=0;
    }
    else
        goto label;
    }
    else
    {
        printf("Game Draw\n");
        count=0;
    }

    printf("\n\n Do you want to continue, Enter Y for yes and N for No:");
    fflush(stdin);
    scanf("%c",&ch);
    if('y'==ch||'Y'==ch)
    {
        for(i=0;i<=8;i++)
            a[i]=(i+1)+'0';

        goto label2;
    }
    return 0;
}
