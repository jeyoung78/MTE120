#include <iostream>
using namespace std;

void calcCurrent(double voltage[], double resistance) {
    for (int i = 0; i <= 10; i++ ) {
        double   current = voltage[i]/resistance;
        cout << current << endl;
    }
}

int main() {
    double voltage[] = {0.0, 0.0, 0.0, 0.0, 0.2, 0.6, 1.1, 1.5, 2.0, 2.5, 3.0};
    double resistance = 500.0;
    calcCurrent(voltage, resistance);

    return 0;
}