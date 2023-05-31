#include<iostream>
using namespace std;
int main()
{
   int num;
   cout<<"num:";
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
      cout<<"japa the holy name";
      goto table;
      break;
      default:
      cout<<"one must be devoted to the service of guru";
      goto table;
      break;
   }
   }
   table:;

   int num1, num2;
   char op;
   
   cout<<"\nEnter num1 and num2:";
   cin>>num1>>num2;
   cout<<"op:";
   cin>>op;
   
      switch(op)
   {
      case ('+'):
      cout<<num1+num2;
      break;
      case ('-'):
      cout<<num1-num2;
      break;
      case ('*'):
      cout<<num1*num2;
      break;
      case ('/'):
      cout<<num1/num2;
      break;
      case ('%'):
      cout<<num1%num2;
      break;
      default:
      cout<<"\none must be devoted to the service of guru";
      break;
   

   }
   
   

   int amount;// total no of notes in a given amount
   int n1,n2,n5,n10,n20,n50,n100,n500;
   n1 = n2 = n5 = n10 = n20 = n50 = n100 = n500 =0;//learn it!!
   cout<<"\nPlease Enter Your total Amount to find the notes : ";
   cin>>amount;
   switch(amount>=500)
   {
      case 1:
         n500 = amount/500;
         amount -= n500 * 500;
        break;
   }
   switch(amount >=100)
   {
      case 1:
         n100 = amount/100;
         amount -= n100 * 100;
        break;
   }
   switch(amount >=50)
   {
      case 1:
         n50 = amount/50;
         amount -= n50 * 50;
   }
   switch(amount >=20)
   {
      case 1:
         n20 = amount/20;
         amount -= n20 * 20;
        break;
   }
   switch(amount >=10)
   {
      case 1:
         n10 = amount/10;
         amount -= n10 * 10;
        break;
   }
   cout << "500 = " << n500 <<endl;
    cout << "100 = " << n100 <<endl;
    cout << "50 = " << n50 <<endl;
    cout << "20 = " << n20 <<endl;
    cout << "10 = " << n10 <<endl;
}
