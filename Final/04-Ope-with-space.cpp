#include <bits/stdc++.h>
using namespace std;
class Text{
public:
string name;
Text(){

}
Text(string x){
    name=x;
}
Text operator+(Text ob){
    Text o;
    o.name=name+ob.name;
    return o;
}
void show(){
    cout<<name;
}
};
int main(){
   Text o1("Nahid"),o2(" + "),o3("Nahider Bou"),o4;
   o4=o1+o2+o3;
   o4.show();
    return 0;
}
