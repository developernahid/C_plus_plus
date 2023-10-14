#include <bits/stdc++.h>
using namespace std;
class Nahid{
  private:
  string name;
  public:
  Nahid(){
    name="Nahid";
    cout<<name<<", Constructor is working"<<endl;
  }
  // Just use ~ sign before the constructor name then it will be destructor
~Nahid(){
    name="Nahid";
    cout<<name<<", Destructor is working 😎"<<endl;
  }
  
};

int main() {
    Nahid ob;
   return 0;
}