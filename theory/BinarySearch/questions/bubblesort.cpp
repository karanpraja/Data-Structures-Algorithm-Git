#include<iostream>
using namespace std;
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
int main()
{
int k,ik;//implementing bubble sort algorithm
cin>>k;
if(array[0]<=k<array[idx])
{ik=keysearch(array,0,idx-1,k);}
else
{ik=keysearch(array,idx,9,k);}
cout<<"Index no. at which key is present:"<<ik<<endl;
}