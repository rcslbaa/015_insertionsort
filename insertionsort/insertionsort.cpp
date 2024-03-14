// insertionsort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int n;
int arr[9];

void input() {
    while (true) {
        cout << "Masukan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }
    }
    cout << endl;                           //output baris kosong
    cout << "===============" << endl;      //output ke layar
    cout << "Masukan Elemen Array" << endl; //output ke layar
    cout << "===============" << endl;      //output ke layar

    for (int i = 0; i < n; i++) { //looping dengan i dimulai dari 0 hingga n-1
        cout << "Data ke-" << (i + 1) << ": "; //output ke layar
        cin >> arr[i];                         //input ke pengguna

    }
}

void display() {
    cout << endl;
    cout << "===================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "===================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j]; // Output setiap element array pada garis baru
        if (j < n - 1) {
            cout << " --> ";
        }
    }
    cout << endl;
    cout << endl;
    cout << "Jumlah pass = " << n - 1 << endl; //menampilkan total angka dari elemen yang benar
    cout << endl;
}

void insertionSort() {
    int i, n, temp, j;
    int arr[9];

    for (i = 1; 1 <= n - 1; i++) { //step 1

        temp arr[i]; //step 2

        j = i - 1; ///step 3

        while (j <= 0 && arr[j] > temp); //step 4
        {
            arr[j + 1] = arr[j]; //step 4a
            j--; //step 4b
        }
        arr[j + 1] = temp; //step 5

    }
}

int main()
{
    input();
    insertionSort();
    display();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
