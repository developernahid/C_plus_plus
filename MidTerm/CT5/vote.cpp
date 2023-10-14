#include <iostream>
using namespace std;
class Information {
public:
    string name;
    string address;
public:
    void setName(string name) {
        name = name;
    }
    string getName() {
        return name;
    }
    void setAddress(string address) {
        address = address;
    }
    string getAddress() {
        return address;
    }
    void display() {
        cout << "Name: " <<name << endl;
        cout << "Address: " << address << endl;
    }
    friend void inputinfo(Information &ob);
};
void inputinfo(Information &ob) {
    cout << "Enter the name: ";
    cin >> ob.name;

    cout << "Enter the address: ";
    cin >> ob.address;
}
int main() {
Information personalInformation;
inputinfo(personalInformation);
personalInformation.display();
return 0;
}