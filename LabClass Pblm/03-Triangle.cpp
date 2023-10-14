/*
Create a class for the Triangle, two member of class are height & base.
1. Create one parameterized constructor. Constructor_name(double, int)
2. Create one copy constructor.
3. Create a function that would return the area of the triangle.
4. Create a destructor.
*/
#include <bits/stdc++.h>
using namespace std;
class Triangle{
  private:
  double height;
  int base;
  public:
  Triangle(double x, int y){
    height=x;
    base=y;
  }
  ~Triangle(){
  cout<<"Destructor"<<endl;
  }
  Triangle(Triangle &t){
    height=t.height;
    base=t.base;
  }
  double Area(){
    double area = height*base/2;
    return area;
  }
};
int main(){
    Triangle ob(5.5,6);
    Triangle ob1=ob;
    cout<<"Area of Triangle ="<<ob1.Area()<<endl;
    return 0;
}