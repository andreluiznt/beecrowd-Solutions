#include <iostream>
using namespace std;

int main(void){
    int a, b, c, d, total;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    total = a*b - c*d;

    cout << "DIFERENCA = " << total << endl;

    return 0;
}