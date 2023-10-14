/*Create a class called "RestrictedData". The class has two data members: publicData (this data member can be accessed from anywhere), and privateData (this data member can only be accessed within the class). Implement a constructor that initializes both publicData and privateData to 0. Implement a member function setData() which will be used to take input from the user to set values for both publicData and privateData.*/
#include <bits/stdc++.h>
using namespace std;
class RestrictedData{
    private:
    int privateData; 
    public:
    int publicData;
    RestrictedData(){
        privateData=0;
        publicData=0;
    }
    void setData(){
        cin>>privateData>>publicData;
    }
    void showData(){
        cout<<"Private data: "<<" "<<privateData<<"Public data: "<<publicData<<endl;
    }
};
int main(){
    RestrictedData ob;
    ob.setData();
    ob.showData();
}