#include <stdio.h>
int main() 
{
    int a[100][100], m, n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe matrix is:\n");
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
