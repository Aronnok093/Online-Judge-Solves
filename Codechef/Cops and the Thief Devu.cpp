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
    int n;
    cin>>n;
    while(n--)
    {
    int m,x,y;
    cin>>m>>x>>y;
    int ara[10000],i,cnt=0;
    for(i=1;i<=100;i++)
        ara[i]=0;
    while (m--)
    {
        int a;
        cin>>a;
        int l,h;
        l=a-(x*y);
        l=l<1?1:l;
        h=a+(x*y);
        h=h>100?100:h;
        for (i=l;i<=h;i++)
            ara[i]++;
    }
    for (i=1;i<=100;i++)
    {
        if (ara[i]==0)
            cnt++;
    }
    cout<<cnt<<endl;
    }
}
