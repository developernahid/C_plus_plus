#include <bits/stdc++.h>
using namespace std;
class student {
    public:
    double gpa;

    student(){
        gpa = 2.80;
        cout<<gpa<<endl;
    }
    ~student(){
   cout<<"Destructor Exicuted"<<endl;
    }

    void show(){
        cout<<gpa<<endl;
    }
};
int main(){
    student ob;
    ob.show();
    ob.show();
}