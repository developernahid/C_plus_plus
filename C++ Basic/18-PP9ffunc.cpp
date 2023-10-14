#include <bits/stdc++.h>
using namespace std;
class Square{
    public:
    double len;
    double wid;
    public:
    Square(){
        cout<<"Enter Square len & wid: ";
        cin>>len>>wid;
    }
 friend void comp(Square ob1);
};
class Rectangle{
    public:
    double len;
    double wid;
    Rectangle(){
        cout<<"Enter Rectangle len & wid: ";
        cin>>len>>wid;
    }
 friend void comp(Rectangle ob2);
};
void comp(Square s, Rectangle r){
    double squ_area=s.len*s.wid;
    double rec_area =r.len*r.wid;
    cout<<"Square area= "<<squ_area<<endl;
    cout<<"Rectangle area= "<<rec_area<<endl;
    if (squ_area>rec_area)
    cout<<"Square area is big"<<endl;
    else
    cout<<"Rectangle area is big"<<endl;

    
}
int main() {
    Square ob3;
    Rectangle ob4;
    comp(ob3,ob4);
    return 0;
}