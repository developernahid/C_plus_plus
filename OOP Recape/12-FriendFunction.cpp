#include <bits/stdc++.h>
using namespace std;
class sum{
private: 
int a;
int b;
public:
//Initialize a & b value use a default constructor
sum(){
    a=10;
    b=5;
}
// Declare a friend function which name add; 
//Friend function naming rules:
/// friend return_type func_name(class_name object_name)
friend void add(sum o);
};
//Working outside the class use the friend function add, here we received the object by use ob. 
void add(sum ob){
cout<<"Sum= "<<ob.a+ob.b;
}
int main(){
    sum ob1;
    add(ob1);
    return 0;
}