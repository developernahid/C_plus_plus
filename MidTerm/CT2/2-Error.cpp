#include <bits/stdc++.h>
using namespace std;
class Box{
    private:
    int a;
    double b;
    public:
    Box(){
        a=5;
        b=5.5;
    }
      Box(int x, double y){
        a=x;
        b=y;
    }
    void show(){
        cout<<"a="<<a<<" " <<"b="<<b<<endl;
    }
};
int main(){
    Box a1;
    Box a2(10, 6.5);
    a1.show();
    a2.show();
}