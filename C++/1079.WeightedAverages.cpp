#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
    int n;
    float num1, num2, num3, res;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> num1 >> num2 >> num3;
        res = (num1*2 + num2*3 + num3*5)/10;
        cout << fixed << setprecision(1) << res << endl;
    }

    return 0;
}