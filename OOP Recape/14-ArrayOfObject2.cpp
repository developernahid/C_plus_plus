#include <bits/stdc++.h>
using namespace std;
class Student{
    private:
    string id;
    string name;
    double cgpa;
    public:
    void set(){
        cin>>name>>id>>cgpa;
    }
    void show(){
        cout<<name<<" "<<id<<" "<<cgpa<<endl;
    }
};

int main(){
    Student ob[11];
    for (int i = 1; i <=10; i++)
    { 
        ob[i].set();
    }for (int i = 1; i <=10; i++)
    {
        ob[i].show();
    }
    return 0;
}