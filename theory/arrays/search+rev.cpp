#include<iostream>
using namespace std;//linear search
//bool declaration and initialization are simultaneous
//reversing an array
int pa(int array[10], int s)
{int start=0,end=s-1;
 while(start<=end)
  { swap(array[start],array[end]);
    start++;      //reversing an array                       
    end--;}
   return 0;}
void printarr(int arry[10],int si)
{for(int i=0;i<si;i++)
    {cout<<arry[i]<<" ";}
    cout<<endl;}
bool search(int arry[],int s,int n)//no need to declare function in c++ language 
{
    for(int i=0;i<s;i++)
        {
        if(arry[i]==n)
        {
            return 1;
        }
        }
}


   int main()     
{
int size;cout<<"enter array size:"<<endl;cin>>size;
int arr[size];cout<<"enter the numbers:";//this is a bad practice
for(int i=0;i<size;i++)
{cin>>arr[i];}
int num;cout<<"enter num to be searched:";cin>>num;
bool found= search(arr, size,num);
if(found==1)
{cout<<"number is present in array";}
else{cout<<"input number is absent";}


//reversing an array



int ary[10]={20,19,18,17,16,15,14,13,12,11};
pa(ary,sizeof(ary)/4);// there is no need to assign it it will automatically catch it;
cout<<"\nReversing the given array:\n";
printarr(ary,sizeof(ary)/4);//we divided it by 4 because one 1 integer=4 bits;
}

//If we want to swap alternate elements of given array:odd
//   while(start<=end)
//   {
//     swap(array[start],array[start+1]);
//     swap(array[end],array[end-1]);
//     start=start+2;
//     end=end-2;
//    }

