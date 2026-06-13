
#include <stdio.h>

int main()
{
    int n, i, even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even elements = %d\n", even);
    printf("Odd elements = %d\n", odd);

    return 0;
}