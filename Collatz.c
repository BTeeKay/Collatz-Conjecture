#include <stdio.h>
#include <cs50.h>

int collatz(int x);

int counter = 0;

int main(void)
{
    int x;
    do
    {
        x = get_int("Enter Positive Number: ");
    }
    while (x < 0);

    collatz(x);
}

int collatz(int x)
{

    if (x == 1)
    {
        printf("This took ");
        printf("%i", counter);
        printf(" steps to do \n");
        return 0;
    }

    else if (x % 2 == 0 && x != 1)
    {
        counter++;
        collatz(x / 2);
        return 1;
    }

    else
    {
        counter++;
        collatz(3*x + 1);
        return 1;
    }
}
