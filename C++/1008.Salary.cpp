#include <iostream>
#include <iomanip>
using namespace std;

int main(void){
    int numbEmployed, numbHoursPm;
    double salaryPh, salaryPm;

    cin >> numbEmployed;
    cin >> numbHoursPm;
    cin >> salaryPh;

    salaryPm = numbHoursPm * salaryPh;

    cout << "NUMBER = " <<  numbEmployed << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salaryPm << endl;

    return 0;
}