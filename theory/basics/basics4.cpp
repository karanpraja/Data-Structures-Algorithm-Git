#include<iostream>
#include<math.h>
#include<string>
using namespace std;
int main()
{
//reverse integer code is incomplete
int nu,rm;
cout<<"enter an integer:";
cin>>nu;
while(nu!=0) {   rm=nu%10;//we could use space function to reverse it!
               cout<<rm;
                nu=nu/10;}
int m, b,re;
cout<<"\nenter a number:";//find code of how to print reverse integer
cin>>m;
string num;
while(m!=0)
{
    b=m/2;//this is true but it will not reverse the integer
    re=m%2;
    cout<<re;
    m=b;//PLEASE TELL ME HOW TO REVERSE THIS INTEGER BY STORING INSIDE
}

// converting binary to integer;//code is correct!!
  int bn=0,ree,N,i=0;
  cout<<"\nenter binary code"<<endl;//divide given no. by 2 and then note down //binary digits from down to top.
  cin >>N;
  while(N!=0)
  {
    ree=N%10;
    if(ree==1)
    {
        bn=bn+pow(2,i);
    }
    N=N/10;
    i++;
  }
    cout<<bn<<endl;


}