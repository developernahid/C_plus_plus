#include <bits/stdc++.h>
using namespace std;
class Animal{
protected:
string name;
};
class Cat: public Animal{
public:
void setname(){
    getline(cin,name);
}
void getName(){
    cout<<name;
}
};
int main(){
    Cat p1;
    p1.setname();
    p1.getName();
}