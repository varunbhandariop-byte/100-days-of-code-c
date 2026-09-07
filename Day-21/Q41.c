Write a program to swap the first and last digit of a number.
  #include <stdio.h>

int main()
{
    int n, first, last, middle, power, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    power = 1;
    int temp = n;

    while (temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }

    first = temp;

    middle = (n % power) / 10;

    result = last * power + middle * 10 + first;

    printf("Number after swapping = %d", result);

    return 0;
}
