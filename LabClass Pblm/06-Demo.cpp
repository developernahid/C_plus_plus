/*Create a class named "Demo" with two data members num1 and num2. The class should have a constructor to initialize these data members. Additionally, implement a destructor that displays an appropriate message when an object of the class is being destroyed.*/
#include <bits/stdc++.h>
using namespace std;
class Demo{
    private:
    int num1,num2;
    public:
    Demo(){
        num1=20;
        num2=5;
        cout<<num1<<" "<<num2<<endl;
    }
    ~Demo(){
        cout<<"Destructor Working";
    }
};
int main(){
    Demo ob;
    return 0;
}