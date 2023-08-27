//Define the functions of the 'Distance' class outside the class.
 #include <bits/stdc++.h>
 using namespace std;
class Distance{
public:
int feet; 
float inches;
friend Distance  addData(Distance ob);
friend  void showData(Distance ob1);
};
Distance addData (Distance &o){
   cin>>o.feet>>o.inches;
   return o;
}
void showData(Distance &o){
    cout<<o.feet<<" "<<o.inches;
}