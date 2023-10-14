/*Function Overloading: মানে একি নামে একাধিক ফাংশন  থাকবে কিন্তু তাদের নাম্বার অফ প্যাঁরামিটার সংখ্যা আলাদা হবে। যেমন নিচের কোডে যখন Sum(10,5) ;পাস করতেছি তখন ২ প্যাঁরামিটারের Sum()  ফাংশনে ভেলু পাস  হয়ে যাচ্ছে আর যখন   sum(10,20,30); দিচ্ছি তখন ২ প্যাঁরামিটারের Sum()  ফাংশনে ভেলু পাস  হয়ে যাচ্ছে এবং যোগ করে প্রিন্ট করতেছে। সিম্পল তাই না??? 
*/
#include  <bits/stdc++.h>
using namespace std;
void sum(int x, int  y){
 cout<<x+y<<endl;
}
void sum(int x, int  y, int z){
     cout<<x+y+z<<endl;
}
int main(){
     sum(10,5);
     sum(10,20,30);
    return 0;
}