#include<iostream>
using namespace std;
int main(){

    int m,n;
    cout << "Masukkan Jumlah Bilangan Ganjil:";
    cin >> m;

    for(n = 1; n <= m; n++)
    {
        if(n%2!=0)
        {
            cout << n;
            cout <<"\n";
        }
    }

    int i,j;
    cout << "Masukkan Jumlah Bilangan Genap:";
    cin >> i;

    for(j = 1; j <= i; j++)
    {
        if(j%2==0)
        {
            cout << j;
            cout <<"\n";
        }
    }
}
