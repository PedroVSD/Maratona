#include <iostream>
#include <string>

using namespace std;

int main() {
    string pais;

    getline(cin, pais);

    if (pais == "Brasil") {
        cout << "galinha" << endl;
    } 
    else if (pais == "Argentina") {
        cout << "gallina" << endl;
    } 
    else if (pais == "Alemanha") {
        cout << "huhn" << endl;
    } 
    else if (pais == "Estados Unidos") {
        cout << "hen ou chicken" << endl;
    } 
    else if (pais == "Franca") {
        cout << "poule" << endl;
    } 
    else if (pais == "Israel") {
        cout << "tarnegolet" << endl;
    } 
    else if (pais == "Egito") {
        cout << "farkha" << endl;
    } 
    else if (pais == "Italia") {
        cout << "gallina" << endl;
    } 
    else if (pais == "Polonia") {
        cout << "kura" << endl;
    } 
    else if (pais == "Finlandia") {
        cout << "kana" << endl;
    } 
    else if (pais == "Japao") {
        cout << "niwatori" << endl;
    } 
    else if (pais == "Russia") {
        cout << "kuritsa" << endl;
    } 
    else if (pais == "Angola") {
        cout << "to fraca" << endl;
    }

    return 0;
}