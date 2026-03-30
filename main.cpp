// Complete the following program.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;

    double result = 1.0;

    if (n >= 0) {
        for (int i = 0; i < n; i++) {
            result *= 2;
        }
    } else {
        for (int i = 0; i < -n; i++) {
            result /= 2;
        }
    }

    cout << setprecision(5) << fixed;
    cout << "2 to Power " << n << " is " << result << endl;

    return 0;
}
