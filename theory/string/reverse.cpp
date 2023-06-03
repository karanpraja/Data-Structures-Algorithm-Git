method 1;
string revStr(string s) {
int st=0,e=s.size()-1;
while(st<=e)
{
swap(s[st++],s[e--]);
}
return s;
}
method 2;
string revStr(string S) {
string str="";
int len = S.length();

for(int i=len-1; i>=0; i--){
str = str + S[i];}
return str;
    }
   
