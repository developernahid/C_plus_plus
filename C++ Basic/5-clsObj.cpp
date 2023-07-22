#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
};

int main(){
    Student obj;
    cin>>obj.name;
    cin>>obj.roll;
    cout<<obj.name<<endl;
    cout<<obj.roll<<endl;

    return 0;
}