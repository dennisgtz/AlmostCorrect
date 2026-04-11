/*
Project Euler Problem 6: https://projecteuler.net/problem=6

Sum square difference

The sum of the squares of the first ten natural numbers is,
    1^2 + 2^2 + ... + 10^2 = 385

The square of the sum of the first ten natural numbers is,
    (1 + 2 + ... + 10)^2 = 55^2 = 3025

Hence the difference between the sum of the squares of the first ten
natural numbers and the square of the sum is 3025 - 385 = 2640.

Find the difference between the sum of the squares of the first one
hundred natural numbers and the square of the sum.
*/

#include <stdio.h>

long long square(long long n)
{
    return n * n;
}

int main()
{
    long long square1, square2;
    long long sum1 = 0;
    long long sum2 = 0;

    for (int i = 1; i <= 100; i++)
    {
        sum2 += i;
    }
    square2 = square(sum2);

    for (int i = 1; i <= 100; i++)
    {
        square1 = square(i);
        sum1 += square1;
    }

    printf("The difference is: %lld\n", (square2 - sum1)); /*25164150. But try it first*/
}