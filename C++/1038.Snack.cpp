#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
    int x, y;
    float total;

    cin >> x >> y;

    if(x == 1){
        total = y * 4.00;
    }else if(x == 2){
        total = y * 4.50;
    }else if(x == 3){
        total = y * 5.00;
    }else if(x == 4){
        total = y * 2.00;
    }else if(x == 5){
        total = y * 1.50;
    }

    cout << "Total: R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}