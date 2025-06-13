#include "bits/stdc++.h"


using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;


const string ENDL = "\n";

int MDC(int X, int Y);

void solve(){
	int Y, K;
    int X = 1;

    cin >> Y >> K;

    for(int i = 0; i < K; i++){
        int divisor = MDC(X, Y);
        X += divisor;
        
    }

    cout << X;

}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;

}

int MDC(int X, int Y){
    if(X % Y == 0){
        return Y;
    }
    else{
        return MDC(Y, X % Y);
    }
}