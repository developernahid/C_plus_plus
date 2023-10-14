#include <bits/stdc++.h>
using namespace std;
struct Student
{
    int id;
    string name;
    double gpa;
};

int main(){
Student p1;
cin>>p1.id;
cin>>p1.name;
cin>>p1.gpa;
cout<<p1.name<<" "<<p1.id<<" "<<p1.gpa<<endl;
}