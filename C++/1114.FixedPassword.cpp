#include <iostream>
using namespace std;

int main(void){
    int password;

    do{

        cin >> password;
        if(password == 2002){
            cout << "Acesso Permitido" << endl;
        }else{
            cout << "Senha Invalida" << endl;
        }

    }while(password != 2002);

    return 0;
}