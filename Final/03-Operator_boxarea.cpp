#include <bits/stdc++.h>
using namespace std;
class Box{
    double h,l,w,area;
    public:
    void input(){
        cin>>h>>l>>w;
         area= h*l*w;
    }
   Box operator+(Box &o){
    Box r;
    r.area=this->area+o.area;
    return r;
   }
   void output(){
    cout<<area<<endl;
   }
};
int main() {
    Box box1,box2,box3;
    box1.input();
    box2.input();
    box3=box1+box2;
    box3.output();
    return 0;
}
