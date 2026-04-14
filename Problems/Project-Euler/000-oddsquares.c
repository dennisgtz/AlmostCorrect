#include <stdio.h>

long long squares(long long n)
{
    return n * n;
}

int main()
{
    long long sum = 0;
    long long square;
    for (int i = 1; i <= 462000; i++)
    {
        if (i % 2 != 0)
        {
            square = squares(i);
            sum += square;
        }
    }
    printf("Sum of squares of odd numbers from 1 to 462000: %lld\n", sum);

    return 0;
}