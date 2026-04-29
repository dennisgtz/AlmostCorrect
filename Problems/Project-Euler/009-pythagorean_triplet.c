/*A Pythagorean triplet is a set of three natural numbers, a < b < c, for which, a² + b² = c².

 *For example, 3² + 4² = 9 + 16 = 25 = 5².

 *There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 *Find the product abc.
 */

#include <stdio.h>

long long squareSum(int x, int y)
{
    return x * x + y * y;
}

long long sum(int x, int y, int z)
{
    return x + y + z;
}

long long product(int x, int y, int z)
{
    return x * y * z;
}

int main()
{
    int a, b, c;

    for (a = 1; a < 400; a++)
    {
        for (b = a + 1; b < 500; b++)
        {
            c = 1000 - a - b; // covers sum(a, b, c) == 1000
            if (c > b && (squareSum(a, b) == (long long)c * c))
            {
                printf("Product of abc is: %lld\n", product(a, b, c)); // Answer: 31,875,000
                return 0;                                              // exit after finding the first triplet
            }
        }
    }
    return 0;
}

/*
 *Testing use of nested loops and functions to find the Pythagorean triplet.
 *The outer loop iterates through possible values of 'a', while the inner loop iterates through possible values of 'b'.
 *The value of 'c' is calculated based on the condition that a + b + c = 1000.
 *The program checks if the squares of 'a' and 'b' equal the square of 'c', and if so, it prints the product of 'a', 'b', and 'c'.
 */