#include <bits/stdc++.h>
// #inclued <set>

using namespace std;

int main() {

    /*
    Segue a ideia de conjunto, sendo assim:
        - Não tem repetição
    
    Além disso, mantém os elementos em ordem crescente
    Os elementos são como chaves (igual no map)
    As chaves não podem ser modificadas, apenas removidas ou adicionadas
    Complexidade de O(log n)
    */

    set<int> st;
    st.insert(10);
    st.insert(50);
    st.insert(10);
    st.insert(100);
    st.insert(-13);
    st.insert(10000);
    
    set<int>::iterator it = st.begin();
    for (it; it != st.end(); it++) {
        cout << *it << " "; 
    }
    cout << endl;

    // Remove caso exista
    st.erase(-13);

    for (it = st.begin(); it != st.end(); it++) {
        cout << *it << " "; 
    }
    cout << endl;

    return 0;
}