#include <stdio.h>
#include <stdlib.h>

void swap_int(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
int main()
{
    int a = 98;
    int b = 42;
    swap_int(&a, &b);
    printf("a=%d, b=%d", a ,b);
    return (0);
}
