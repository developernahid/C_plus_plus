/*
Basic concept of class and object:
1.How to declare class & object.
2.Get input from user & print the value
*/
#include <bits/stdc++.h>
using namespace std;
class A{
public:
string name;
};
int main(){
A ob;                    //Object declaration; Rules: className Objecname;
//getline(cin,ob.name);            //getline use to get input from user with space of a string data, like Nahid Hasan; cin cannot take input after space. 
cin>>ob.name;     //Read input from user; object.Aclass attributeName (ob.name)
cout<<ob.name; //Print name that means ob.name;
    return 0;
}