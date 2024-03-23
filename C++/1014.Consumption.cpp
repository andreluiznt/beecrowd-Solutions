#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
    int distance;
    float spentft, total;

    cin >> distance;
    cin >> spentft;

    total = distance/spentft;

    cout << fixed << setprecision(3) << total << " km/l" << endl;

    return 0;
}