/* Take input from user using constructor. We already did that
*/
#include <bits/stdc++.h>
using namespace  std;
 class BouList{
 private:
  string bou1;
  string bou2;
  string bou3;
  string bou4;
  public:
  BouList(){
    cin>>bou1>>bou2>>bou3>>bou4;
    cout<<bou1 <<" "<<bou2<<"  "<<bou3<<" "<<bou4;
  }
 };
int main(){
 BouList ob;
    return 0;
}