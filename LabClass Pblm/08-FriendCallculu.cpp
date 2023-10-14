/*Suppose you have a class named calculator, which has two private variables num1, num2. You have to calculate the sum, product, quotient and remainder using the friend function.
*/
#include <bits/stdc++.h>
using namespace std;
class calculator{
    private:
    int number1,number2;
    public:
    calculator(){
    cin>>number1;
    cin>>number2;
    }
    friend void cal(calculator ob);
};
    void cal(calculator o){
        cout<<o.number1+o.number2<<endl;
        cout<<o.number1-o.number2<<endl;
        cout<<o.number1*o.number2<<endl;
        cout<<o.number1/o.number2<<endl;
        cout<<o.number1%o.number2<<endl;
    }
int main(){
    calculator ob;
    cal(ob);
}