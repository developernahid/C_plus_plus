#include <bits/stdc++.h>
using namespace std;

class sum 
{
    public:
    int num1;
    int num2;

   sum(int x,  int y){
    num1=x;
    num2 =y;
   }
int calculate(){
   return num1+num2;
}

};

int main(){

sum number(5,5);
cout<<"Sum-  "<<number.calculate()<<endl;

    return 0;
}