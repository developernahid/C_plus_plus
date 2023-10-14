#include <iostream>
using namespace std;
class dataLabel{
public:
    int length, width;
    friend dataLabel give_input(dataLabel object);
    friend void area(dataLabel object);
};
dataLabel give_input(dataLabel object)
{
    cout << "Enter the length and width: ";
    cin >> object.length >> object.width;
    return object;
};

void area(dataLabel object)
{  
    int areaRectangle, areaSquare;
    areaRectangle = object.length * object.width;
    areaSquare = object.length * object.length;
    if (areaRectangle > areaSquare)
    {
        cout << "Rectangle has large area";
    }
    else
    {
        cout << "Square has large area";
    }
}

int main()
{
    dataLabel object;
    dataLabel obj;
    obj = give_input(object);
    area(obj);
}