#include <iostream>
#include <cmath>

using namespace std;

enum PosicaoClaudio { ACIMA, ABAIXO };

int normaliza360(int a) {
    int r = a % 360;
    return (r < 0) ? r + 360 : r;
}

int main() {
    int AB, C;
    cin >> AB >> C;


    double radAB = AB * M_PI / 180.0;
    double radC  = C  * M_PI / 180.0;

    PosicaoClaudio pos = (sin(radC) > sin(radAB) ? ACIMA : ABAIXO);

    if (pos == ACIMA) {
        cout << "Olha o Claudio ali em cima!" << endl;
    } else {
        cout << "O Claudio ta ali embaixo!" << endl;
    }

    return 0;
}
