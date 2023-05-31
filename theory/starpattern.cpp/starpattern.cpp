#include<iostream>
using namespace std;
int main()

{// to print * pattern in which row=column
char c='*';

int n,i=1;
cout<<"Enter number of rows and column in square pattern:"<<endl;//***
cin>>n;                                                          //*** 
// int j=1                                                       //***
//this will not work because variable value will be constant
//because in loop it will a local variable 
while(i<=n)
{
    int j=1;// this will work as variable value will change
    while(j<=n)
    {
        cout<<c;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}






//write a code to print triangular pattern using while loop/_|
int m,li=1;
cout<<"\nenter number of rows and column in triangular pattern:"<<endl;//
cin>>m;

while(li<=m)
{
    int j=1,k=1,space;
    space=m-li;// this will work as variable value will change
    while(space)
    {
        char c=' ';//this is not valid when adding and printing are done ate the same time; 
        cout<<c;
        space=space-1;
    }
    //  cout<<endl;// this should not be used in this as it will go to new line rather than adding next number
while(k<=li)
    {
        char c='*';
        cout<<c;
        k=k+1;
    }
    cout<<endl;
    li=li+1;
}
//to print 
/*  *   
   **
  ***
 ****
******/







    char ch='*';
    int nu;
    cout<<"Enter height for tower pattern:";
    cin>>nu;
    for(int i=1;i<=nu;i++)
    {
      int s=nu-i,j=i,k=2;

        while(s>0)
        {
            cout<<" ";
            s--;
        }
        while(j>0)
        {
          cout<<j;
          j--;
        }
        while(k!=i+1)/*when 2!=2 it will not run */
        {
          cout<<k;//it will first execute and print 2 and no change
          k++;
        }

        cout<<endl;}
      /* 1
        212
       32123 */







     cout<<"\nprinting special pattern\n";

    int row, iii = 1 ,l=0,space=0; // assign value of iii and iii from starting
    cout << "rows:";
    cin >> row;

    while (iii<=row)
    {
       int j=1;
        while (j <= row+1-iii)
        {
            cout << j;
            j++;
        }
        space = space+iii*2-2;
        while (space)
        {
            cout << "*";
           space--;
        }
        l=row+1-iii;
        while (l)//means here we can't use row in while loop
        //remember loop variable can’t be used inside a nested loop
        {
            cout << l;
            l--;
        }

        iii++;
        cout << "\n";
    }
}



/*1234554321
  1234**4321 and so on;till one*/


