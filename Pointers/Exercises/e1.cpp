int main() {
int hari[5]={5,4,3,2,1};
cout<<"pointing location:"<<*(hari+3)<<endl<<"printing value:"<<2[hari]<<endl<<"printing address:"<<hari<<endl;;
//will print address+1;
int *p= &hari[1];
cout<<":"<<*p<<endl<<p/*this will contain address of that element*/<<"!="<<&p/*it will contain his own address*/<<endl;}
pointing location:2
printing value:3       
printing address:0x61fefc
:4
0x61ff00!=0x61fef8  
