int q=6;
int *p=&q;
int **k=&p;
cout<<"double pointed:"<<**k<<endl;
int &j=q;//addres of int j;
j+=2;
cout<<"passed by reference q:"<<q<<endl;}
double pointed:6
passed by reference q:8

