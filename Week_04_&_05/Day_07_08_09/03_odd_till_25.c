/* WAP to print odd numbers till 25 */

#include <stdio.h>

int main()
{
    int i = 1, num;
    while (num < 25)
    {
        num = 2*i - 1;

        printf("%d\n",num);
        
        i++;
    }
    return 0;
    
}