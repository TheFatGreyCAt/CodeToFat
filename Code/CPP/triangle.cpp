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

void fatcat()
{
    //cout << "meowlo world";
    cin >> n;
    int cnt=n-2;
    for(int i=1;i<=n;i++)
    {
        for(int k=0;k<=cnt;k++)
        {
            cout << ' ';
        }
        cnt--;
        for(int j=1;j<=(i*2-1);j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

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