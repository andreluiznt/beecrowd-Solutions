#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
    double a, b, av;

    cin >> a;
    cin >> b;

    av = (a*3.5 + b*7.5)/11;

    cout << "MEDIA = " << fixed << setprecision(5) << av << endl;

    return 0;
}