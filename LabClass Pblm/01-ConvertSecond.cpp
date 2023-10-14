/*
Problem: Create a class called time. It has three private members: hours, minutes, and seconds. Set hours, minutes, and seconds using the getTime() function. The program should print out the total number of seconds using Display TimeInSeconds() function.
*/
#include <bits/stdc++.h>
using namespace std;
class Time{
    private:
    int hours,minutes,seconds;
    public:
    void getTime(){
        cout<<"Enter hours, minutes and seconds: ";
        cin>>hours>>minutes>>seconds;
    }
  void DisplayTimeSecond(){
        cout<<"Total Seconds= "<<hours*3600+minutes*60+seconds<<endl;

    }
};

int main(){
    Time ob;
    ob.getTime();
   ob.DisplayTimeSecond();
    return 0;
}