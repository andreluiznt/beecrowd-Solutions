#include <iostream>
using namespace std;

int main(void){
    int n, x, in=0, out=0;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> x;
        if(x >= 10 && x <= 20){
            in++;
        }else{
            out++;
        }
    }

    cout << in << " in" << endl << out << " out" << endl;

}