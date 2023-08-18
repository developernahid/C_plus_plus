/*
Task: Take to int value from user and calculate their sum,difference,product,divided & remainder use function in c++
*/
#include <bits/stdc++.h>
using namespace std;
void Calculator(int x, int y){
    cout<<"Sum= "<<x+y<<endl; 
    cout<<"Difference= "<<x-y<<endl; 
    cout<<"Production= "<<x*y<<endl; 
    cout<<"Divided= "<<x/y<<endl; 
    cout<<"Remainder= "<<x%y<<endl; 
}
int main(){
int a,b;
cout<<"Enter 2 number :";
cin>>a>>b;
Calculator(a,b);
return 0;
}