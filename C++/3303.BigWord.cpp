#include <iostream>
#include <string.h>
using namespace std;

int main(void){
    char palavra[20];

    cin >> palavra;

    if(strlen(palavra) >= 10){
        cout << "palavrao" << endl;
    }else{
        cout << "palavrinha" << endl;
    }

    return 0;
}