#include <iostream>
using namespace std;

int arr[20]; //Membuat array dengan panjang data 20
int n; //Membuat variable input n

void input()
{
    while (true)
    {
        cout << "Masukan Jumlah Data pada Array : "; //Membuat inputan jumlah data
        cin >> n; //Memanggil varible inputan n
        if (n <= 20)
        { // Membuat kondisi n tidak lebih dari 20
            break;
        }
        else
        {
            cout << "\nArry yang anda masukan maksimal 20 Elemen.\n"; // Menampilkan pesan jika data lebih dari 2-
        }
    }
    cout << endl;  
    cout << "=====================" << endl; //Mmebuat tampilan susunan data element array
    cout << "Masukan Element Array" << endl; //Mmebuat tampilan susunan data element array
    cout << "=====================" << endl; //Mmebuat tampilan susunan data element array
    
    for (int i = 0; i < n ; i++) //Menggunakna perulang for untuk menyimpan data pada array
    {
        cout << "Data ke- " << (i+1) << " : "; //Memasukan atau menginputkan nilia data n
        cin >> arr[i]; //Menyimpan data n ke dalma array arr
    }
}

void insertiosnShort()
{ // Membuat prosedur insertionShort
    int temp; // Membuat variable data temporer atau penyimpanan sementara
    int j, i; // Membuat variable j sebagai penanda

    for (i = 1; i <= n - 1; i++) // Step 1 
    {
        temp = arr[i]; // Step 2
        j = i - 1; // Step 3
        
        while (j >= 0 && arr[j]) // Step 4
        {
            arr[j + 1] = arr[j]; // Step 4a
            j--; // Step 4b
        }

        arr[j +1] = temp; // Step 5
    }
}

void display()
{
    cout << endl; //Output baris kosong
    cout << "=================================="<< endl; 
    cout << "Total Pass = " << n - 1  << endl; // Count element movement
    cout << "=================================="<< endl; // Output ke layar
    cout << "Element Array yang telah tersusun"<< endl; // Output ke layar
    cout << "=================================="<< endl; // Output ke layar

    for (int j = 0; j < n; j++)
    { // Loping dengan j dimulai dari 0 hingga n-1
        cout << arr[j] << endl; // Output ke layar
    }
    cout << endl; //Output baris kosong
}

int main()
{
    input(); //Memanggil prosedur input
}