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

int main()
{
}