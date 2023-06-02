#include<iostream>
using namespace std;
int binarysearch(int arr[],int size)
{//remember this algorithm works for sorted array //finding pivot element
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    
    while(s<e)
    {
        if(arr[mid]>arr[0])//because array is rotated and sorted!!
    {
        s=mid+1;
    }
    else
    //working algorithm
// when m1=9/2=4;arr[4]>arr[0]=>start=mid+1{sorted array, minimum value can't be on left side}
//s1=5 and e1=9=>m2=7=>arr[7]<arr[0];e2=7 n m2=7{here loop will end according to s<e condition}
    {
        e=mid;
    }
      
mid=s+(e-s)/2;
 }
    return s;}
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
{   int array[8]={6,7,8,9,10,1,2,3};//means least element index
int index=binarysearch(array,8);
cout<<"pivot element is:"<<index<<endl;
//searching element using bs
int ary[10]={1,2,3,4,5,6,7,8,9,10};
int idx=keysearch(ary,0,10,6);
cout<<"search element index:"<<idx<<endl;

}