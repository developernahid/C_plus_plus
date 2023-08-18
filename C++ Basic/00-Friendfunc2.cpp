#include<iostream>
using namespace std;
class partTimejob
{
protected:
int salaryPerDay,Days;
public:
void setSalaryPerDay()
{
cout<<"Salary Per Day:";
cin>>salaryPerDay;
}
void setDays()
{
cout<<"Days:";
cin>>Days;
}
friend class totalSalary;
};
class fullTimeJob
{
protected:
int fullTimeSalary;
public:
void setFullTimeSalary()
{
cout<<"Full time Salary:";
cin>>fullTimeSalary;
}
friend class totalSalary;
};
class totalSalary
{
int total;
public:
void calculateTotal(partTimejob ob,fullTimeJob ob1)
{
total=ob.Days*ob.salaryPerDay;
cout << total << endl;
cout <<ob1.fullTimeSalary<< endl;
}
};

int main()
{
    partTimejob ob;
    ob.setSalaryPerDay();
    ob.setDays();
    fullTimeJob ob1;
    ob1.setFullTimeSalary();
    totalSalary ob2;
    ob2.calculateTotal(ob,ob1);
    return 0;
}