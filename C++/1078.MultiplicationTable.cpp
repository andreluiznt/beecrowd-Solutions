#include <iostream>
using namespace std;

int main(void){
    int i, n, mult;

    cin >> n;

    for(i=1; i<=10; i++){
        mult = i * n;
        cout << i << " x " << n << " = " << mult << endl;
    }

    return 0;
}