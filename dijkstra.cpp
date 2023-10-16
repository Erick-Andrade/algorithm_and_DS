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
Devolve o menor caminho de um vértice source até todos os outros vértices (incluindo source);
dist[v] = +inf, exceto dist[source] = 0;
mark[v] = false;

Precisamos de dois vetores: distancia (menor distancia) e mark (se encontramos ou não o menor caminho)

1 passo -> pegar v com:
    - menor distancia
    - mark false
2 passo
    - mark[v] = true;
3 passo -> Iterar sobre todos os vizinho t de v e definir dist(t) = min(dist(t), dist(v) + w(v,t))
    dist(t) -> seria a própria distância de t (ou seja, pode ser que esse seja o menor caminho)
    dist(v) + w(v,t) -> considera o caminho source -> v -> t

*/

int n, m, source; // n: vértices, m: arestas
vector<vector<pair<int, int>>> grafo(MAX); // {vizinho, peso}
vector<int> dist(MAX, INF);
vector<bool> mark(MAX);

// Solução para grafos densos -> m aprox n^2
// Complexidade: O(n^2 + m)
void dijkstra_denso(int source) {
    /*
    Fazer o passo 1 de modo lento e o passo 3 de uma forma rápida
    1º passo (O(n^2))
    3º passo (O(m))
    */
    dist[source] = 0;

    for (int k = 0; k < n; k++) {
        // passo 1
        int cur = -1;
        for (int i = 0; i < n; i++) {
            if (mark[i]) continue;

            if (cur == -1 or dist[i] < dist[cur]) {
                cur = i;
            }
        }

        // passo 2
        mark[cur] = true;

        // passo 3
        for (int i = 0; i < grafo[cur].size(); i++) {
            int neighbour = grafo[cur][i].first;
            int w = grafo[cur][i].second;

            dist[neighbour] = min(dist[neighbour], dist[cur] + w);
        }
    }
}

// Solução para grafos esparsos -> ACABAR E ENTENDER
// Complexidade: O(m * log m)
void dijkstra_esparso(int source) {
    /*
    Etapa 1 de forma ótima e deixaremos o passo 3 um pouco mais lento.
    1º passo O(log m)
    3º passo O(m * log m)

    Semelhante à implementação de uma BFS
    */
    priority_queue<pair<int, int>> pq;
    dist[source] = 0;
    pq.push({0, source});
    
    for (int k = 0; k < n; k++) {
        int current;

        while (true) {
            current = pq.top().second;
            pq.pop();

            
        }
    }

}


/*
Input:
4 5 0
0 1 1
2 0 4
1 3 3
3 0 2
2 1 2
Output:
A distância entre 0 e 0 é 0
A distância entre 0 e 1 é 1
A distância entre 0 e 2 é 3
A distância entre 0 e 3 é 2
*/

int main() {
    cin >> n >> m >> source;
    while (m--) {
        int i, j, w; cin >> i >> j >> w;
        grafo[i].push_back({j, w});
        grafo[j].push_back({i, w});
    }

    dijkstra_denso(source);
    //dijkstra_esparso(source);
    for (int i = 0; i < n; i++) {
        cout << "A distância entre " << source << " e " << i <<  " = " << dist[i] << endl;
    }
    return 0;
}