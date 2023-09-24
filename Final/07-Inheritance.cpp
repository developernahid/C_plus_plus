#include <bits/stdc++.h>
using namespace std; 
class Student{
public:
int id;
string name;
};
class person1: public Student{
    double gpa;
    public:
    void input2(){
    cin>>id;
    cin>>name;
    cin>>gpa;
    cout<<name<<" "<<id<<endl;
    cout<<gpa;
    }
};
int main(){
    person1 nahid;
     nahid.input2();
    return 0;

}