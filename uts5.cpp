#include<iostream>
using namespace std;

double kriteria(double berat, double tinggi)
{
    return berat / (tinggi * tinggi);
}

void statkriteria(double kriteria)
{
    if (kriteria < 18.4)
        cout << "berat badan kurang"<<endl;
    else if (kriteria > 18.5 && kriteria < 24.9)
        cout << "berat badan ideal"<<endl;
    else if (kriteria > 25 && kriteria < 29.9)
        cout << "berat badan lebih"<<endl;
    else if (kriteria > 30 && kriteria < 39.9)
        cout << "gemuk"<<endl;
    else if (kriteria > 40)
        cout << "sangat gemuk"<<endl;
}

int main(){

    double berat, tinggi, kriteria;

    cout << "Berat badan:";
    cin >> berat;

    cout << "Tinggi Badan:";
    cin >> tinggi;
    tinggi = tinggi / 100;

    kriteria = berat / (tinggi * tinggi);
    cout << "Kriteria Anda:";
    statkriteria(kriteria);
}
