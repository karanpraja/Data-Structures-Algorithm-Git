int main() {
int a=5;
int &b=a;
a++;
cout<<"b:"<<b;
return 0;
}

int f(int &a)//here &a is significantex
{
a++;
}
int main() {
int a=5;
f(a);
cout<<"a:"<<a;
return 0;
}//a:6;