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
    total_bal= balance+add_money+total_bal;
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
    total_bal= total_bal-withd_money;
    cout<<"  Now, your total balance: "<<total_bal<<endl;
    }
    }
};

int main(){
BankInfo p1;
int choice;
p1.show();
do
{
cout<<"  Choice your menu ::"<<endl<<"  1.Add money"<<endl<< "  2.Withdraw money"<<endl<<"  3.Exit"<<endl<<endl;

cout<<"  Enter your choice: ";
cin>>choice;
switch (choice)
{
case 1:
    p1.addmoney();
    break;
case 2:
    p1.withdraw_money();
    break;
case 3:
cout<<"  Successfully exit done!!"<<endl;
    break;
default:
 cout<<"  Invalid choice! Please try again."<<endl;
}
} while (choice != 3);

// p1.show();
// p1.addmoney();
// p1.withdraw_money();

    return 0;
}