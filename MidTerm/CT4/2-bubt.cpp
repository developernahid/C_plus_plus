#include <bits/stdc++.h> 
using namespace std;
class Registration{
private:
string name[6];
int max_course;
public:
void chooseCourse(){
    cout<<"Enter max course 3 to 6:";
    cin>>max_course;
    for (int i = 1; i <=max_course; i++)
    {  
        cout<<"Enter "<<i<<" course name: ";
        cin>>name[i];
    }
}
void printCourse(){
    cout<<"You select course : ";
    for (int i = 1; i <=max_course; i++)
    {
        cout<<name[i]<<" ";
    }
}
};
int main(){
    Registration ob;
    ob.chooseCourse();
    ob.printCourse();
    return 0;
}