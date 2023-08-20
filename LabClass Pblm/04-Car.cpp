/*
Problem 1. Create a class called "Car." The Car class should have the following member variables: brand (string), model (string), year (int), mileage (double). Initializes these variables using a constructor. Prints out all the member variables of the car when an object of the class is destroyed.
*/
#include <bits/stdc++.h>
using namespace std;
class Car{
    private:
    string brand;
    string  model;
    int year;
    double mileage;
    public:
    Car(){
        brand ="Toyota";
        model ="Y12734T";
        year= 2023;
        mileage= 105.67;
    }
    ~Car(){
        cout<<brand<<" "<<model<<" "<<year<<" "<<mileage;
    }
};

int main(){
    Car ob;
    return 0;
}
