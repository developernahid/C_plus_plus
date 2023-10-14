#include <bits/stdc++.h>
using namespace std;
class Animal{
    private:
    string color;
    protected:
    string type;
    public :
    void eat(){
        cout<<"I can eat"<<endl;
    }
    void setcolor(string clr){
        color = clr;
    }
    string getcolor(){
        return color;
    }
    void showcolor(){
        cout<<color<<endl;
    }
};
class Dog: public Animal{

    void setType(string tp){
        type=tp;
    }
    void show(){
        cout<<type<<endl;
    }

};
 int main() {
Dog dog1;
dog1.setcolor
    return 0;
}
