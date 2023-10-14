#include <bits/stdc++.h>
using namespace std;
class Time{
    private:
    int hours,min,sec;
    public:
    int dh,dm,ds;
    Time(int h, int m, int s){
      hours=h;
      min=m;
      sec=s;
    }
    friend void comp(Time t1, Time t2);
    friend class show;
};
void comp(Time t1, Time t2){
    if(t1.hours>t2.hours){
      t1.dh=t1.hours-t2.hours;
      t2.dh=t1.dh;
    }
    else{
        t2.dh=t2.hours-t1.hours;
         t1.dh=t2.dh;
    }
    if(t1.min>t2.min){
      t1.dm=t1.min-t2.min;
      t2.dm=t1.dm;
    }
    else{
        t2.dm=t2.min-t1.min;
         t1.dm=t2.dm;
    }
    if(t1.sec>t2.sec){
      t1.ds=t1.sec-t2.sec;
      t2.ds=t1.ds;;
    }
    else{
        t2.ds=t2.sec-t1.sec;
         t1.ds=t2.ds;
    }
}
class show(Time cm){
    
}
int main(){
    Time T1(12,45,30);
    Time T2(6,55,10);
    comp(T1,T2);
    T1.print();
}