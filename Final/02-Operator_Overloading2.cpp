#include <bits/stdc++.h>
using namespace std;
class sum{
    int num,num2,res;
    public:
    sum(int x, int y){
    num=x;
    num2=y;
    }
    sum operator+(sum &ob){
        sum res(0,0);
        res.num=this->num+ob.num;
        res.num2=this->num2+ob.num2;
        return res;
    }
    void output(){
        cout<<num<<num2;
    }

};
int main(){
    sum ob1(5,10),ob2(20,25);
    sum ob3=ob1+ob2;
    ob3.output();

    return 0;
}