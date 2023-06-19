#include <iostream>
using namespace std;
bool isorted(int arr[],int size)
{
//bool ans=((size==1||size==0)?(return true):((arr[0]>arr[1])?(return false):(return (isorted(arr+1,size-1)))));
if(size==1||size==0)
return true;
if(arr[0]>arr[1])
return false;
else
{
    bool remainingpart= isorted(arr+1,size-1);
    return remainingpart;
}}
bool binarysearch(int arr[],int s,int e,int key)
{//searching an element using rec+B.S
//bool ans=((size==1||size==0)?(return true):((arr[0]>arr[1])?(return false):(return (isorted(arr+1,size-1)))));
int m=s+(e-s)/2;
if(e==0)
return false;
if(arr[m]==key)
{return true;}
if(arr[m]>key)
{return binarysearch(arr,0,(m-1),key);}
else
{return binarysearch(arr,0,(m+1),key);}
}
int main() {
/*finding whether the given array is sorted using 
recursion*/
int size;
// cin>>size;
// int *arr=new int[size];
// for(int i=0;i<size;i++)
// {
//     cin>>arr[i];
// }
// for(int i=0;i<size;i++)
// {
//     cout<<arr[i]<<" ";
// }
int arr[6]={1,2,3,4,5,6};
bool ans=isorted(arr,size);
cout<<((ans)?("the given array is sorted"):"unsorted");
bool x=binarysearch(arr,0,5,1);
cout<<endl<<binarysearch(arr,0,5,1);
}
/*if(size==0)
return false;
if(arr[0]==key)
return true;
else
{
    return isorted(arr+1,size-1,key);
}*//* this is in case you want to search an element from the given array*/

