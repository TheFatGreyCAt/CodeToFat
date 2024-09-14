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
ld a[nmax],n;

int dayofmonth(int m, int y)
{
    int res=31;
    if(m==2){
        if((y%4==0 && y % 100 !=0) || (y%400==0))
        {
            res=29;
        }
        else res=28;

    }
    else
    {
        if(m==4 || m==6 || m==9 || m==11)
        {
            res=30;
        }
    }
    return res;
}

void fatcat()
{
    //cout << "meowlo world";
    int m,y,cnt=0,d=1;
    int dow,k,c;
    string res="Saturday";
    cin >> m >> y;
    int m2=dayofmonth(m,y);
    if(m == 1 || m==2){
        m+=12;
        y-=1;
    }
    c=y/100;
    k=y%100;
    dow = (d+ int(26*(m+1)/10) + k + int(k/4) + int(c/4) + 5*c) % 7;
    switch (dow)
    {
    case 0:
        cnt=7;
        break;
    case 1:
        cnt=1;
        break;
    case 2:
        cnt=2;
        break;
    case 3:
        cnt=3;
        break;
    case 4:
        cnt=4;
        break;
    case 5:
        cnt=5;
        break; 
    case 6:
        cnt=6;
        break;
    default:
        break;
    }

    cout << "CN" << '\t';
    cout << "T2" << '\t';
    cout << "T3" << '\t';
    cout << "T4" << '\t';
    cout << "T5" << '\t';
    cout << "T6" << '\t';
    cout << "T7";
    cout << '\n';

    for(int i=1;i<cnt;i++)
    {
        cout << '\t';
    }

    for(int i=1;i<=m2;i++)
    {
        if(i<m2)
        {
            cout << i << '\t';
        }
        else
        {
            cout << i;
        }
        if(cnt%7==0)
        {
            cout << '\n';
        }
        cnt++;
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