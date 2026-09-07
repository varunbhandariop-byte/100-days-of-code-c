Write a program to check if a number is an Armstrong number.
  #include <stdio.h>

int main()
{
    int n, original, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    original = n;

    while(n > 0)
    {
        int a = n % 10;
        sum = sum + a * a * a;
        n = n / 10;
    }

    if(sum == original)
    {
        printf("It is an Armstrong number");
    }
    else
    {
        printf("It is not an Armstrong number");
    }

    return 0;
}
