#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
    char name[20];
    double salary, sale, salaryBonus;

    cin >> name;
    cin >> salary;
    cin >> sale;

    salaryBonus = salary + (sale*0.15);

    cout << "TOTAL = R$ " << fixed << setprecision(2) << salaryBonus << endl;
    
    return 0;
}