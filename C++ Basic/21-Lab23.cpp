#include <bits/stdc++.h>
using namespace std;
class transport{
    private:
    int speed;
    int no_of_passenger;
public:
transport(int x, int y){
    speed=x;
    no_of_passenger=y;
}
friend void compare(transport ob1, transport ob2);
};
void compare(transport o1, transport o2){
    if (o1.speed>o2.speed)
        cout<<"Car speed is high"<<endl;
    else
     cout<<"Microbus speed is high"<<endl;

    if (o1.no_of_passenger>o2.no_of_passenger)
        cout<<"Car passenger is more"<<endl;
    else
     cout<<"Microbus passenger is more"<<endl;
    
}
int main(){
    transport car(100,4);
    transport microbus(80,8);
    compare(car,microbus);
}