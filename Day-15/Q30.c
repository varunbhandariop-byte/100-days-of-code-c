Write a program to reverse a given number.
#include<stdio.h>
int main()
{
  int num, rev=0;
 printf(" Enter the number");
 scanf("%d", &n);
 while(n>0)
{
  int a= n%10;
  rev=rev*10+a;
  n=n/10;
}
printf("The reverse of the number is %d", rev);
}
