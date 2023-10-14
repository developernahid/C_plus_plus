#include <bits/stdc++.h>
using namespace std;
class Nahid { 
private: 
 int id;
 string name;
 friend class Nahidu; //Declare friend class under Nahid class, So we can access Nahid class data from Nahidu class by passing a Nahid class object Nahid ob;
};
class Nahidu{
    public:
    double gpa; // This one is friend class attribute not Nahid class.
    //Here use Nahid ob bby pass Nahid class object. To use the object we can access all data from the Show function, like ob.id,ob.name
    void show(Nahid ob){
        cin>>ob.id>>ob.name>>gpa;
        cout<<ob.name<<" "<<ob.id<<" "<<gpa<<endl;
    }
};
int main(){
    Nahid ob1; //Main class object
    Nahidu ob2; // Friend class object
    ob2.show(ob1); //I'm use shw function under Nahidu class and nahidu class object name is ob2, So we can called the function ob2.show() & pass the Nahid class object in this  function that is why I use ob2.show(ob1);
    return 0;
}