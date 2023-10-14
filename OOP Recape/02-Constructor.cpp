#include <bits/stdc++.h>
using namespace std;
class A{
    private:
    int a;
    string name;
    public:
//Default constructor:
 /*   A(){
        cin>>a;
        cout<<a;
    }
*/
//Parameterized constructor:
//Constructor name & class name must be  same always, No return type
A(int id, string nam){
    a=id;
    name=nam;
}
//Show function will print the value;
void show(){
    cout<<a<<endl;
    cout<<name<<endl;
}
  
};

int main() {
    A ob(143,"Nahid"); //Initialize value & passing it to constructor;
    ob.show(); //call the show function; 
    return 0;
}