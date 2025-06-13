#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
        return;
    }

    // Imprime os pares do maior para o menor
    for (int i = n; i >= 2; i -= 2)
        cout << i << " ";

    // Imprime os ímpares do menor para o maior
    for (int i = 1; i <= n; i += 2)
        cout << i << " ";

    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    // cin >> t; // Descomente se houver múltiplos casos de teste
    while (t--)
        solve();

    return 0;
}
