#include <bits/stdc++.h>
using namespace std;
class Sum{
    private:
    int a;
    int b;
    public:
    Sum(){
        a=10;
        b=20;
    //You can sum & print here(under the def: constructor)
    //cout<<"Sum="<<a+b<<endl; 
    }
    void add(){
        int c= a+b;
        cout<<"Sum= "<<c<<endl;
    }
};
int main(){
    Sum ob;
    ob.add(); //calling add function to sum a+b value and store value in c & print c;
    return 0;
}