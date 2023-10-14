#include <bits/stdc++.h>
using namespace std;
class sum{
    int num,res;
    public:
    void input(){
        cin>>num;
    }
    sum operator+(sum &ob){
        sum res;
        res.num=this->num+ob.num;
        return res;
    }
    void output(){
        cout<<num;
    }

};
int main(){
    sum ob1,ob2,ob3;
    ob1.input();
    ob2.input();
    ob3=ob1+ob2;
    ob3.output();

    return 0;
}