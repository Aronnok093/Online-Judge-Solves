#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define debug(x) cout<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int main()
{
    int t;
    sf(t);
    while(t--)
    {
        int num;
        int i,k=0,j,carry=0,ara[1000]={1};
        sf(num);
        for(i=1;i<=num;i++)
        {
            for(j=0;j<=k;j++)
             {
                ara[j]=ara[j]*i+carry;
                carry=ara[j]/10;
                ara[j]=ara[j]%10;
             }
             while(carry)
             {
                 k++;
                 ara[k]=carry%10;
                 carry/=10;
             }
         }
         for(i=k;i>=0;i--)
            printf("%d",ara[i]);
         puts("");
    }
}
