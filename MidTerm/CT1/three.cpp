//Define the functions of the 'Distance' class outside the class.
 #include <bits/stdc++.h>
 using namespace std;
class Distance {
public:
  int feet;
  float inches;
  Distance(int f, float in) {
    feet = f;
    inches = in;
  }
  // Friend function
  friend Distance addData(Distance d1, Distance d2);
  // Friend function
  friend void showData(Distance d);
};

Distance addData(Distance d1, Distance d2) {
 return Distance(d1.feet + d2.feet, d1.inches + d2.inches);
}
void showData(Distance d) {
  cout << d.feet<< " feet " << d.inches << " inches" << endl;
}

int main() {
  Distance d1(10, 5.5);
  Distance d2(5, 2.5);
  Distance d3 = addData(d1, d2);
  showData(d3);

  return 0;
}