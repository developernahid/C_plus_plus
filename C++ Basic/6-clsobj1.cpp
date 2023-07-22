#include <bits/stdc++.h> 
using namespace std;
class student{
    public:
    string name;
    int roll;
    long long int phn;
};
int main(){
    student sam;
    student jhon;
    cout<<"Enter name roll & phone no."<<endl;
    cin>>sam.name;
    cin>>sam.roll;
    cin>>sam.phn;
     cout<<"Enter name roll & phone no."<<endl;
    cin>>jhon.name;
    cin>>jhon.roll;
    cin>>jhon.phn;
     cout<<"--------Output--------"<<endl;
    cout<<sam.name<<" "<<sam.roll<<" "<<sam.phn<<endl;
    cout<<jhon.name<<" "<<jhon.roll<<" "<<jhon.phn<<endl;
    return 0;
}

