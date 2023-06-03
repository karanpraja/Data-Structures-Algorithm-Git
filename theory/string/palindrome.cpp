{int isPalindrome(string S){
 int s=0,e=S.size()-1;
 for(int i=0;i<S.size()-1;i++){
 if(S[s]!=S[e])
 {return false;}
 else{s++,e--;}}
 return true;} } //if inside becomes false then outside will not be executed

2nd approach
    {   string s1=s;
	    reverse(s.begin(),s.end());
	    if(s1==s)
	    return 1;
	    else
	    return 0;}