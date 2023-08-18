#include <bits/stdc++.h>
using namespace std;
struct Student
{
    int id;
    string name;
    double gpa;
};

int main(){
Student p[5];
for (int i = 0; i < 5; i++)
{
    cin>>p[i].id>>p[i].name>>p[i].gpa;
}
for (int i = 0; i < 5; i++)
{
    cout<<p[i].name<<" "<<p[i].id<<" "<<p[i].gpa<<endl;
}
return 0;
}