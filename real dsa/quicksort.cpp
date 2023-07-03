#include <iostream>
using namespace std;
int partition(int *arr,int s,int e)
{
int pivot,cnt;
cnt=0;
pivot=arr[s];
for(int i=s+1;i<=e;i++)
{
    if(arr[s]>=arr[i])
   {cnt++;}
}
int pivotindex=s+cnt;
swap(arr[pivotindex],arr[s]);
int i=s,j=e;
while(i<pivotindex&&j>pivotindex)
{
    while(arr[i]<pivot)
    {
        i++;//to shift pointer to the next value
    }
    while(arr[j]>pivot)
    {
        j--;
    }
    if(i<pivotindex&&j>pivotindex)
    {
        swap(arr[i++],arr[j--]);//it swaps the required no’s 
    }
}
return pivotindex; //it will store index value in 
//p variable
}
void quicksort(int *arr,int s,int e)
{
    if(s>=e)//base condition
     return;
    int p=partition(arr,s,e);//here p will store pivot index
    quicksort(arr,s,p-1);// half it will run until encounters base statement
    quicksort(arr,p+1,e);//another half

}
int main()
{
    //dynamically creating an array
//     int size;
//     cout<<"size:\n";
//     cin>>size;
//     int *arr=new int[size];//always remember to use
//     //pointer to dynamically allocate an array
// for(int i=0;i<size;i++)
// {
//     cin>>arr[i];
// }
// cout<<"\n";
int arr[9]={4,1,6,2,3,7,5,8,0};
int size=sizeof(arr)/sizeof(arr[0]);
quicksort(arr,0,size-1);
for(int i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}
