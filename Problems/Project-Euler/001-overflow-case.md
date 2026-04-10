## Problem

A number is a perfect square if it is the square of a positive integer. For the first 462,000 integers, compute the sum of all odd square numbers.

## Working

The solution iterates through numbers from 1 to 462,000, checks for odd values, squares them, and adds them to a running sum.

## Point of Failure

The logic was correct, but the program produced incorrect results due to integer overflow during intermediate calculations using `int`.

## Solution

Replacing `int` with `long long` ensured that all intermediate and final values were stored safely without overflow.

## Correct Code

```c
#include <stdio.h>

long long squares(long long n)
{
    return n * n;
}

int main()
{
    long long sum = 0;
    long long square;

    for (long long i = 1; i <= 462000; i++)
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
