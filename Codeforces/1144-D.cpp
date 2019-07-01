#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 200005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int ara[N];
bool vis[N];
int main()
{
    int i,n,k,freq=-1,mx;
    vector<int>vec;
    sf(n);
    rep0(i,n)
    {
        sf(k);
        ara[k]++;
        vec.pb(k);
        if(ara[k]>freq)
        {
            freq=ara[k];
            mx=k;
        }
    }
    queue<int>ind;
    rep0(i,n)
    {
        if(vec[i]==mx)
        {
            vis[i]=true;
            ind.push(i);
        }
    }
    pf("%d\n",n-ind.size());
    while(!ind.empty())
    {
        int p=ind.front();
        ind.pop();
        i=p-1;
        while(1)
        {
            if(i<0 || vis[i])
                break;
            vis[i]=true;
            if(vec[i]<mx)
                pf("1 %d %d\n",i+1,i+2);
            else
                pf("2 %d %d\n",i+1,i+2);
            i--;
        }
        i=p+1;
        while(1)
        {
            if(i>=n || vis[i])
                break;
            vis[i]=true;
            if(vec[i]<mx)
                pf("1 %d %d\n",i+1,i);
            else
                pf("2 %d %d\n",i+1,i);
            i++;
        }
    }
}
