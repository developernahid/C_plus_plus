#include <bits/stdc++.h>
using namespace std; 
class Circle{
private:
double r;
public:
Circle(){
    cin>>r;
}
void area(){
    cout<<3.1416*r*r<<endl;
    cout<<2*3.1416*r<<endl;
}
};
int main(){
Circle ob;
ob.area();
    return 0;
}