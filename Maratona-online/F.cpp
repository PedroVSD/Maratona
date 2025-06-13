#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    string expressao;
    string resposta;
    
    int a = 0, b = 0;

    cin >> n;

    expressao.resize(n);

    cin >> expressao;

    resposta = to_string(stoi(expressao));
    
    cin >> expressao;
    
    cout << resposta << endl;

    cout << a << "/" << b << endl;

    return 0;
}