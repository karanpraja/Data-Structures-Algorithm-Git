#include<iostream>
using namespace std;
int gcd(int c, int d)
{
  while(c!=0||d!=0)
  {
    if(c==0)
    return d;
    if(d==0)
    return c;
    if(c>d)
    {c=c-d;}
    else
  {d=d-c;}
  }
  return d;
}
int main() {
 int a=27,b=18;
//  cout<<"Enter the values of a and b:";
//  cin>>a>>b;
 cout<<gcd(a,b);//here gcd represents highest common factor
}
