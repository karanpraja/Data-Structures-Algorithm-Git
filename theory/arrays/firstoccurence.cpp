#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key)
{//remember this algorithm works for sorted array 
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {if(arr[mid]==key)
    {
            ans=mid;
            s=mid+1;/*//s=mid+1 for last occurence and e=m-1 for first occurence
            // to find out the first occurence we have to shift end to the left as start is already zero 
            // to find out the last occurence we have to shift start point to right as end is already zero
            //shifting means we are continuously running the loop until it satisfies the condition variable mid value will keep upon changing and will be stored accordingly!!*/
            }
        else if(key<arr[mid]){
        e=mid-1;}
        else
        {s=mid+1;}
mid=s+(e-s)/2; }
    return ans;}



int main()//finding the most repeating number in a given array
{   int array[14]={1,2,3,3,3,3,4,5,5,5,5,7,8,9};
    int index=binarysearch(array,14,3);
    cout<<"first occurence of 3 is:"<<index<<endl;
      index=binarysearch(array,14,5);
    cout<<"first occurence of 5 is:"<<index<<endl;}

