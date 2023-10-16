#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
 
const int MAX = 1e6+10;
const int IINF = INT_MAX;
const int INF = 0x3f3f3f3f;
const ll lINF = 0x3f3f3f3f3f3f3f3fll;

/*
7 4
-2 0 4 7 8 9 11
5 -2 7 15

Output:
-1
1
4
-1
*/

int n, m;
vector<int> vet;

int buscaB(int x) {
    int l = 0, r = n - 1, ans = -1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (x > vet[mid]) l = mid + 1;
        else if (x == vet[mid]) {
            ans = mid + 1;
            r = mid - 1;
        } else r = mid - 1;
    }

    return ans;
}

int main() {

    /*
    dado um vetor ordenado de n números distintos, faça um programa que responde a m perguntas do tipo: "o número x está no vetor?". A primeira linha terá dois inteiros: os valores de n e m, respectivamente. A segunda linha terá n inteiros ordenados: os elementos do vetor. A terceira e última linha terá m inteiros. Para cada um desses números, seu programa deve gerar uma linha na saída. Se o número não estiver no vetor, a linha deve ter o valor "-1". Caso ele esteja, ela deve imprimir a posição do número no vetor (indexado de 1 a n).    
    
    Complexidade: O(log n)
    */

    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        vet.push_back(x);
    }

    while (m--) {
        int x; cin >> x;
        cout << buscaB(x) << endl;
    }
    return 0;
}