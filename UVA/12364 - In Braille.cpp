#include <bits/stdc++.h>

#define sf(n) scanf("%d",&n)
#define sff(n,m) scanf ("%d %d",&n,&m)
#define sfff(n,m,o) scanf ("%d %d %d",&n,&m,&o)
#define pf printf
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,b) for(i=a;i<=b;i++)
using namespace std;

int main()
{
    int n;
    string a[15];
    a[0]=".***..";
    a[1]="*.....";
    a[2]="*.*...";
    a[3]="**....";
    a[4]="**.*..";
    a[5]="*..*..";
    a[6]="***...";
    a[7]="****..";
    a[8]="*.**..";
    a[9]=".**...";
    while(1)
    {
        sf(n);
        if(n==0)
            return 0;
        char ch;
        cin>>ch;
        getchar();
        if(ch=='S')
        {
            string s;
            cin>>s;
            int i;
            rep0(i,s.size())
            {
                int k=s[i]-'0';
                cout<<a[k][0]<<a[k][1];
                if(i!=s.size()-1)
                    pf(" ");
            }
            cout<<endl;
            rep0(i,s.size())
            {
                int k=s[i]-'0';
                cout<<a[k][2]<<a[k][3];
                if(i!=s.size()-1)
                    pf(" ");
            }
            cout<<endl;
            rep0(i,s.size())
            {
                int k=s[i]-'0';
                cout<<a[k][4]<<a[k][5];
                if(i!=s.size()-1)
                    pf(" ");
            }
        }
        else
        {
            string x,y,z;
            getline(cin,x);
            getline(cin,y);
            getline(cin,z);
            int i;
            for(i=0;i<x.size();i+=3)
            {
                string c="";
                c+=x[i];c+=x[i+1];
                c+=y[i];c+=y[i+1];
                c+=z[i];c+=z[i+1];
                if(c==a[0])
                    pf("0");
                else if(c==a[1])
                    pf("1");
                else if(c==a[2])
                    pf("2");
                else if(c==a[3])
                    pf("3");
                else if(c==a[4])
                    pf("4");
                else if(c==a[5])
                    pf("5");
                else if(c==a[6])
                    pf("6");
                else if(c==a[7])
                    pf("7");
                else if(c==a[8])
                    pf("8");
                else if(c==a[9])
                    pf("9");
            }
        }
        cout<<endl;
    }
}
