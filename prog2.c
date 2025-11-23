#include <stdio.h>

void cubeArray(int *p, int n) 
{
    for(int i = 0; i < n*n; i++)
    {
        *(p + i) = (*(p + i)) * (*(p + i)) * (*(p + i));
    }
}

int main()
{
    int n;
    printf("Enter array's size: ");
    scanf("%d", &n);

    int a[n][n];

    printf("\nEnter array elements:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    cubeArray(&a[0][0], n);

    printf("\nCubes of all elements:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
