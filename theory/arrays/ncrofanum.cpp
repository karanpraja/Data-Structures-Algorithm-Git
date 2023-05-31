//to find out ncr of a given no.
#include<iostream>
using namespace std;
//it is need if we are putting function after
float fact(float num)
{
    float f;
    if(num==1)
    return(1);
    else
    f=num*fact(num-1);
    return (f);
    cout<<"num:"<<num<<endl;
    
}
int main()
{//finding ncr of a given no:
    float  n,r,ncr,f1,f2;//note: do not input small no first and big no as second
    cout<<"enter n and r"<<endl;
    cin>>n>>r;
    f1=fact(n);
    f2=fact(r)*fact(n-r);
    ncr=(float)f1/f2;
    cout<<"ncr:"<<ncr;
}

