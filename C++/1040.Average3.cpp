#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
    float n1, n2, n3, n4, ave, finalExam, finalAverage;

    cin >> n1 >> n2 >> n3 >> n4;

    ave = (n1*2 + n2*3 + n3*4 + n4*1)/10;

    cout << "Media: " << fixed << setprecision(1) << ave << endl;

    if(ave >= 7.0){
        cout << "Aluno aprovado." << endl;
    }else if(ave <= 7.0 && ave >= 5.0){
        cout << "Aluno em exame." << endl;
        cin >> finalExam;
        cout << "Nota do exame: " << fixed << setprecision(1) << finalExam << endl;
        finalAverage = (ave + finalExam)/2;
        if(finalAverage >= 5.0){
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << fixed << setprecision(1) << finalAverage << endl;
        }else{
            cout << "Aluno reprovado." << endl;
            cout << "Media final: " << fixed << setprecision(1) << finalAverage << endl;
        }
    }else if(ave < 5.0){
        cout << "Aluno reprovado." << endl;
    }

    return 0;
}