#include <bits/stdc++.h>
using namespace std;
int main(){
int ts,a,b,c,count=0;
cin>>ts;
for (int i = 0; i <ts; i++)
{
    cin>>a>>b>>c;
    if (a==1 && b==1 && c==1|| a==1&& b==1 && c==0 || a==0&& b==1 && c==1 || a==1 && b==0 && c==1)
    {
        count++;
    }
}
cout<<count<<endl;
return 0;
}