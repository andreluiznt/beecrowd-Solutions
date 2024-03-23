#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
    double a, b, c, av;

    cin >> a;
    cin >> b;
    cin >> c;

    av = (a*2.0 + b*3.0 + c*5.0)/10.0;

    cout << "MEDIA = " << fixed << setprecision(1) << av << endl;
    
    return 0;
}