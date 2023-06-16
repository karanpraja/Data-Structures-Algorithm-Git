#include<iostream>
#include<string>
using namespace std;
int main()
{
string str;
cout<<"Enter string:";
cin>>str;
int arr[26]={0};
//but the condition is that there should be no repeating character of same type
for(int i=0;i<str.length()-1;i++)
{
    char c=str[i];
    if(c>='a'&&c<='z')
    {
        c=c-'a';
    }
    if(c>='A'&&c<='Z')
    {
        c=c-'A';
    }
    int num=c;
    arr[num]++;
}
int max=-1;
for(int i=0; i<=25; i++)
{
    if(max<arr[i])
    {
        max=arr[i];
    }
}
int maxoccurchar='a'+max;
char ch=maxoccurchar;
cout<<"The maximum occuring character is:"<<ch<<endl;
}