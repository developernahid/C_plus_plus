/*Create a class named Flower which has private attributes color, name. Create two friend functions, one is to set the values and another is for displaying data.*/
#include <bits/stdc++.h>
using namespace std;
class Flower{
    private:
    string name;
    string color;
    public:
    friend Flower get(Flower in);
    friend void out(Flower ob1);
};
Flower get(Flower in){
    cin>>in.name;
    cin>>in.color;
    return in;
}
void out(Flower in){
    cout<<"Name: "<<in.name<<endl;
    cout<<"Color: "<<in.color<<endl;
}
int main(){
    Flower ob,ob1;
    ob1=get(ob);
    out(ob1);

}