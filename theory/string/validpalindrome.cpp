#include<iostream>
using namespace std;
bool valid(char ch)
{
    if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9')||(ch>='A'&&ch<='Z'))
    {
        return 1;//checking whether the given string is palindrome neglecting uppercase letter.
    }
    else
    {
        return 0;
    }
}
char tlc(char ch)
{
  if(ch>='A'&&ch<='Z')
  {ch=ch-'A'+'a';
  return ch;}
  else
  {
    return ch;
  }
  
}
bool checkpalindrome(string s)
{
  int st=0,e=s.length()-1;
while(st<=e)
{
  if(s[st]!=s[e])
  {
    return false;
    
  }
  else
  {
    st++,e--;
  }
} 
return true;//if the inside condition is true then this will not be executed.
}


int main()
{
string s = "A man, a plan, a canal: Panama";
string temp="";//sizeof f(x) counts only characters but lenght function counts everything
// cout<<"sizeof:"<<s.length()<<endl;
for(int i=0;i<s.length();i++)
        {
            if(valid(s[i]))
            {
              temp.push_back(s[i]);
            }
            else
            {
              continue;
            }
        }
        // cout<<"string temp:"<<temp<<endl;
        //converting uppercase letters to lower case letters
        for(int j=0;j<temp.length();j++)
        {
        temp[j]=tlc(temp[j]);//checking whether uppercase==lowercase?
        }
        cout<<temp<<endl;//string
        cout<<checkpalindrome(temp);//checking+giving output!! output:1 or 0
        // return checkpalindrome(temp);
        }
