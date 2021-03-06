#include<bits/stdc++.h>
using namespace std;

string a,b ;
int i;

int main(){
    cin>>a>>b;

    for(i=0;i<a.length();i++)
        cout<<b.find(a[i])<<" ";
}
