#include <iostream>
#include <string.h>
using namespace std;

int main(void){
    char classification[25];
    char classification2[25];
    char classification3[25];

    cin >> classification;
    cin >> classification2;
    cin >> classification3;

    if(strcmp(classification, "vertebrado") == 0){
        if(strcmp(classification2, "ave") == 0){
            if(strcmp(classification3, "carnivoro") == 0){
                cout << "aguia" << endl;
            }else if(strcmp(classification3, "onivoro") == 0){
                cout << "pomba" << endl;
            }
        }else if(strcmp(classification2, "mamifero") == 0){
            if(strcmp(classification3, "onivoro") == 0){
                cout << "homem" << endl;
            }else if(strcmp(classification3, "herbivoro") == 0){
                    cout << "vaca" << endl;
            }
        }
    }else if(strcmp(classification, "invertebrado") == 0){
        if(strcmp(classification2, "inseto") == 0){
            if(strcmp(classification3, "hematofago") == 0){
                cout << "pulga" << endl;
            }else if(strcmp(classification3, "herbivoro") == 0){
                cout << "lagarta" << endl;
            }
        }else if(strcmp(classification2, "anelideo") == 0){
            if(strcmp(classification3, "hematafogo") == 0){
                cout << "sanguessuga" << endl;
            }else if(strcmp(classification3, "onivoro") == 0){
                cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}