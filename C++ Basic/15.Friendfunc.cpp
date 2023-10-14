#include <bits/stdc++.h>
using namespace std;
class A{
private:
int id=143;
string name="Nahid";
public:
friend class B;
};
class B{
public:
void show(A o){
    cout<<o.id<<" "<<o.name<<endl;
}
};
int main(){
    A ob;
    B ob1;
    ob1.show(ob);
}