#include<stdio.h>
int main()
{
    int n;
    int element,flag=0;
    scanf("%d",&n);
    for(int row=0; row<n; row++)
    {
        for(int col=0; col<n; col++)
        {
            scanf("%d",&element);
            if(row==col)
            {
                if(element !=1){
                    flag = 1;
                }
            }
            else
            {
                if(element != 0)
                {
                    flag =1;
                }
            }
        }
    }
    if(flag == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");

    }
  
    return 0;
}