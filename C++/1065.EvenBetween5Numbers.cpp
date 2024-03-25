#include <iostream>
using namespace std;

int main(){
    int i, number, quant=0; // iniciar quant com 0 pois pode conter lixo de memória

    for(i=0; i<5; i++){
        cin >> number;

        if(number % 2 == 0){
            quant++;
        }
    }

    cout << quant << " valores pares" << endl;

    return 0;
}