#include<iostream>//how to find a number using binary search in a mountain array!
using namespace std;//NOT WORKING
int binarysearch(int arr[],int size)
{//remember this algorithm works for sorted array 
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(arr[mid-1]<arr[mid]&&arr[mid]>arr[mid+1]||arr[mid-1]<arr[mid]&&arr[mid+1]==NULL)
        {
            ans=mid;
            //s=mid+1 for last occurence and e=m-1 for first occurence
            // to find out the first occurence we have to shift end to the left as start is already zero 
            // to find out the last occurence we have to shift start point to right as end is already zero
            //shifting means we are continuously running the loop until it satisfies the condition variable mid value will keep upon changing and will be stored accordingly!!
}
        else if(arr[mid]>arr[mid+1]){
        e=mid;}
        else if(arr[mid]<arr[mid+1]){
        s=mid+1;}
mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int array[14]={1,2,3,4,5,6,7,8,6,5,4,3,2,1};
    int index=binarysearch(array,14);
    cout<<"peak index of the array is:"<<index<<endl;
}
