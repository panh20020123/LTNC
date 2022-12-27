#include<bits/stdc++.h>
#include<string>
using namespace std;
string st,c,k;
int d=0,n,i,j;
int main()
{
   // freopen("vao.inp","r",stdin);
   // freopen("ra.out","w",stdout);

    st="Louis XIV";
    for(i=1;i<=13;i++)
    {
        getline(cin,c);
        if(c[0]<'L') cout<<c<<endl;
        if(c[0]=='L'&& d==0)
           {
            for(j=1;j<c.length();j++)
                if(c[j]>st[j]) {d=1;cout<<st<<endl<<c<<endl;break;}
            if(d==0) cout<<c;
           }
        if(c[0]=='L'&&d==1) cout<<c<<endl;
        if(c[0]>'L'&&d==0)  {d=1;cout<<st<<endl;}
        if(c[0]>'L'&&d==1)  cout<<c<<endl;
    }
  return 0;
}

