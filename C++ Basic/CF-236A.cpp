#include <bits/stdc++.h>
using namespace std;
int main(){
    string ch;
    cin>>ch;
    int count=0,i=0;
    while (ch[i] != '\0')
    {
        count++;
        i++;
    }
    if (count%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else {
        cout<<"IGNORE HIM!"<<endl;
    }

    return 0;
}