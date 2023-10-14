#include <bits/stdc++.h>
using namespace std;
class Salary{
    private:
    int sal1,sal2;
    public:
    Salary(int x, int y){
    sal1=x;
    sal2=y;
    }

    Salary(Salary &ob){
        if (ob.sal1>ob.sal2)
        cout<<"Employee 1 salary is highest";
        else
        cout<<"Employee 2 salary is highest";
        
    }
};
int main(){
    Salary ob(5000,7000);
    Salary ob1(ob);
}