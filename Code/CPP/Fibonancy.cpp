#include <bits/stdc++.h>
#define ll long long 
#define ull unsigned long long 
#define ld long double
#define nmax 100007
#define sz(a) int((a).size())
#define FOR1(i,a,b) for(int i=(a);i<=(b);i++)
#define FOR2(i,a,b) for(int i=(a);i>=(b);i--)
#define pb push_back
#define pf push_front
#define fi first
#define se second

using namespace std;
ld a[nmax],b,c,m,n,d,t;

ld Fibo(ld n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return Fibo(n-1)+Fibo(n-2);
    }
}

void fatcat()
{
    //cout << "meowlo world";
    cin >> n;
    a[0]=1;
    a[1]=1;
    ld res=-1;
    for(int i=2;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2];
        if(n==a[i])
        {
            res=a[i];
            break;
        }
        if(a[i]>n) break;
    }
    cout << res << " la so fibonancy";
}

int main()
{ 
	ios_base::sync_with_stdio(0); 
	cin.tie(0);
    //freopen("Meo.INP","r",stdin);
    //freopen("Meo.OUT","w",stdout);
    fatcat();
    return 0;
}
    