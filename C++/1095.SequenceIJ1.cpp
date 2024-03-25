#include <iostream>
using namespace std;

int main(void){
    int i, j;

    for(i=0; i<=60; i++){
        cout << "I=" << i << endl;
        for(j=60; j>=0; --j){
            cout << "J=" << j << endl;
        }
    }

    return 0;
}