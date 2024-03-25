#include <iostream>
using namespace std;

int main(void){
    int x ,y;

    do{

        cin >> x >> y;
        if(x > y){
            cout << "Decrescente" << endl;
        }else if(y > x){
            cout << "Crescente" << endl;
        }else{
            return 0;
        }

    }while(x != y);

    return 0;
}