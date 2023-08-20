/* Create a class called "calculator" with the variables number1 and number2. Use a constructor to initialize these private variables. calculate the sum, difference and product of these numbers.
*/
#include <bits/stdc++.h>
using namespace std;
class calculator{
    private:
    int number1,number2;
    public:
    calculator(){
        number1=10;
        number2=5;
    }
    void cal(){
        cout<<number1+number2<<endl;
        cout<<number1-number2<<endl;
        cout<<number1*number2<<endl;
        cout<<number1/number2<<endl;
        cout<<number1%number2<<endl;
    }
};
int main(){
    calculator ob;
    ob.cal();
}