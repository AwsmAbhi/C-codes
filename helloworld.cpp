#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double
#define endl "\n"
#define pi (3.141592653589)
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

bool isPrime(int n){if (n == 1)return false; if (n == 3||n == 2)return true; if (n % 2 == 0||n % 3 == 0)return false;
for (int i = 5; i * i <= n; i = i + 6)if (n % i == 0 || n % (i + 2) == 0)return false; return true;}

void solve(){
    int n;
    cin>>n;
    cout<<n;
    
}
signed main(){
   fast;
   cout<<"hello world";

}
