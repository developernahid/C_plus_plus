/*Create a class called "Student" to represent a student. The class should have a private data member for the student's name. Implement a constructor to initialize the student's name and a destructor to display a message when a student object is destroyed.*/
 #include <bits/stdc++.h>
 using namespace std;
 class Student{
    private:
    string name;
    public:
    Student(){
        name="Nahid";
        cout<<"Student Name= "<<name<<endl;
    }
    ~Student(){
        cout<<"Destructor working"<<endl;
    }
 };
 int main(){
    Student ob;
    return 0;
 }