#include <bits/stdc++.h>
using namespace std;
class IntakeGPA{
private:
string name;
double cgpa;
public:
IntakeGPA(string nam, double x){
name=nam;
cgpa=x;
}
friend void compare(IntakeGPA p1, IntakeGPA p2);
};
void compare(IntakeGPA p1, IntakeGPA p2){
    if(p1.cgpa>p2.cgpa){
        cout<<p1.name<<" CGPA is highest";
    }
    else{
    cout<<p2.name<<" CGPA is highest";
    }
}
int main(){
    IntakeGPA student1("Nahid",2.78);
    IntakeGPA student2("Shizan",3.78);
    compare(student1,student2);
return 0;
}