#include <iostream>

using namespace std;

int main(void){
    int a,b,c,d;

    cin >> a >> b >> c >> d;

    if(a == b+c+d && d == b+c && b == c){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }    
}