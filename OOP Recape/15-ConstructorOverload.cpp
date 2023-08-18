#include <bits/stdc++.h>
using namespace std;
class A{
public:
int id;
double gpa;
public:
A(int x, double y){
    id=x;
    gpa=y;
    cout<<id<<" "<<gpa<<endl;
}
// void show(){
//  cout<<id<<" "<<gpa<<endl;
// }
A(){
    cout<<"I Love U";
}
};

int main(){
    A ob(143, 3.50);
    //ob.show();vb fed v vb
    A ob2(143, 3.50);
    //ob2.show();
    A ob1;
}