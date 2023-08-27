/*Describe different type of constructors with an example code*/
#include <bits/stdc++.h>
using namespace std;
class Student{
    private:
    int id;
    string name;
    public:
    // Default constructor...
    Student(){
        id=143;
        name="Nahid";
        cout<<name<<" "<<id<<endl;
    }
    //Parameterized constructor
    Student(int a, string nam){
        id=a;
        name=nam;
        cout<<name<<" "<<id<<endl;
    }

};
int main(){
    Student ob;
    Student ob1(321,"Akhi");
    return 0;
}