#include<iostream>
using namespace std;
int main()

{//demonstrating the use of if, else, else if;
   int n;
   cout<<"enter a number"<<endl;
   cin>>n;
   if(n>0)
   {cout<<"the given no is a positive number"<<endl;}
   else if(n<0)
   cout<<"negative"<<endl;
   else
   cout<<"given no is zero"<<endl;
   char m;
cout<<"enter a character"<<endl;
cin>>m;
if(m>=65&&m<=90)
cout<<"the given character is an uppercase letter\n";
if(m>=97&&m<=122)
cout<<"input character is a lower case letter\n";
if(m>=48&&m<=57)
cout<<"input character is an integer\n";
//to print even numbers from 0 to n using while loop:
int o;
int i=0;
cout<<"Printing even number from 0 to o,enter a number"<<endl;
cin>>o;
while(i<=o)
{
    if(i%2==0)
    {cout<<i<<endl;}
    i=i+1;
}
//to print celsius to farenheit table upper than 37 degrees;

float c,f;
int j=37;

cout<<"enter temperature in celsius"<<endl;
cin>>c;
while(j<=c)
{
    f=(9*c)/5+32;//important don’t use 9/5 this will print int. floa/int=float
    cout<<"farenheit:"<<float(f)<<endl;
    j=j+1;
}



}