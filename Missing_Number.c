#include<stdio.h>
int main()
{
    int test_case;
    long long int exp_res,element;
    scanf("%d",&test_case);
    

    // 
    for(int i=0; i<test_case; i++)
    {
        scanf("%lld",&exp_res);
        for(int i=0;i<3; i++)
        {
            scanf("%d",&element);
            exp_res-=element;
        }
        printf("%lld\n",exp_res);
    }

    return 0;
}