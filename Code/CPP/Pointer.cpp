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

int sumPointer(int *p)
{
    (*p)++;
}

void main1()
{
    int a=5;
    sumPointer(&a);
    cout << a;
}

void fatcat()
{
    //cout << "meowlo world";
    /*
    int a=5;
    int *p;
    p=&a; //cho con trỏ trỏ tới biến a
    *p=20;
    cout << "Value of a:" << a << "\n"; 
    cout << int(&a) << "\n";
    cout << *(&a) << "\n";
    cout << &a << "\n"; // địa chỉ của a in dưới dạng hệ cơ số 16
    *(&a)=9;
    cout << a << "\n";
    cout << sizeof(long long);
    */
    int number=9;
    int* p1 = &number;
	char* p2 = (char*)&number;
	double* p3 = (double*)&number;
    // 2^ 32 địa chỉ == 2^32 ô nhớ == 4 byte
    /* sự khác nhau giữa các kiểu con trỏ: 
    vd 
    kiểu char(lấy 1 byte đầu tiên mà nó chỉ tới làm giá trị) 
    kiểu int(lấy 4 byte ...)
    */
   char kt='a';
   char *p = &kt;
   cout << sizeof(p); // ans is 4, độ rộng của con trỏ phụ thuộc vào platform mà cá nhân build
}



int main()
{ 
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
    //freopen("Meo.INP","r",stdin);
    //freopen("Meo.OUT","w",stdout);
    //fatcat();
    main1();
    return 0;
}