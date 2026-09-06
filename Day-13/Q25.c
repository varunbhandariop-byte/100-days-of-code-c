Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
  
  #include <stdio.h>
  int main()
  {
   char op;
   int a,b,result;
   printf( " Enter your choice ");
   scanf( "%c", &op);
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
   switch(op)
{
case '+':
     result=a+b;
     printf(" %d", result);
     break;
  case '-':
        result = a-b;
        printf("%d", result);
        break;
    case '*':
        result=a*b;
        printf("%d",result);
        break;
    case '/':
        result=a/b;
        printf("%d",result);
        break;
    case '%':
        result=a%b;
        printf("%d",result);
        break;
    default:
        printf(" Invalid option");
}
}
  
