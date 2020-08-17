#include <bits/stdc++.h>
using namespace std;

//Author: Varun Goyal (@govarun)

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifdef GOVARUN
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

#define f(i, n) for(int i=0;i<(n);++i)
#define fa(i, a, n) for(int i=(a);i<=(n);++i)
#define fd(i, a, n) for(int i=(a);i>=(n);--i)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define fill(a)  memset(a, 0, sizeof (a))
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define endl '\n'
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<int> vi;
inline bool EQ(double a, double b) {return fabs(a-b) < 1e-9;}
ll gcd(ll a, ll b){if(b==0)return a;return gcd(b, a%b);}
ll lcm(ll a, ll b){return a*(b/gcd(a, b));}
ll binexp(ll a, ll b, ll mod){ll ans = 1;while(b){if(b&1) ans = ans*a%mod; b/=2;a=a*a%mod;}return ans;}
ll inverse(ll a, ll p, ll mod){return binexp(a, p-2, mod);}
// bool sortbysec(const pll &a, const pll &b){return (a.second < b.second);} 
const ll mod = 1e9 + 7;
const int maxn = 1e5 + 5;
void pre(){

}

void solve() {
    
}

int main(){
    ios::sync_with_stdio(0);    
    cin.tie(0); cout.tie(0);
    #ifdef GOVARUN
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else 
    #define GOVARUN 0
    #endif
    int TC = 1;
    // cin >> TC;
    pre();
    while(TC--){    
        solve();
        cout << "\n";
    }
    return 0;
}

