#include<iostream>
using namespace std;
int main()
{
//dynamically creating a 2d array;
int rows,cols;
cout<<"enter the rows and col";
cin>>rows>>cols;
int** arr=new int*[rows];
for(int i=0 ;i<rows;i++)
{
    arr[i]=new int[cols];
}
for(int i=0;i<rows;i++)
{
    for(int j=0;j<cols;j++)
    {
        cin>>arr[i][j];
    }
}
for(int i=0;i<rows;i++)
{
    for(int j=0;j<cols;j++)
    {
        cout<<arr[i][j]<<"\t";
    }
}

for(int i=0;i<rows;i++)
{
    delete[] arr[i];//it is compulsory to delete after initialization
}
delete[] arr;}