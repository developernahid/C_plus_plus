/*Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. Include member functions to calculate the grade based on the marks and display the student's information.
*/
#include <bits/stdc++.h>
using namespace std;
class Student{
    private:
    string name;
    int cls;
    int roll;
    int marks;
    public:
    void input(){
        cout<<"Enter Name, Class, Roll & Marks:";
        cin>>name>>cls>>roll>>marks;
    }
    string Grade(){
        if (marks >= 80) {
      return "A+";
    } else if (marks >= 70) {
      return "A";
    } else if (marks >= 60) {
      return "B";
    } else if (marks >= 50) {
      return "C";
     } else if (marks >= 40) {
      return "D";
      } else if(marks<40) {
      return "F";
    }
    else{
        return "Enter Valid marks";
    }
    }
  void displayInformation() {
    cout << "\n\nName: " << name << endl;
    cout << "Class: " << cls << endl;
    cout << "Roll Number: " << roll<< endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << Grade() << endl;
  }


};
int main(){
    Student ob;
    ob.input();
    ob.Grade();
    ob.displayInformation();
}