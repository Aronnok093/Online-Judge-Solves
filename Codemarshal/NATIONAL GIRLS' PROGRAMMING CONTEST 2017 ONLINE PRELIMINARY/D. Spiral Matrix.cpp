#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3)
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 26
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
int ara[N][N],n;
int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
bool valid(int x,int y)
{
    return x>=0 && x<n && y>=0 && y<n;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        mem(ara,0);
        int i,j,l,k=0,cnt=0,now=2;
        sf(n);
        i=0,j=0;
        ara[i][j]=1;
        while(now<=n*n)
        {
            int xx=i+dx[k];
            int yy=j+dy[k];
            if(valid(xx,yy))
            {
                if(!ara[xx][yy])
                {
                    ara[xx][yy]=now++;
                    i=xx;
                    j=yy;
                }
                else
                {
                    k++;
                    k%=4;
                }
            }
            else
            {
                k++;
                k%=4;
            }
        }
        rep0(i,n)
        {
            rep0(j,n)
                pf("%4d",ara[i][j]);
            puts("");
        }
        puts("");
    }
}
