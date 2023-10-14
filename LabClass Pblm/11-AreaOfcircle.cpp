/*Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.
*/
#include <bits/stdc++.h>
using namespace std;
class Circle{
    private:
    double radius;
    public:
    void area(){
        cout<<"Enter radius of circle:";
        cin>>radius;
        cout<<"Area="<<3.1416*pow(radius,2)<<endl;
        cout<<"Circumference ="<<2*3.1416*radius<<endl;        
    }
};
int main(){
    Circle ob;
    ob.area();
    return 0;
}