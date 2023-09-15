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
 
int mdc(int a, int b) {
    // a >= b
    if (a < b) swap(a, b);
    int r = a % b;
    if (r == 0) return b;
    
    return mdc(b, r);
}

int main() { _
    
    int a, b; cin >> a >> b;
    cout << mdc(a, b) << endl;
    return 0;
 
}