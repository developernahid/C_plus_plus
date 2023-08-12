#include <bits/stdc++.h>
using namespace std;
class Flower{
private:
string name;
string color;
public:
friend Flower get_in(Flower o1);
friend void get_out(Flower o2);
};
Flower get_in(Flower n){
    cout<<"Enter flower name: ";
    cin>>n.name;
    cout<<"Enter flower color: ";
    cin>>n.color;
    return n;
}
void get_out(Flower n){
cout<<"Name:" <<n.name<<" & "<<"Color:"<<n.color<<endl;
}
int main(){
    Flower ob,ob1;
    ob1=get_in(ob);
   get_out(ob1);
}