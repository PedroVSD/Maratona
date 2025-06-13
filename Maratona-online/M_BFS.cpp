#include <queue>
#include <iostream>
#include <math.h>

using namespace std;

const int MOD = 1e9 + 7;

struct Node{
    Node *left, *right;
    Node() : left(NULL), right(NULL) {}
};


long long BFS(Node* root);
Node* construirArvore(int profundidade);

int main(void) {
    int n;
    cin >> n;

    Node* root = construirArvore(n);
    long long resultaddoNos = BFS(root);

    cout << resultaddoNos << endl;

    return 0;
}

long long BFS(Node* root) {
   
    if(root == NULL){
        return 0;
    }

    queue<Node*> fila;
    fila.push(root);

    long long fila_size = fila.size();
    long long nos = pow(fila_size,2);
    long long visitas = 0;

    while (!fila.empty()) {
        Node* atual = fila.front();
        fila.pop();

        if (atual->left) {
            fila.push(atual->left);
            visitas += 2;
        }
        if (atual->right) {
            fila.push(atual->right);
            visitas += 2;
        }
    }

    return visitas%MOD;
}

Node* construirArvore(int profundidade) {
    if (profundidade < 0) return NULL;

    Node* raiz = new Node();
    if (profundidade > 0) {
        raiz->left = construirArvore(profundidade - 1);
        raiz->right = construirArvore(profundidade - 1);
    }
    return raiz;
}