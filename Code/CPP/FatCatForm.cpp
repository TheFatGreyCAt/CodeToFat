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
int n,a[nmax],b[nmax][nmax];

void fatcat()
{
    //cout << "meowlo world";
    int z[]= {0,1,2,3};
    int below = -3, above = 6;
    int i;
    for(i=1;i<=4;i++)
    {
        cout << z[i] << " ";
    }
    cout << endl;
    z[below]=-999;
    z[above]=999;

    for ( i = 0; i < 4; i++)
    {
        cout << z[i] << " ";
    }
    cout << endl;

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