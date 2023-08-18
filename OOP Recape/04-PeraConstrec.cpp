/* Calculate area of a Rectangle  use parameterized constructor.
*/
#include <bits/stdc++.h>
using namespace std;
class Input{
 private:
 int length;
 int width;
 /*
 We  cannot access the private class attribute length & width bcz they are private data. Tha is why we create a public parameterized construct to initialize value, We can access the constructor & Area function bcz they are public now. 
 */
public:
Input(int x, int y){
   length=x;
   width=y;
}
void Area(){
    int area = length*width;
    cout<<"Area of Rec: "<<area;
}
};
int main(){
   Input ob(5,6);
   ob.Area();

    return 0;
}