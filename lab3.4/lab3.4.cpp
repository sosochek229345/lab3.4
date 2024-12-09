#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    double R1, R2;
    cout << "Ê1 = ";
    cin >> R1;
    cout << " Ê2 = ";
    cin >> R2;

    if (R1 <= 0 || R2 <= 0 || R1 >= R2) {
        cout << "Error: R1 must be positive and less than R2." << endl;
        return 1;
    }

    double x, y;
    cout << "(x, y): ";
    cin >> x >> y;

    double distance = sqrt(x * x + y * y);

    if (distance >= R1 && distance <= R2) {
        cout << "The point belongs to the filled area." << endl;
    }
    else {
        cout << "The point does not belong to the filled area." << endl;
    }

    return 0;
}
