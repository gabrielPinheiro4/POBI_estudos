#include <iostream>
#include <vector>

using namespace std;


int main() {

    int qntNumeros;

    cin >> qntNumeros;

    vector<string> listaNums[qntNumeros];

    for (int i = 0; i < qntNumeros; i++) {

        cin >> listaNums[i];
    }

    for (int i = 0; i < qntNumeros; i++) {

        cout << listaNums[i];
    }

    return 0;
}
