#include<stdio.h>
int main()
{
    int n,m,element;
    scanf("%d",&n);
    scanf("%d",&m);
    int arr[n][m];
    // last row
    for(int row =0; row < n; row++)
    {
        for(int col = 0; col < m; col++)
        {
             
            scanf("%d",&arr[row][col]);
            
        }
    }

// last row
       for(int i =0; i < m; i++)
    {
        printf("%d ",arr[n-1][i]);
        
    }
    printf("\n");
// last col
    for(int j = 0; j < n; j++)
        {       
            printf("%d ",arr[j][m-1]);
            
        }

    return 0;
}