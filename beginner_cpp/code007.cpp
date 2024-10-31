#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int A, B, C, D;

    cin >> A >> B >> C >> D;

    int diferenca = (A * B) - (C * D); 

    cout << fixed << setprecision(2);
    cout << "DIFERENCA = " << diferenca << endl;

    return 0;
}
