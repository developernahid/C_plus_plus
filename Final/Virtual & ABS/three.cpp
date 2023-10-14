#include <bits/stdc++.h>
using namespace std;
class multiply{
public:
    int m,n;
    multiply(int i, int j){
     m=i;
     n=j;
    }
};
class Result: virtual public multiply{
public:
    Result(int k, int h):multiply(k,h){
     cout<<m+n;
    }
};

int main(){
    Result ob(10,30);
return 0;
}
