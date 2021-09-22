#include<iostream>
#include<iomanip>
using namespace std;

int main(){

cout << "\nKonversi Celcius ke Fahrenheit, Reamur, dan Kelvin" << endl;

float celcius, fahrenheit, reamur, kelvin;

cout << "\nSuhu yang ingin anda konversi (dalam celcius) : ";
cin >> celcius;

fahrenheit  = (celcius*9/5)+32;
reamur      = (celcius*4/5);
kelvin      = celcius+273;

    cout << "\nBerikut adalah konversi suhu dalam :"
         << "\nFahrenheit\t : " << fahrenheit;
    cout << "\nReamur\t\t : " << reamur;
    cout << "\nKelvin\t\t : " << kelvin;
    
    return 0;

}