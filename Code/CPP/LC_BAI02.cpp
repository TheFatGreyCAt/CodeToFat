#include <bits/stdc++.h>
#define ll long long 
#define ull unsigned long long 
#define ld long double
#define nmax 1000007
#define sz(a) int((a).size())
#define FOR1(i,a,b) for(int i=(a);i<=(b);i++)
#define FOR2(i,a,b) for(int i=(a);i>=(b);i--)
#define pb push_back
#define pf push_front
#define fi first
#define se second

using namespace std;

int n,a[1005];

bool isPrime[nmax];
void Era(int n)
{
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i <= n; ++i) {
        isPrime[i] = 1;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (isPrime[i]==1) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = 0;
            }
        }
    }
}

bool solve(int n)
{
    while (n>0)
    {
        if (isPrime[n]==0) return 0;
        else n /= 10;
    }
    return 1;
}

void fatcat()
{
    Era(1000001);
    //cout << "meowlo world";
    cin >> n;
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        cnt += solve(a[i]);
    }
    cout << cnt;
}

int main()
{ 
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
    //freopen("LC_BAI02","r",stdin);
    //freopen("LC_BAI02","w",stdout);
    fatcat();
    return 0;
}