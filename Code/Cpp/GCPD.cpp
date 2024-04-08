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

bool Prime(ll n)
{
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0) return 0;
        return 1;
}

int uc(int n, int m)
{
    for(int i=min(m,n);i>=2;i--)
    {
        if(m%i==0 && n%i==0  && Prime(i)==1)
        {
            return i;
            break;
        }
    }
    return -1;
}

void fatcat()
{
    //cout << "meowlo world";
    cin >> n >> m;
    cout << uc(m,n);
    /*
    tìm ước nguyên tố lớn nhất của 2 số
    */
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
    