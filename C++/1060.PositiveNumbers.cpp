#include <iostream>
using namespace std;

int main(void){
    int i;
    float number, quant;

    for(i=0; i<6; i++){
        cin >> number;
        if(number > 0){
            quant++;
        }
    }

    cout << quant << " valores positivos" << endl;

    return 0;
}