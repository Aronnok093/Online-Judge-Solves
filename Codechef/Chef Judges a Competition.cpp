#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define INF (int)1e9
#define PI acos(-1.0)
#define sc scanf
#define pf printf
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define in1(num) scanf("%d",&num)
#define in2(num1,num2) scanf("%d %d",&num1,&num2)
typedef long long ll;
using namespace std;
int main()
{
    ll n;
    cin>>n;
    while (n--)
    {
        ll i,ara[100000],ara2[100000],k;
        cin>>k;
        for (i=0;i<k;i++)
            cin>>ara[i];
        for (i=0;i<k;i++)
            cin>>ara2[i];

        sort(ara,ara+k);
        sort(ara2,ara2+k);

        ll a=0,b=0;
        for (i=0;i<k-1;i++){
            a+=ara[i];
            b+=ara2[i];
        }
        if (a>b)
            cout<<"Bob"<<endl;
        else if (a<b)
            cout<<"Alice"<<endl;
        else
            cout<<"Draw"<<endl;

    }
}
