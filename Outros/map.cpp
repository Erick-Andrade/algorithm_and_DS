#include <bits/stdc++.h>
// #include <map>

using namespace std;

int main() {
    map<char, int> mp;
    /*
    Deixa a chave ordenada -> por isso muitas operações é O(logn), por fazer busca binária
    Não deixa chave repetida
    */

    // inserção -> O(logn)
    mp.insert({'a', 1});
    mp.insert({'b', 2});
    mp.insert({'c', 3});
    mp.insert({'c', 6}); // mantem a primeira inserção
    cout << mp['c'] << endl;


    map<char,int>::iterator it;
    for (it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    // Remoção -> O(logn)
    mp.erase('h'); // não da erro
    mp.erase('b');

    for (it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    //// encontrar -> O(logn)

    // 1 forma
    if (mp.find('b') != mp.end()) cout << "Encontrou" << endl;
    else cout << "Nao encontrou" << endl;

    // 2 forma []
    /*
    1- acessar diretamente um elemento por meio da chave.
    3- modificar um elemento por meio da chave.
    2- criar um elemento por meio da chave fazer uma atribuição.
    */

   cout << mp['a'] << endl; // 1
   mp['a'] = 100; // 2
   cout << mp['a'] << endl;
   // 3 -> o mp['j'] não existe, porém ao acessar com o [], ele acaba criando
   cout << mp['j'] << endl;
    for (it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }   

    return 0;
}
