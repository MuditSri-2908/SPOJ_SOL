#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<map>
#include<stack>
#include<queue>
#include<vector>
#include<set>
#include<deque>
#include<utility>
#include<algorithm>
#include<bitset>
#include<climits>
#include <sstream>
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define PB push_back
#define MP make_pair
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define INF 1000000000
#define M 1000000007
typedef long long int LL;
typedef long long               ll;
typedef unsigned int            uint;
typedef unsigned long long int     ull;
#define mem(a,b) memset(a,b,sizeof a)
using namespace std;
int a[1005][1005];
inline int read()
{
	int ret = 0;
	int c = getchar_unlocked();

	while(c<'0' || c>'9')
		c = getchar_unlocked();
	while(c>='0' && c<='9')
	{
		ret = (ret<<3) + (ret<<1) + c - '0';
		c = getchar_unlocked();
	}
        return ret;
}
int main()
{
    int n,t=1;
    while(1)
    {
        //scanf("%d",&n);
        n=read();
        if(n==0)
            return 0;
            int sum=0;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            {
            //scanf("%d",&a[i][j]);
            a[i][j]=read();
            sum+=a[i][j];
            }
        int pro[1005],loss[1005];
        mem(pro,0);
        mem(loss,0);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                pro[i]+=a[i][j];
                loss[j]+=a[i][j];
            }
        }
        int sum1=0;
         for(int i=1;i<=n;i++)
         {
             if(pro[i]>loss[i])
                sum1+=pro[i]-loss[i];
         }
        printf("%d. %d %d\n",t,sum,sum1);
    t++;
    }
    return 0;
}
