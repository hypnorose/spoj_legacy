#include <iostream>
using namespace std;

int main()
{
    int h;
    cin >> h;
    while (h--) {
        long long a, b;
        double m;
        cin >> a >> b >> m;
        if (m > 1.00 || m < -1.00) {
            cout << 0;
        }
        else if (m == 0) {
            b = b - a + 1;
            cout << b;
        }
        else if (m > 0 && m <= 1) {

            int k = a % 2;
            if (m != 1) {
                if ((b - a) % 2 == 0) {
                    cout << (b - a);
                }
                else if (k == 0) {
                    cout << (b - a + 1);
                }
                else {
                    cout << (b - a - 1);
                }
            }
            else {
                if ((b - a) % 2 == 0) {
                    cout << (b - a) / 2;
                }
                else if (k == 0) {
                    cout << (b - a + 1) / 2;
                }
                else {
                    cout << (b - a - 1) / 2;
                }
            }
        }
        else if (m < 0 && m >= -1) {
            int k = a % 2;
            if (m != -1) {
                if ((b - a) % 2 == 0) {
                    cout << (b - a);
                }
                else if (k == 0) {
                    cout << (b - a - 1);
                }
                else {
                    cout << (b - a + 1);
                }
            }
            else {
                if ((b - a) % 2 == 0) {
                    cout << (b - a) / 2;
                }
                else if (k == 0) {
                    cout << (b - a - 1) / 2;
                }
                else {
                    cout << (b - a + 1) / 2;
                }
            }
        }
        cout << endl;
    }

    return 0;
}