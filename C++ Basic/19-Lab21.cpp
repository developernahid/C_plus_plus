#include <bits/stdc++.h>
using namespace std;
class Calculator{
private:
int num1;
int num2;
public:
Calculator(){
    cin>>num1>>num2;
}
friend void cal(Calculator ob);
};
void cal(Calculator n){
    cout<<"Sum= "<<n.num1+n.num2<<endl;
    cout<<"Product= "<<n.num1*n.num2<<endl;
    cout<<"Quotient= "<<n.num1/n.num2<<endl;
    cout<<"Remainder= "<<n.num1%n.num2<<endl;
}
int main(){
    Calculator ob;
    cal(ob);
    return 0;
}


