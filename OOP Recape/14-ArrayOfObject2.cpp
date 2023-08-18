/*
How can we take input of a private data of a object of array.
*/
#include <bits/stdc++.h>
using namespace std;
class Nahid{
    private:
    int id;
    string name;
    public:
    void get(){
        cin>>id>>name;
    }
    void put(){
        cout<<id<<" "<<name<<endl;
    }
};

int main(){
    Nahid o[5];
    // As long as the loop runs the get() function will called and take input from user. This is the concept
    for (int i = 0; i < 5; i++)
    {
        o[i].get();
     // As long as the loop runs the put() function will called and print the values. This is the concept
    }for (int i = 0; i < 5; i++)
    {
        o[i].put();
    }
    return 0;
}