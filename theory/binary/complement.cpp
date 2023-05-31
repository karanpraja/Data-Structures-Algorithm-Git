#include<iostream>
using namespace std;
int main()
{

// //finding the compliment of a given positive integer returning positive value
//     int num,mask=0,n,ans;
//     cout<<"NUM:";//in this code we have to find out compliment of a number and that is 1s and it must be positive only
//     cin>>num;    //5=0000000101,5'=111111111010,if we print it then it will give -6 because of 1111
//     n=num;       // but we want a positive no which will be in 000000000(xyz) form
//     while(n!=0)  //for that we have to & 5'with 00000000000111, that 0&1=0 and 1&1=1. It will return same value.
//     {            //that is why we have to  mask it
//         mask=(mask<<1)|1;
//         n=n>>1;  // when there will be zeros it automatically terminates the loop;
//     }
//     ans=(~num)&mask;
// cout<<ans;
//     }//output:2
/*bool isPowerOfTwo(int n){
{
    int ans=1,i;
   for(i=0;i<=30;i++)//this loop will run 31 times as per 32 bit condition;
   {
   
    if(ans==n)
    {return true;}//we have used here boolen al that is why we are usin T &F
    if(ans<INT32_MAX)//value of answer should be less than 2^31
    ans=ans*2;//so, we divide it by 2 to make it 2^30
   }
   return false;
}
}
*/
//gettting out of the infinite loop; find out;add break;

   int num;
   cout<<"num";
   cin>>num;
   while(1)
   {
      switch(num)
   {
      case 1:
      
      cout<<"hare krishna";
goto table;
      break;
      case 2:
      cout<<"chant the holy name";
      break;
      default:
      cout<<"one must be devoted to the service of guru";
      break;
   }
   }
   table:;
   }
