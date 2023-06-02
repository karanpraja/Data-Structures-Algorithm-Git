 #include<iostream>
using namespace std;//writing an algorithm to find out square root of a number
int binarysearch(int num)
{
    int s=0,e=num,m;
    m=s+(e-s)/2;
    while(s<=e)
    {
        if(m*m==num)
        {
        return m;
        }
        if(m*m<num)
        {
        s=m+1;
        }
        else
        {
        e=m-1;
        }
        m=s+(e-s)/2;
    }
    return m-1;
}
double moreprecise(int no,int p, int root)//biggest mistake of not
//putting double at function call, biggest mistake, biggest mistake
{
    double a=root;
    double factor=1;
    for(int i=0;i<p;i++)
    {
        factor=factor/10;
        for(double j=a;j*j<no;j=j+factor)
        {
            a=j;//assigning answer to a 
        }//incase we need more precision loop will again iterate and it 
        //will assign new value to a
    }
    return a;
}

int main()
{
   int n,sqrt;
   cout<<"enter the number:"<<endl;
   cin>>n;
sqrt=binarysearch(n);
cout<<"square root:"<<sqrt<<endl;
double psqrt= moreprecise(n,3,sqrt);
cout<<"precise root:"<<psqrt<<endl;
return 0;
}//there is no mistake in this code on how to find square root
