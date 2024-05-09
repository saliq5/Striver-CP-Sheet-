#include<bits/stdc++.h>

#define inf 1e18
#define pb push_back
#define popb pop_back
#define fi first
#define se second
#define sll set<long long>
#define vll vector<long long>
#define ll long long int
#define pll pair<long long,long long>
#define vp vector<pair<long long,long long>>
#define umpll unordered_map<long long,long long>
#define mpll map<long long>
#define maxpq priority_queue<long long>
#define minpq priority_queue<long long, vector<long long>, greater<long long>>
#define dq deque<long long>
#define qu queue<long long>
#define st stack<long long>
#define ms multiset<long long>
#define usll unordered_set<long long>

#define mod 1000000007
#define clr(a) memset(a, 0, sizeof(a))
#define sz(x) x.size()
#define rep(n) for (ll i = 0; i < n; i++)
#define myfor(i, x, y) for (int i = x; i < y; i++)
#define mydec(i, x, y) for (int i = x; i >= y; i--)
#define all(v) v.begin(), v.end()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))

using namespace std;

void solve() {
    int t;
    cin>>t;
    while(t--){
        ll n, len = 0;
        cin>>n;
        vll ans;
        while(n>0){
            ll digit = n%10;
            n/=10;
            ll temp = pow(10,len)*digit;
            if(temp!=0) ans.pb(temp);
            len++;
        }
        cout<<sz(ans)<<endl;
        for(auto i: ans) cout<<i<<" ";
        cout<<endl;
    }
}

int main() {
    ios_base:: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}