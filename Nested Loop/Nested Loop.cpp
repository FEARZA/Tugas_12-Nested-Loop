#include <iostream>
using namespace std;
int c, d;
int main() {
cout << "masukan nilai awal >> "; cin >> c;
cout << "masukan nilai akhir >> "; cin >> d;
    for ( int a = c ; a <= d; a++) {
        for (int b = d ; b > a ; b--) {
            cout << " ";
        }
        for (int c = 1; c <= (2 * a - 1); c++){
        	cout << "+";
		}
        cout << endl;
    }
}
