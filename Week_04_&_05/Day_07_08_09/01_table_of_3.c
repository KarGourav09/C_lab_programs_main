/*WAP
to print the multiplication table of 3 from 1 to 10.
*/

#include <stdio.h>

int main()
{
    int m,i = 1;


    while(i <= 10)
    {
        m = 3*i;
        printf("%d\n", m);
        i++;
    }
    return 0;
}