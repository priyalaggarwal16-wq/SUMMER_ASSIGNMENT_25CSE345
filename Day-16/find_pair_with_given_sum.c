
#include <stdio.h>

int main() 
{
    int arr[100], n, sum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter required sum: ");
    scanf("%d", &sum);

    for(int i = 0; i < n; i++) 
    {
        for(int j = i + 1; j < n; j++) 
        {
            if(arr[i] + arr[j] == sum) 
            {
                printf("Pair found: %d and %d\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}