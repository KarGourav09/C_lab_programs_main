/*WAP to find the larger number between two numbers by using a suitable user defined function.*/

#include <stdio.h>
void max(int a,int b);
int main() {
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    max(a,b);
    return 0;
}
void max(int a,int b)
{
    if(a == b)
    {
        printf("Both a and b is equal");
    }   
    else if(a>b)
    {
        printf("a is greater than b");
    }
    else{
        printf("b is greater than a");
    }

}