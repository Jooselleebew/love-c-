#include <iostream>
using namespace std;

int main() {
    int size = 10; // Ukuran love shape

    // Bagian atas love shape
    for (int i = size / 2; i <= size; i += 2) {
        // Spasi bagian kiri
        for (int j = 1; j < size - i; j += 2)
            cout << " ";

        // Karakter love bagian kiri
        for (int j = 1; j <= i; j++)
            cout << "*";

        // Spasi di tengah
        for (int j = 1; j <= size - i; j++)
            cout << " ";

        // Karakter love bagian kanan
        for (int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    // Bagian bawah love shape
    for (int i = size; i >= 1; i--) {
        // Spasi bagian kiri
        for (int j = i; j < size; j++)
            cout << " ";

        // Karakter love bagian bawah
        for (int j = 1; j <= (i * 2) - 1; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}
