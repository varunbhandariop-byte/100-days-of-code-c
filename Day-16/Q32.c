Write a program to check if a number is a palindrome.
  #include<stdio.h>
  int main()
  {
  int n , pal=0, original=0;
  printf(" Enter the number ");
  scanf("%d", &n);
  original=n;
  while(n>0)
{
  int a= n%10;
  pal=pal*10+a;
  n=n/10;
}
if( pal==original)
{
  printf(" Its a palindrome");
}
else
  printf(" It is not a palindrome %d", pal);
}
