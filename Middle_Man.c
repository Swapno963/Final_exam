#include<stdio.h>
int main()
{
    int ar_siz;
    scanf("%d",&ar_siz);
    int arr[ar_siz];
    
    // taking inpult
    for(int i=0; i<ar_siz; i++)
    {
        scanf("%d ",&arr[i]);
    }

    // accendint order
    for(int i=0; i<ar_siz-1;i++)
    {
        for(int j=i+1; j<ar_siz; j++)
        {

            if(arr[i]>arr[j])
            {
                int tem = arr[i];
                arr[i] = arr[j];
                arr[j] = tem;
            }
        }
    }

    if(ar_siz%2==0){
        printf("%d %d",arr[(ar_siz/2)-1],arr[(ar_siz/2)]);
    }
    else
    {
        int index =(ar_siz+1)/2;
        printf("%d",arr[index-1]);
    }
    
    return 0;
}