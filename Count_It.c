#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    int capital=0;
    int small=0;
    int space=0;
    fgets(a,1001,stdin);
    for(int i=0; i<strlen(a); i++)
    {
        if(a[i]==32)
        {
            space+=1;
        }

        if(a[i]>=65 && a[i]<=90)
        {
            capital+=1;
        }
        else if(a[i]>=97 && a[i]<=122){
            small+=1;
        }
    }
            printf("Capital - %d\nSmall - %d\nSpaces - %d",capital,small,space);
            

    return 0;
}