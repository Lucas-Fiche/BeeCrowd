#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    char nome[250];
    double fixed_salary;
    double total_sales;

    cin >> nome >> fixed_salary >> total_sales;

    double bonus = total_sales * 0.15;
    double salary = fixed_salary + bonus;

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << salary << endl;

    return 0;
}