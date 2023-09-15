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
 

// fib com DP
// usa DP com abordagem Top-Down
// Agora temos uma complexidade de O(n)
int n, dp[MAX];

int fib(int x) {
    // valors que ja calculei
    if (dp[x] != -1) return dp[x];

    // caso base
    if (x <= 1) return x;
    
    // valores que ainda não calculei -> faço cálculo e armazeno em dp
    return dp[x] = fib(x-1) + fib(x-2);

}

int main() { _
    memset(dp, -1, sizeof(dp));
    cin >> n;
    cout << fib(n) << endl;


    // Podemos utilizar DP com com abordagem Bottom-Up também - MESMA COMPLEXIDADE DA ANTERIOR
    /*
    int fibAns[MAX];
    fibAns[0] = 0;
    fibAns[1] = 1;

    for (int i = 2; i <= n; i++) fibAns[i] = fibAns[i-1] + fibAns[i-2];
    cout << fibAns[n] << endl;
    */
    return 0;
}