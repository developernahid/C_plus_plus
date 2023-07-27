#include <bits/stdc++.h>
using namespace std;
class Student {
public:
string name;
int age;
};
class person : public Student {
    public:
    int id;
    void show(){
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<id<<endl;
}


};
int main(){
person s1;
s1.name="Nahid";
s1.age=20;
s1.id = 143;
s1.show();
}