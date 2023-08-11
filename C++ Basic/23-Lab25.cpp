#include <bits/stdc++.h>
using namespace std;
class Employee{
    private:
    int id;
    int salary;
    public:
    Employee(int x, int y){
        id=x;
        salary=y;
    }
    friend void check(Employee o, Employee m);
};
void check(Employee ob1, Employee ob2){
        if (ob2.salary>ob1.salary)
        {
        cout<<"Employee id:"<<ob2.id<<" salary is highest"<<endl;
        }
        else{
        cout<<"Employee id:"<<ob1.id<<" salary is highest"<<endl;
        }
    }
int main(){
    int a,b,c,d;
    cout<<"Enter employee 1 id & salary:";
    cin>>a>>b;
    cout<<"Enter employee 2 id & salary:";
    cin>>c>>d;
    Employee p1(a,b);
    Employee p2(c,d);
    check(p1,p2);
    return 0;
}