#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int spc = n-1;
    int star = 1;
    for(int i=1; i<=n; i++)
    {
        // space
        for(int s=n-i; s>0; s--)
        {
            printf(" ");
        }

        // star
        for(int st=1; st<=2*i-1;st++ ){
            if(i%2 == 0){
                printf("*");
            }
            else{
                printf("^");
            }
          
            star+=2;
        }
        printf("\n");
    }
    return 0;
}