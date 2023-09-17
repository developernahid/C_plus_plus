/*Write a problem in C++ to fine the summation of EVEN numbers between 1 to 100*/
#include <iostream>
using namespace std;
int main(){
int sum=0;
for (int i = 1; i <=100; i++)
{
    if (i%2==0)
    {    
        cout<<i<<endl;
        sum=sum+i;

    }
}
cout<<sum;
}

