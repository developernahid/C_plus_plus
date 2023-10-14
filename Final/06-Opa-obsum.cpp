#include <bits/stdc++.h>
using  namespace std;
class Sum2;
class Sum1{
    public:
    int n,add1=0;
    void input1(){
        cin>>n;
        add1=add1+n;
    }
    friend int operator >(Sum1,Sum2);
};
class Sum2{
    public:
    int m,add2=0;
    void input2(){
        cin>>m;
        add2=add2+m;
    }
    friend int operator >(Sum2,Sum1);
};
int operator >(Sum1 s1,Sum2 s2){
if (s1.add1>s2.add2)
{ 
    return 1;
}
else
return 0;
}
int main(){
    int x,y;
    cin>>x >>y;
    Sum1 ob1[x];
    Sum2 ob2[y];
    for (int i = 0; i < x; i++)
    {
        ob1[i].input1();
    }
    for (int j = 0; j < y; j++)
    {
        ob2[j].input2();
    }
    if (ob1>ob2)
    {
        cout<<"Sum 1 is bigger"<<endl;
    }
    else
    cout<<"Sum 2 is bigger"<<endl;
    
    return 0;
}