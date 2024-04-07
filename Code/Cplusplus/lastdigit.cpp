#include <bits/stdc++.h>
#define ll long long 
#define ull unsigned long long 
#define ld long double
#define nmax 100007
#define sz(a) int((a).size())
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FOD(i,r,l) for (int i=r;i>=l;i--)
#define pb push_back
#define pf push_front
#define fi first
#define se second

using namespace std;
ld a[nmax],b,c,m,n,d,t;

int lastDigitDiffZero(int n)
{
    ll res=1;
    for(int i=2;i<=n;i++)
    {
        res*=i;
        while(res%10==0)
        {
            res/=10;
        }
        res%=100;
    }
    while(res%10==0)
    {
        res/=10;
    }
    return res%10;
}

void fatcat()
{
    //cout << "meowlo world";
    cin >> n;
    /*
    for(int i=1;i<=n;i++)
    {
        cout << lastDigitDiffZero(i) << ' ';
        if(i%2==0) cout << endl;
    }*/
    cout << 6%10;
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