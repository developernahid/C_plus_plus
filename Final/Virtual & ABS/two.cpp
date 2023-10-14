#include <bits/stdc++.h>
using namespace std;
class Flower{
 public:
     virtual void showItem()=0;
};

class Rose: virtual public Flower{
public:
    virtual void showItem(){
    cout<<"Sells Rose"<<endl;
    }

};

class Merigold: virtual public Flower{
    public:
    virtual void showItem(){
    cout<<"Sells Merigold"<<endl;
    }
};
int main(){
Flower *r=new Rose();
r->showItem();
Flower *m=new Merigold();
m->showItem();
return 0;
}
