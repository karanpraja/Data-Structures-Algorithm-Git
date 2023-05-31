#include<iostream>
#include<climits>
using namespace std;
int getmin(int num[],int m)
{
    int mini=INT_MAX;//we have to use maximum value to make it minimum value
    for(int i=0;i<m;i++)
    {
        mini=min(mini,num[i]);
    }
    return mini;
}
int getmax(int num[],int m)
{
    int maxi=INT_MIN;//here we are using least to make max
    for(int i=0;i<m;i++)
    {
        maxi=max(maxi,num[i]);
    }
    return maxi;
}
int main()
{
//finding max and minimum value of array
int i,big=1,small, array[6]={2,5,7,8,9,3}/*takes memory from stack*/,n;/* for dnam int arr=new int[] memory from heap and must clear memory*//*for 2d array
int **arr=new *int[]*/
i=sizeof(array)/sizeof(int);//because one integer is of 4bits
cout<<"sizeof:"<<i<<endl;
for(n=0;n<i;n++)
{
    // cout<<array[n]<<endl;
    {if(big<array[n])
    big=array[n];   }
    if(small>array[n])
   {small=array[n];}
}
cout<<big<<endl;
cout<<small<<endl;

//here dnam could be used
    int size;
    cout<<"Enter size:";
    cin>>size;
    int num[100];

    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }
    cout<<"maximum value is:"<<getmax(num,size)<<endl;
    cout<<"minimum value is:"<<getmin(num,size)<<endl;
    return 0;
}

