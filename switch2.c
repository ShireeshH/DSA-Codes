#include<stdio.h>
main()
{
char choice;
float n1,n2,sum,sub,mul,div;
printf("enter the choice and 2 number\n");
scanf("%c%f%f",&choice,&n1,&n2);
switch(choice)
{
case '+':sum=n1+n2;
printf("sum=%f",sum);
break;

case '-':sub=n1-n2;
printf("sub=%f",sub);
break;

case '*':mul=n1*n2;
printf("mul=%f",mul);
break;

case '/':div=n1/n2;
printf("div=%f",div);
break;

default:printf("invalid choice");
break;
}
}
