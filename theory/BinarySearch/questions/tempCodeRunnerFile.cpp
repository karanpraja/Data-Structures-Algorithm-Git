    int keysearch(int arry[],int s, int e,int key)
    {
        int m=s+(e-s)/2;
        while(s<=e)
        {
            if(arry[m]==key)
            {
                return m;
            }
            if(arry[m]>key)
            {
                e=m-1;
            }
             else 
            {
                s=m+1;
            }
                m=s+(e-s)/2;
        }
            return -1;
        }