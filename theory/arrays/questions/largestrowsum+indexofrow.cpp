#include<iostream>//finding target element in an array
using namespace std;
int main()
{
    int row,col;
    cout<<"row:"<<endl;cin>>row;
    cout<<"col:"<<endl;cin>>col;
    int arr[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
      for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //find largest sum of the row and finding row index
    int index=0,max=-1,sum=0;
      for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            sum=sum+arr[i][j];
            if(sum>max)
            {
                max=sum;
                index=i;
            }
        }
        sum=0;
    }
    cout<<"max:"<<max<<endl;
    cout<<"index:"<<index;
}
