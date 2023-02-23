#include <stdio.h>
#include <stdlib.h>

/**
 * sum - Finds the sum of two numbers
 * @a: number 1
 * @b: number 2
 * Return: void
 */
void sum(int a, int b)
{
        int c, d, summ;

        summ = a + b;
        printf("The sum is: %d", summ);

}

/**
 * Main - Main function
 *
 * Return: Always 0.
 */
int main ()
{
        sum(4,5);

        return (0);
}
