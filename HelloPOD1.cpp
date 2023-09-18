#include<bits/stdc++.h>
using namespace std;
typedef unsigned uint;
typedef long long int ll;
typedef unsigned long long ull;
#define fi first
#define se second
#define mp make_pair
#define mod 1000000007
#define mod1 998244353
#define nl '\n'
#define INF = 0x3f3f3f3f;
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462

ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}

int mod_mult(int a, int b){
	a = (a%mod); b = (b%mod);
	return (((a*b)%mod)+mod)%mod;
}
 
int mod_plus(int a, int b){
	a = (a%mod); b = (b%mod);
	return (((a+b)%mod)+mod)%mod;
}
 
int mod_minus(int a, int b){
	a = (a%mod); b = (b%mod);
	return (((a-b+mod)%mod)+mod)%mod;
}
  
int gcd_(int a, int b){
	if(b==0) return a;
	return gcd_(b,a%b);
}
 
int lcm_(int a, int b){
	return (a*b)/gcd_(a,b);
}

vector<int> FindDivisors(int n){
    vector<int> ans;
    for(int i=1;i*i<=n;i++){
		  if((n%i)==0){
		  	ans.pb(i);
			   if(i*i<n) {
            ans.pb(n/i);
         }
		  }
	  }
	 sort(ans.begin(), ans.end());
  return ans;
}
const int MAX = 2e5 + 10 ;
const int N = 2e5 + 10;
int nums[128];
char op[5];
int a[N];

void solve(void){
    cout << "Hello From POD-1." << "\n";
} 


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
  #endif
  ll t; cin >> t;
  while(t--) {
     solve();
  }
 #ifndef LOCAL
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
 #endif
    return 0;
}
