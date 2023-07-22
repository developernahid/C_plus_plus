#include <bits/stdc++.h>
using namespace std;
class secret{
private:
int sal;

public:
void set_sal(int s){
    sal=s;
}
int get_sal(){
    return sal;
}


};
int main(){
secret nahid;
nahid.set_sal(12000);
cout<<nahid.get_sal()<<endl;

    return 0;
}