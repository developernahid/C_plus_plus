#include <bits/stdc++.h>
using namespace std;
class Bankaccount{
private:
int balance;
public:
Bankaccount(){
    balance=500;
}
friend class ATM;
};
class ATM{
    public:
    Bankaccount o;
    void withdraw( int amount){
        if (o.balance>=amount)
        {
            cout<<"Your current balance is: "<<o.balance-amount<<endl;
        }
        else{
            cout<<"Insufficient amount, Please try again"<<endl;
        }
        
    }

};

int main(){
    Bankaccount ob;
    ATM ob1;
    int a;
   cin>>a;
    ob1.withdraw(a);
return 0;
};