#include<iostream>
#include<string>
using namespace std;

int main(){
    string namaMahasiswa, NPM;
    float absensi, tugas, uts, uas, nilai_akhir;
    char nilai_huruf;

    cout << "Program Menghitung Nilai Akhir Mahasiswa"<<endl;
    cout << "----------------------------------------"<<endl;

    cout << "Masukkan nama Mahasiswa:";
    cin >> namaMahasiswa;

    cout << "Masukkan NPM:";
    cin >> NPM;

    cout << "Masukkan Nilai Absen:";
    cin >> absensi;

    cout << "Masukkan Nilai Tugas:";
    cin >> tugas;

    cout << "Masukkan NIlai UTS:";
    cin >> uts;

    cout << "Masukkan Nilai UAS:";
    cin >> uas;

nilai_akhir=((absensi * 0.1)+(tugas * 0.2)+(uts * 0.3)+(uas * 0.4));

if (nilai_akhir >= 85){
    nilai_huruf = 'A';
}else if (nilai_akhir >= 80 ){
    nilai_huruf = 'B';
}else if (nilai_akhir >= 75){
    nilai_huruf = 'C';
}else if (nilai_akhir >= 70){
    nilai_huruf = 'D';
}else {
    nilai_huruf = 'E';
}

cout << "Nilai Akhir:" <<nilai_akhir<<endl;
cout << "Nilai Huruf:" <<nilai_huruf<<endl;



}


