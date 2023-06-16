	#include <iostream>
	#include <cstring>
	using namespace std;
	// int main() {
	// int firstvalue = 5, secondvalue = 15;
	// char thirdvalue = 'a';
	// int * p1, * p2;
	// char * p3;
	// p1 = & firstvalue; // p1 = address of firstvalue
	// p2 = & secondvalue; // p2 = address of secondvalue
	// p3 = & thirdvalue; // p3 = address of thirdvalue
	// * p1 = 10; // value pointed to by p1 = 10
	// * p2 = * p1; // value pointed to by p2 = value pointed to by p1
	// p1 = p2; // p1 has now addressof second value
	// * p1 = 20; // value pointed to by p1 = 20 it will change the second value not 1
	// * p3 = 'b'; // value pointed to by p3 = ‘b ’
	// cout << "firstvalue is " << firstvalue << endl;
	// cout << "secondvalue is " << secondvalue << endl;
	// cout << "thirdvalue is " << thirdvalue << endl;
	// cout << "firstpointer " << *p1 << endl;
	// cout << "secondpointer " << *p2 << endl;
	// cout << "thirdpointer " << *p3<< endl;
	// return 0;
	// }
int main() {
int a=5;
int &b=a;
a++;
cout<<"b:"<<b;
return 0;
}

int f(int &a)//here &a is significant
{
a++;
}
int main() {
int a=5;
f(a);
cout<<"a:"<<a;
return 0;
}//a:6;
