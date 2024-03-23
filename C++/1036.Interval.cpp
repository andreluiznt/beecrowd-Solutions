#include <iostream>
using namespace std;

int main(void){
    float number;

    cin >> number;

    if(number >= 0 && number <= 25){
        cout << "Intervalo [0,25]" << endl;
    }else if(number > 25 && number <= 50){
        cout << "Intervalo (25,50]" << endl;
    }else if(number > 50 && number <= 75){
        printf("Intervalo (50,75]\n");
        cout << "Intervalo (50,75]" << endl;
    }else if(number > 75 && number <= 100){
        printf("Intervalo (75,100]\n");
        cout << "Intervalo (75,100]" << endl;
    }else{
        cout << "Fora de intervalo" << endl;
    }

    return 0;
}