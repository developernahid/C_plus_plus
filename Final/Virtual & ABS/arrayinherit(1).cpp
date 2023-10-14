#include <bits/stdc++.h>
using namespace std;
class A{
public:
int ar[10];
int sum1=0;
void check1(){
for(int i=0; i<10; i++){
    cin>>ar[i];
    sum1= sum1+ar[i];
}
}
};
class B: public A{
public:
int ar[10];
int sum2=0;
void check2(){
for(int i=0; i<10; i++){
    cin>>ar[i];
    sum2= sum2+ar[i];
}
}
};
class C: public B{
public:
int ar[10];
int sum=0;
void check3(){
for(int i=0; i<10; i++){
    cin>>ar[i];
    sum= sum+ar[i];
}
int diff = sum-(sum1*sum2);
cout<<diff<<endl;
}
};

int main()
{
C ob;
ob.check1();
ob.check2();
ob.check3();
return 0;
}
