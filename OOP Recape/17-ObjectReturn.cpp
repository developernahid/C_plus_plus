#include <bits/stdc++.h>
using namespace std;
class Secret{
    public:
    string gf_name;
    string gf_basa;
    long long int gf_number;
    friend class Input;
};
class Input{
    public:
    Secret getIn(Secret &ob){
     cout<<"Enter your GF name phone number & address:";
      cin>>ob.gf_name>>ob.gf_number>>ob.gf_basa;
      return ob;
    }
    friend void show(Secret ob);
};
void show(Secret ob){
cout<<ob.gf_name<<" "<<ob.gf_number<<" "<<ob.gf_basa<<endl;
}

int main(){
Secret ob;
Input ob1;
ob1.getIn(ob);
show(ob);
    return  0;
}