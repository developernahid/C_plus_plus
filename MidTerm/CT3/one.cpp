#include <bits/stdc++.h>
using namespace std;
class Box {
private:
    int length;
    int width;
    int height;

public:
    Box() {
        length = 0;
        width = 0;
        height = 0;
    }

    Box(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }

    int getArea() {
        return length * width * height;
    }
};
int main() {
    Box box1;
    cout << "The area of box1 is: " << box1.getArea() << endl;
    Box box2(10, 20, 30);
    cout << "The area of box2 is: " << box2.getArea() << endl;
    return 0;
}