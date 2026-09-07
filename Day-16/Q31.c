Write a program to take a number as input and print its equivalent binary representation.
  #include<stdio.h>
  int main()
  {
   int n bin=0;
   printf(" Enter the number for binary equivalent");
   scanf("%d" , &n);
   while(n>0)
{
    int a=n%2;
    bin = bin + a * place;
    place = place * 10;
    n=n/2;
}
printf(" The binary equivalent is %d", bin);
}
