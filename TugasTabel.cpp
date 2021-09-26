#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){

    string nama, nim, plug;
    float strip, namab = 0, nimb = 0, plugb = 0;

    cout << "\nMasukkan data anda : " << endl;
        cout << "Nama" << setw(6) << ": ";
        getline(cin, nama);
        cout << "NIM" << setw(7) << ": ";
        cin >> nim;
        cout << "Plug" << setw(6) << ": ";
        cin >> plug;

    cout << endl << "Inilah data anda :" << endl << "//Jika plug kosong harap isi dengan 'non'//" << endl
         << "Nama" << setw(6) << ": " << nama << endl
         << "NIM" << setw(7) << ": " << nim << endl
         << "Plug" << setw(6) << ": " << plug << endl; 

    strip = 2*(3+nama.length() + nim.length() + plug.length());
    // dikali 2 supaya textnya centered

    namab = nama.length(), 
    nimb = nim.length(), 
    plugb = plug.length();


    cout << endl << endl << "Dalam bentuk tabel :" << endl;

    cout << setfill('=') << setw(strip) << '=' << endl; //garis horizontal tabel

        if(nama.length()%2==0){
        namab--;
        } 

    cout << setfill(' ') 
          << "|" << setw(namab+2) <<"Nama" << setw(namab) << "|" 
          << setw(nimb+2) << "NIM" << setw(nimb) << "|" 
          << setw(plugb+2) << " Plug" << setw(plugb) << "|" << endl;

     
    cout << setfill('=') << setw(strip) << "=" << endl; 

    cout << setfill(' ')
          << "|" << setw(namab-namab/2) << " " << nama << setw(2+namab/2) <<  "|" 
          << setw(1+nimb/2) << " " << nim << setw(2+nimb/2) << "|"  
          << setw(1+plugb/2) << " " << plug << setw(2+plugb-plugb/2) << " |" << endl;

    cout << setfill('=') << setw(strip) << "=" << endl;

  

return 0;
}
