  for(int i=0; i<ar_siz-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int tem = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = tem;
        }
    }