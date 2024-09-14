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

void toUpper(string *s)
{
    for(int i=0;i<(*s).size();i++)
    {
        if((*s)[i]>='a' && (*s)[i] <= 'z')
        {
            (*s)[i]-=32;
        }
    }
}
// note : truyền tham chiếu là string &s (địa chỉ) và thao tác với só bình thường
//truyền tham trị là string *s thao tác vào giá trị trong địa chỉ của biến
void fatcat()
{
    //cout << "meowlo world";
    string s;
    cin >> s;
    toUpper(&s);
    cout << s;
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