#include <bits/stdc++.h>

using namespace std;

/*
5 4
1 3 -2 5 3
0 3
2 4
3 3
0 0
0 3
2 4
3 3
0 0

output:
7
6
5
1
7
6
5
1
*/

int main() {

    // Dado um vetor V de tamanho N e Q perguntas contendo dois inteiros li e ri, você precisa responder, para cada pergunta, a soma dos elementos no intervo [li, ri] do vetor V

    int n, q; cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];


    // Solução mais simples/ruim: O(n * q)
    for (int i = 0; i < q; i++) {
        int l, r; cin >> l >> r;
        int sum = 0;
        for (int k = l; k <= r; k++) sum += v[k];

        cout << sum << endl;
    }

    // soma de prefixo
    vector<int> psm(n);
    psm[0] = v[0];
    for (int i = 1; i < n; i++) psm[i] = psm[i-1] + v[i];

    while (q--) {
        int l, r; cin >> l >> r;
        int sum;
        if (l == 0) sum = psm[r];
        else sum = psm[r] - psm[l-1];
        cout << sum << endl;
    }

    return 0;
}