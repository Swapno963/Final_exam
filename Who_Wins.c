#include<stdio.h>
int main()
{
    int test_case;
    int tiger =0;
    int pathan = 0;
    scanf("%d",&test_case);

    for(int i=0; i<test_case; i++)
    {
        int x,y;
        scanf("%d %d",&x, &y);
        if(x>y){
            tiger+=1;
        }
        if(x<y)
        {
            pathan+=1;
        }
    }
   // printf("%d %d",tiger,pathan);
    if(tiger>pathan)
    {
        printf("Tiger");
    }
      else if(tiger<pathan)
    {
        printf("Pathan");
    }
    else
    {
        printf("Draw");
    }
    return 0;
}