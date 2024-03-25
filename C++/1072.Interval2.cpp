#include <iostream>
using namespace std;

int main(void){
    int n, i, num, quant1=0, quant2=0;

    cin >> n;

    for(i=0; i<n; i++){
        cin >> num;
        if(num >= 10 && num <= 20){
            quant1++;
        }else{
            quant2++;
        }
    }

    cout << quant1 << " in" << endl;
    cout << quant2 << " out" << endl;

    return 0;
}