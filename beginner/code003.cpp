#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double n = 3.14159;
    double R;
    cin >>  R;
    double A = n*R*R;

    
    cout << fixed << setprecision(4);
    cout << "A=" << A << endl;

    return 0;
}