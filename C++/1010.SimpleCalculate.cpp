#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
    int codeProd1, unitProd1, codeProd2, unitProd2;
    float priceProd1, priceProd2, total;

    cin >> codeProd1 >> unitProd1 >> priceProd1;
    cin >> codeProd2 >> unitProd2 >> priceProd2;

    total = unitProd1*priceProd1 + unitProd2*priceProd2;

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}