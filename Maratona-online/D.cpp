#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome;
    string nome_dan = "Daniel sad";
    string nome_dan2 = "Daniel saad";

    getline(cin, nome);

    size_t pos = nome.find(nome_dan);
    
    if (pos != string::npos) {
        nome.replace(pos, nome_dan.size(), nome_dan2);
    }

    cout << nome << endl;

    return 0;
}
