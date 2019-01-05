#include <iostream>

using namespace std;

int main()
{
    const int nilai=15000;
    int rupiah, dollar;

    cout << "\t\t\Pelita bangsa\n\n" << endl;
    cout << "==========================================\n" << endl;
    cout << "Nama : Rafi Alwan Setyawan \nNIM  : 311810325\n" << endl;
    cout << "==========================================\n" << endl;

    cout << "\t     Konversi USD$ ke Rupiah\n" << endl;


        cout<<"Input Nilai Dollar   = $ ";
        cin>>dollar;

        rupiah = dollar*nilai;

        cout << "==========================================\n" << endl;
        cout<<"Jadi, 1 Dollar       = Rp "<<rupiah<<endl;


    return 0;
}
