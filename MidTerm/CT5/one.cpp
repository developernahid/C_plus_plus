#include  <bits/stdc++.h>
using namespace std;
class Circle{
private:
int radius;
public:
void set_radius(int x){
    radius=x;
}
int get_radius(){
    return radius;
}
friend void Area(Circle ob);
};
void Area(Circle o){
    cout<<"Area: "<<3.1416*o.radius*o.radius;
}
int main(){
    Circle obj;
   obj.set_radius(10);
    Area(obj);
}
