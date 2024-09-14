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
ld a[nmax],m,n;

void fatcat()
{
    //cout << "meowlo world";
    float res,mx;
    for(int i=1;i<=5;i++)
    {
        cin >> a[i];
    }
    for(int i=1;i<=5;i++)
    {
        for(int j=i+1;j<=5;j++)
        {
            if(a[i] > a[j]){
                res=a[i];
                a[i]=a[j];
                a[j]=res;
            }
        }
    }
    if (a[1]==a[5]){
        cout << a[1];
    }
    else{
        mx=a[5];
        for (int i = 2; i <=5; i++)
        {
            if(a[i]==mx){
                a[i]=a[1];
            }
        }
        for(int i=1;i<=5;i++)
        {
            for(int j=i+1;j<=5;j++)
            {
                if(a[i] > a[j]){
                    res=a[i];
                    a[i]=a[j];
                    a[j]=res;
                }
            }
        }
        cout << a[5];
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