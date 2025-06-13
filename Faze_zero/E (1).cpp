#include <iostream>

using namespace std;

int MDC(int X, int Y);

int main(){
    int Y, K;
    int X = 1;

    cin >> Y >> K;

    for(int i = 0; i < K; i++){
        int divisor = MDC(X, Y);
        X += divisor;
        
    }

    cout << X;

    return 0;
}

int MDC(int X, int Y){
    if(X % Y == 0){
        return Y;
    }
    else{
        return MDC(Y, X % Y);
    }
}