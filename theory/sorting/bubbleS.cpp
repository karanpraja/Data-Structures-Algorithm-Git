#include<iostream >
using namespace std;
int main()
{
    int arr[7]={1,3,8,5,2,1,6};
    for(int i=1;i<=6;i++)//outer six rounds for comparing of each element 
    {
        for(int j=0;j<=6-i;j++)//inner for shifting of each element!!//here we are using -i to reduce time complexity!!because bigger element is already at last poisition
        {
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            }
        }
    }
    int k=0;
    while(k!=7)
    {
        cout<<arr[k]<<" ";
        k++;
    }
}
