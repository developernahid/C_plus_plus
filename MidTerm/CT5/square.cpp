#include <iostream>
using namespace std;
class Square 
{
private:
int length;
public:
Square(int len) 
{
length=len;
}
Square(Square &other)
{
length=other.length;
}
int getArea() 
{
return length * length;
}
void display() 
{
cout << "Length: " << length << " units, Area: " << getArea() << " square units" << std::endl;
}
};

int main() 
{
Square square1(5);
Square square2(10);
Square square3(15);
cout << "Square 1:" << endl;
square1.display();
cout << "Square 2:" << endl;
square2.display();
cout << "Square 3:" << endl;
square3.display();
Square newSquare(square2); // Copy constructor
cout << "New Square (Copy of Square 2):" << endl;
newSquare.display();
return 0;
}