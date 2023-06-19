#include<iostream>
using namespace std;
int func(int hare[],int n)
{
    //printing the given array(before)
    for(int i=0;i<n;i++)
    {
        cout<<hare[i]<<" ";
    }
}
int changeval(int *hare, int n)
{
    cout<<endl<<"sizeof passedarray:"<<sizeof(*hare)<<endl;
    //value is four because pointer is of size four bytes only
    //changing the values//since hare[i]==*(hare+i)
    for(int i=0;i<n;i++)
    {
        cout<<hare[i]<<" ";//it will start from 40 rather 
        //than starting from 10 because we have added 3 
    }   
}
int main() {
int hare[10]={10,20,30,40,50,60};
//passing an array to a function to print
func(hare,6);
//changing the values of an array
changeval(hare+3,5);//this is useful incase
//want to alter a part of an array.
cout<<endl<<"array after alteration:";
 for(int i=0;i<3;i++)
    {
        cout<<hare[i]<<" ";
    }
return 0;}
