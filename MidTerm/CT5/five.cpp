#include <bits/stdc++.h>
using namespace std;
class Rectangle{
private:
double width,height;
public:
Rectangle(){
    width=0;
    height=0;
}
Rectangle(double w, double h){
    width=w;
    height=h;
}
~Rectangle(){
    cout<<"  "<<endl;
}
friend void calculate(Rectangle o);
};
void calculate(Rectangle o){
    cout<<"Area : "<<o.height*o.width<<endl;
    cout<<"Parameter : "<<2*(o.height+o.width)<<endl;
}
int main(){
    Rectangle ob;
    Rectangle ob1(5.5,6.5);
    calculate(ob1);
    return 0;
}