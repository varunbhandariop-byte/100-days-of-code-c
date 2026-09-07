Write a program to calculate the factorial of a number.
  #include<stdio.h>
  int main()
{
  int n ,fac=1;
  printf(" Enter the number to find the factorial");
  scanf("%d", &n);
  for(int i=1;i<=n;i++){
  fac=fac*i;
  }
  printf("Factorial = %d", fac);
}
