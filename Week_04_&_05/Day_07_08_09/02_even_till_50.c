/*WAP
to print even series within 50.*/

#include <stdio.h>

int main()
{
    int i = 1, num;
    while (num < 50)
    {
        num = 2 * i;

        printf("%d\n", num);

        i++;
    }
    return 0;
}