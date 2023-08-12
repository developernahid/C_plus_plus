#include <bits/stdc++.h>
using namespace std;
class Shape{
    public:
string shape_name;
friend void get(Shape o);
};
void get(Shape ob){
    double len,wid;
    ob.shape_name="Rectangle Shape";
    cout<<ob.shape_name<<endl;
    cout<<"Enter Len & Wid:";
    cin>>len>>wid;
    cout<<"Area= "<<len*wid<<endl<<"Perimeter= "<<2*(len+wid)<<endl;
}
int main(){
    Shape ob;
    get(ob);
    return 0;
}