/* hanoi.c 
 * The problem:
 * n number of plates on A column, each of which is larger than the one above.
 * There are also B column and C column, both of which are empty. 
 * Task:
 * move n plates on A to C using B, one plate at a time, at any moment a larger
 * plate couldn't be placed above a smaller one.
 */

#include <stdio.h>

void hanoi(int n, char from, char via, char to);

int main(void)
{
    hanoi(3, 'A', 'B', 'C');

    return 0;
}

void hanoi(int n, char from, char via, char to)
{
    if (0 == n)
        return;
    hanoi(n-1, from, to, via);
    printf("move %c to %c\n", from, to);
    hanoi(n-1, via, from, to);
}