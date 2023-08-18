#include <iostream>
using namespace std;
class Student{
private:
int id;
double gpa;
public:
void get(){
    cin>>id;
    cin>>gpa;
}
friend void Show(Student ob);
};
void Show(Student o){
    //cin>>o.id;
    //cin>>o.gpa;
    cout<<"ID= "<<o.id<<" GPA= "<<o.gpa<<endl;
}
int main(){
    Student p1;
    p1.get();
    Show(p1);
    return 0;
}