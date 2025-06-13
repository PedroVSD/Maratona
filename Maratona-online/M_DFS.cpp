#include <iostream>

using namespace std;

struct Node{
    Node* left;
    Node* right;
};

int DFS(Node* root, int n, int contador);

int main(void){
    int n;
    cin >> n;
    int contador = 1;

    Node* root = nullptr;
    int nodeCount = DFS(root, n, contador);
    
    cout << "Total de nos: " << nodeCount << endl;
    
    return 0;
}

int DFS(Node* root, int n, int contador){
    if(root == NULL){
        return 0;
    }


    contador += DFS(root->left, n, contador);
    contador += DFS(root->right, n, contador);
    
    return contador;
}

/* 
No primeiro nível, o 0 vc tem 2^0 nós
E em cada subsequente vc tem 2^k
Somando tudo dá 2^0+2^1+...+2^(levels-1)
Que é (2^levels) - 1
Vc pode provar o que eu disse usando indução, mas tem um jeito mais fácil
É só vc pensar no número binário 11111111.....
Ele é o primeiro número que vem antes do 10000.....
E esse número 10000.... é 2^n
Logo o anterior é (2^n) - 1
*/