#include <bits/stdc++.h>
using namespace std;
class Employee{
    private:
    int salary;
    public:
    friend class HRDepartment;
};
class HRDepartment{
public:
void show(Employee o){
    cin>>o.salary;
    cout<<o.salary<<endl;
}
};
int main(){
    Employee p1;
    HRDepartment p2;
    p2.show(p1);
}