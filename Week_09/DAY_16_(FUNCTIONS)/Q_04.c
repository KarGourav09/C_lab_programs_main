/*WAP to find the largest among three numbers by using a suitable user defined function.*/

#include <stdio.h>
void max(int a,int b,int c);
int main() {
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);
    max(a,b,c);
    return 0;
}
void max(int a,int b,int c)
{
    if(a == b)
    {
        if(a == c)
    {
        printf("All three are equal\n");
    }   
    else if(a>c)
    {
        printf("a is equal to b and greater than c\n");
    }
    else{
        printf("a is equal to b but less than c\n");
    }
    }   
    else if(a>b)
    {
        if(a == c)
    {
        printf("a is greater than b and equal to c\n");
    }   
    else if(a>c)
    {
        printf("a is greater than b and c\n");
        printf("a is the greatest value\n");
    }
    else{
        printf("a is greater than b but less than c\n");
        printf("c is the greatest\n");
    }
    }
    else{
        if(b>c)
        {
            printf("b is greater than a and c\n");
            printf("b is the greatest\n");
        }
        else{
            printf("c is greater than a and b\n");
            printf("c is the greatest\n");
        }
    }

}