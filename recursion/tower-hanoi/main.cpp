#include <iostream>
#include <bits/stdc++.h>

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORN(i, a, b) for (int i = (a); i >= (b); i--)
#define all(x) begin(x), end(x) 
#define sz(x) int((x).size()) 
#define pb push_back
#define mk make_pair
#define N endl
#define ull unsigned long long int
#define ll long long int
#define DBG(x) cout<<#x<<" = "<<(x)<<endl;

using namespace std;

typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int, int> pi;
typedef pair<long long, long long> pl;

const int INF = 1e9 + 7; 
const int MOD = 998244353;
const int tam = (int)2e5 + 5;

ll cdiv(ll a, ll b) {
	return a / b + ((a ^ b) > 0 && a % b);
}  // divide a by b rounded up
ll fdiv(ll a, ll b) {
	return a / b - ((a ^ b) < 0 && a % b);
}  // divide a by b rounded down

void towerHanoi(int n, char from, char to, char aux){
	if(n == 0){
		return;
	} 
	towerHanoi(n - 1, from, aux, to);
	cout << "Move from " << from << " to " << to << "." << N;
	towerHanoi(n - 1, aux, to, from);
}

void solve() {
	int n; cin >> n;
	char a, b, c; cin >> a >> b;
	if((a == 'A' && b == 'B') || (a == 'B' && b == 'A'))
		c = 'C';
	if((a == 'A' && b == 'C') || (a == 'C' && b == 'A'))
		c = 'B';
	if((a == 'B' && b == 'C') || (a == 'C' && b == 'B'))
		c = 'A';
	
	towerHanoi(n, a, b, c);
	cout << "Done!" << N;
}

int main() { 
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
    int T; cin >> T;
    FOR(i, 0, T) {
        solve();
    }
    return 0; 
}

/*
 *    Do you know who did it? 
 *    GOD DID 
 */
