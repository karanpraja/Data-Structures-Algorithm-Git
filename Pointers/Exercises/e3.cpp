#include<iostream>
using namespace std;
int main()
{
char ch[10]="hare rama";//here it should have been four but it is 5?
//because one space for a "/0";
cout<<"char:"<<ch<<endl;
char *c=&ch[10];
char seva='k';//single character single quotes
char *temp=&seva;
cout<<"temp:"<<temp<<endl;
return 0;
}