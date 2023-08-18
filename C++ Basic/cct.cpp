#include <iostream>
using namespace std;
class dataLabel{
public:
    int length, width;
    friend class Input;
};
class Input{
    public:
    dataLabel get_in(dataLabel o){
    cout << "Enter the length and width: ";
    cin >> o.length >> o.width;
    return o;
    }
    friend void area(dataLabel o);

};
void area(dataLabel o)
{  
    int areaRectangle, areaSquare;
    areaRectangle = o.length +o.width;
    cout<<areaRectangle<<endl;
    areaSquare = o.length +o.length;
    cout<<areaSquare<<endl;
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
    dataLabel ob1;
    Input ob2;
    ob2.get_in(ob1);
    area(ob1);
}