/*
Problem: Create a class called Reverse with one integer variable, one getInput() function, and one doReverse() function. Your task is to take an integer input and reverse it & check the number palindrome or not
*/
#include <bits/stdc++.h>
using namespace std;
class Reverse{
    private:
    int num;
    int check=0;
    int new_num;
    public:
    void getInput(){
    cin>>num;
    new_num=num;
    }
   void doReverse(){
    int remainder,reverse=0;
    while (num!=0)
    {
    remainder = num% 10;
    reverse= reverse* 10 + remainder;
    num /= 10;
    }
    cout<<reverse<<endl;
    if (new_num==reverse)
    {
        cout<<"Palindrome Number";
    }
       else {
         cout<<"Not Palindrome Number";
    } 

}
 };

int main(){
    Reverse ob;
    ob.getInput();
    ob.doReverse();
}   