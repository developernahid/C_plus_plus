#include <bits/stdc++.h>
using namespace std;
class Nahid{
    public:
    int id;
    string name;
    
};

int main(){
    Nahid o[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>o[i].name>>o[i].id;
    }for (int i = 0; i < 5; i++)
    {
        cout<<o[i].name<<" "<<o[i].id<<endl;
    }
    return 0;
}