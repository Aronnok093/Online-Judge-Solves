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
    while (n--){
    int ara[10000];
    bool res=false;
    int cnt=0;
    for (int i=0;i<30;i++)
        cin>>ara[i];

    for (int i=0;i<30;i++){
        if (ara[i]==1)
            cnt++;
        else
            cnt=0;

        if (cnt>=6){
            res=true;
            break;
        }

    }
    if (res==true)
        cout<<"#coderlifematters"<<endl;
    else if (res==false)
        cout<<"#allcodersarefun"<<endl;
    }
