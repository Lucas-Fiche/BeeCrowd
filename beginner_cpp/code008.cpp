#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int number;
    int hours_worked;
    double per_hour;

    cin >> number >> hours_worked >> per_hour;

    double salary = hours_worked * per_hour;

    cout << fixed << setprecision(2);

    cout << "NUMBER = " << number << endl;

    cout << "SALARY = U$ " << salary << endl;

    return 0;
}