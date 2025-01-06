#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<"## Program Aplikasi Kasir ##"<<endl;
    cout<<"================================"<<endl<<endl;
    const int MAX_BARANG=10;
    string namaBARANG [MAX_BARANG];
    long hargaBARANG [MAX_BARANG];
    int jumlahBARANG [MAX_BARANG];
    long jumlahTotalBarang;
    long totalHarga = 0;
    long jumlahBayar = 0;

    cout<<"##   Selamat Datang di Mini Market ILKOOM    ##"<<endl<<endl;
    cout<<"Masukan jumlah barang yang ingin dibeli : ";
    cin>>jumlahTotalBarang;
    cout<<endl;

    if (jumlahTotalBarang <= 0 || jumlahTotalBarang >MAX_BARANG){
        cout<<"Jumlah Barang Tidak Valid"<<endl;
        return 0;
    }
    for (int i=0;i<jumlahTotalBarang;i++){
        cout<<"Barang ke : "<<i+1<<endl;
        cout<<"Nama Barang :";

        getline(cin>>ws,namaBARANG[i]);
        cout<<"Harga Satuan :";
        cin>>hargaBarang[i];
        cout<<"Jumlah : "<<namaBARANG[i]<<"yang dibeli :";
        cin>>jumlahBarang[i];
        cout<<endl;
}