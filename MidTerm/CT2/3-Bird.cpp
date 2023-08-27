#include <bits/stdc++.h>
using namespace std;
class Bird{
private:
string color;
public:
friend void Input(Bird ob);
};
void Input(Bird o){
cout<<"Enter Color:";
cin>>o.color;
cout<<"You Enter Color= "<<o.color<<endl;
}
int main(){
    Bird ob;
    Input(ob);
}

/*Expplain: In this code void Input is a friend function under bird class where i pass the Bird class object by name ob, using the friend function we can access all data from the bird class. Outside the class I'm declare again the function and received the parameter using o, We can access the bird class attribute using this object bby call  o.name, In this way we can take input and print value outside the class using friend function*/