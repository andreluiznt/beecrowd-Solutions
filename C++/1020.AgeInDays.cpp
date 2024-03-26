#include <iostream>
using namespace std;

int main(void){
    int days, aux;

    cin >> days;

    cout << days/365 << " ano (s)" << endl;
    aux = (days % 365);

    cout << aux/30 << " mes (es)" << endl;
    aux = (aux % 30);

    cout << aux << " dia (s)" << endl;

    return 0;
}