/*Class name squre Construct three squre Object with Length 5,10,15 .Display the Length and area of each object .copy the length of 2nd object into a new object using user defined copy constructor getArea() functionis used to return the area of square*/
#include <bits/stdc++.h>
using namespace std;
class Square{
      private:
      int length;
      public:
      Square(int l){
        length=l;
      }
      Square(Square &cpy){
        length=cpy.length;
      }
    int getArea(){
         return length*length; }
    void display(){
        cout<<"Length: "<<length<<" Area= "<<getArea()<<endl;
    }
};
int main(){
    Square box1(5);
    Square box2(10);
    Square box3(15);
    cout<<"Square 1: ";
    box1.display();
    cout<<"Square 2: ";
    box2.display();
    cout<<"Square 3: ";
    box3.display();
    cout<<"Copy from square 2:";
    Square CopyBox(box2);
    CopyBox.display();
    return 0;
}