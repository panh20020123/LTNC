
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string st;
    getline(cin, st);
    for(int i=1; i<=n ; i++)
        {

            getline(cin, st);
            string s="";
            for(int j=0; j<st.length(); j++)
                if(st[j] != ' ' )
                    if( s=="") s=st[j];
                        else if( st[j-1] ==' ') s=s+' '+st[j];
                                else s=s+st[j];
            cout<<s<<endl;
        }

}
