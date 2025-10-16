/*WAP to union two array given by user*/

#include <stdio.h>

int main()
{
    int N1;
    printf("Enter the size of array(N1)\n");
    scanf("%d", &N1);

    int arr1[N1];
    for(int i = 0; i < N1; i++)
    {
        printf("Enter the number%d:", i);
        scanf("%d", &arr1[i]);
    }

    int N2;
    printf("Enter the size of array(N2)\n");
    scanf("%d", &N2);

    int arr2[N2];
    for(int i = 0; i < N2; i++)
    {
        printf("Enter the number%d:", i);
        scanf("%d", &arr2[i]);
    }

    int arr3[N1 + N2];
    int unionSize = 0;

    // Copy first array
    for(int i = 0; i < N1; i++)
    {
        arr3[unionSize++] = arr1[i];
    }
    
    // Copy unique elements from second array
    for(int i = 0; i < N2; i++)
    {
        int isDuplicate = 0;
        // Check if element already exists
        for(int j = 0; j < unionSize; j++)
        {
            if(arr2[i] == arr3[j])
            {
                isDuplicate = 1;
                break;
            }
        }
        // Add only if not duplicate
        if(!isDuplicate)
        {
            arr3[unionSize++] = arr2[i];
        }
    }

    printf("Union array contents are: ");
    for(int j = 0; j < unionSize; j++)
    {
        printf("%d ", arr3[j]);
    }
    return 0;
}