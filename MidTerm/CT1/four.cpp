/*Write a C++ program with a class to enter 5 students' details (id, name, address) using a function called read() and display the details of the students using a function called display(). And lastly print "object destroyed" with a destructor.*/
#include <bits/stdc++.h>
using namespace std;
class Student{
    private:
    int id;
    string name;
    string address;
    public:
    void read(){
        cin>>name>>id>>address;
    }
     void display(){
        cout<<name<<" "<<id<<" "<<address<<endl;
    }
    /*~Student(){
        cout<<"object destroyed"<<endl;
    } */
};
int main(){
    Student ob1;
    Student ob[6];
    for (int i = 1; i <6; i++)
    { 
        cout<<"Enter student-"<<i<<" Name, ID & Address:";
        ob[i].read();
    }
    cout<<"Output"<<endl;
     for (int i = 1; i < 6; i++)
    {
        ob[i].display();
    }
    return 0;
}