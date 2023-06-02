#include<iostream>
using namespace std;//book allocation problem
bool possible(int ar[],int n,int member,int mid)
{//the array is sorted {10,20,30,40}//maximum no. of pages assigned to students is minimum.
    int pagesize=0,cout=1;
    for(int j=0;j<n;j++)//n=4
    {
        if(pagesize+ar[j]<=mid )//this is the game of matching the sum with //the minimum ///value
        {
            pagesize=pagesize+ar[j];
        }
        else
        {
            cout++;//here count plays a crucial role when count goes to 
//3 it returns false
            if(ar[j]>mid||cout>member)//50=f,
            {
                
                return false;
                }
            pagesize=ar[j];
        }
        
    }
    return true;
}
int binarysearch(int arr[],int size,int students)
{
    int s=0,sum=0,m,ans=-1;
    for(int i=0;i<size;i++)//size=4
    {sum=sum+arr[i];}//100
    int e=sum;
    m=s+(e-s)/2;
    while(s<=e)
    {
        if(possible(arr,4,2,m))
        {
            ans=m;//for mid 75,62,61 it will be true but it will iterate loop
//until s==e so that it could find the minimum value!!
            e=m-1;
        }
        else
        {
            s=m+1;
        }
        m=s+(s-e)/2;
    }
    return ans; 
}

int main()
{    //                                        90      70    60
    int array[4]={10,20,30,40};//allotment{{10,90}{30,70}{60,40}} min max=60
    //we have to find out the least out of maximum no of alloted pages to a student
    //given allotment should be in continuous manner
    int result=binarysearch(array,4,2);
    cout<<"minimum out of max allotment:"<<result;
}
