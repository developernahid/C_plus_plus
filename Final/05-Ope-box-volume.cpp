#include <bits/stdc++.h>
using namespace std;
class Box2;
class Box1{
    public:
    int h,w,l,vol1;
    void input1(){
        cin>>h >>w >>l;
        vol1=h*w*l;
    }
    friend int operator >(Box1,Box2);
};
class Box2{
    public:
    int h,w,l,vol2;
    void input2(){
        cin>>h >>w >>l;
        vol2=h*w*l;
    }
    friend int operator >(Box1, Box2);
};
int operator>(Box1 o1, Box2 o2){
    if(o1.vol1>o2.vol2){
    return 1;
    }
    else
    return 0;
}
int main(){
    Box1 ob1;
    Box2 ob2;
    ob1.input1();
    ob2.input2();
    if(ob1>ob2){
    cout<<"Box-1 Volume is bigger"<<endl;
    }
    else {
    cout<<"Box-2 Volume is bigger"<<endl;
    }
    return 0;
}