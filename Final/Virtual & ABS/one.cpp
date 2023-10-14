#include <iostream>
using namespace std;
class Shape{
public:
    int height,width;
    void set_height(int i){
     height=i;
    }
    void set_width(int j){
     width=j;
    }
    virtual void area()=0;
};
class Rectangle: virtual public Shape{
   public:
   virtual void area(){
   cout<<"Rectangle area= "<<height*width<<endl;
   }
};
class Triangle: virtual public Shape{
   public:
   virtual void area(){
   cout<<"Triangle area= "<<0.5*height*width<<endl;
   }
};

int main(){

 Rectangle *p=new Rectangle();
 p->set_height(10);
 p->set_width(10);
 p->area();
Triangle *r=new Triangle();
 r->set_height(10);
 r->set_width(10);
 r->area();
return 0;
}
