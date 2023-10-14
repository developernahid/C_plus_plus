#include <bits/stdc++.h>
using namespace std;
class BankInfo{
public:
long long int ac_no;
int balance;
int total_bal=0;

BankInfo(){
    ac_no=22235103143;
    balance =500;
}
void show(){
    cout<<endl<<"  Your account no: "<<ac_no<<endl;
    cout<<"  Gift balance is: "<<balance<<endl<<endl;
}
void addmoney(){
    int add_money;
    cout<<"  Enter amount:";
    cin>>add_money;
    total_bal= balance+add_money;
    cout<<"  Now, your total balance: "<<total_bal<<endl;
}
void withdraw_money(){
    int withd_money;
    cout<<"  Enter withdrawal amount:";
    cin>>withd_money;
     if (withd_money>total_bal)
    {
        cout<<"  You enter Insufficent withdraw amount"<<endl;
    }
    else{
    cout<<"  Now, your total balance: "<<total_bal-withd_money<<endl;
    }
    }
};

int main(){
BankInfo p1;
p1.show();
p1.addmoney();
p1.withdraw_money();
return 0;
}