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
#define N 101
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
int knapsack(int W,int wt[],int val[],int n)
{
    int i,w,K[n+1][W+1];
    for(i=0;i<=n;i++)
    {
        for (w=0;w<=W;w++)
        {
            if (i==0 || w==0)
                K[i][w]=0;
            else if (wt[i-1]<=w)
                K[i][w]=max(val[i-1]+K[i-1][w-wt[i-1]],K[i-1][w]);
            else
                K[i][w]=K[i-1][w];
        }
    }
    return K[n][W];
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int n,W,i,a,sum=0;
        sf(n);
        int wt[n+1],val[n+1];
        rep0(i,n)
        {
            sf(a);
            sum+=a;
            wt[i]=a;
            val[i]=a;
        }
        W=sum/2;
        int k=knapsack(W,wt,val,n);
        pf("%d\n",sum-2*k);
    }
}
