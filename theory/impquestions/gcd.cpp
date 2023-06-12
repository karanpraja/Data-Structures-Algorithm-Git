#include <iostream>
#include <cstring>
using namespace std;
//  int gcd (int c,int d){
// if (d ==0){
// return c;
// }
// else{
// return gcd(d, c%d);//this based upon recurssion d will become c and c%d will
// //become d
// }
//   }
// int main() {
//  int a,b;
//  cin>>a>>b;
//  cout<<gcd(a,b);//here gcd represents highest common factor;
// }
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
 int a,b;
 cin>>a>>b;
 cout<<gcd(a,b);//here gcd represents highest common factor
}
