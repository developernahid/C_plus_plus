#include <bits/stdc++.h>
using namespace std;
class num{
    private:
    int x;
    int y;

  public:
  void getdata(){
    cin>>x;
    cin>>y;
    }
    public:
    void set(int m, int o){
        x=m;
        y=o;
    }
  
    int sum(){
        return x*y;
    }
};
int main(){
num one;
one.getdata();
cout<<one.sum()<<endl;


    return 0;
}