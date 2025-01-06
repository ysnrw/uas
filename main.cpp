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
        cin>>hargaBARANG[i];
        cout<<"Jumlah : "<<namaBARANG[i]<<"yang dibeli :";
        cin>>jumlahBARANG[i];
        cout<<endl;
    }cout <<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"####----      Struk Mini Market ILKOOM     ----####"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"No Barang Jumlah Harga Satuan Sub Total"<<endl;
    for (int i=0;i<jumlahTotalBarang;i++){
        cout<<setw(1)<<1+1<<" ";
        cout<<left<<setw(12)<<namaBARANG[i];
        cout<<right<<setw(15)<<jumlahBARANG[i];
        cout<<setw(18)<<hargaBARANG[i];
        cout<<setw(15)<<jumlahBARANG[i]*hargaBARANG[i];
        cout<<endl;
        totalHarga=totalHarga+(jumlahBARANG[i]*hargaBARANG[i]);
    }
    cout<<"--------------------------------------------------------"<<endl;
    cout<<"TotalHarga :Rp."<<totalHarga<<endl<<endl;
    cout<<"JumlahBayar :Rp. ";
    cin>>jumlahBayar;
    cout<<endl;

    while(jumlahBayar-totalHarga<0){
        cout<<"Maaf,Uang anda kurang.Mohon lakukan ulang pembayaran"<<endl;
        cout<<"Jumlah Bayar :Rp.";
        cin>>jumlahBayar;
        cout<<endl;
        cout<<"Kembalian :Rp. "<<jumlahBayar;
        cout<<endl;
    }
    cout<<"Kembalian :Rp."<<jumlahBayar-totalHarga<<endl<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"#### TerimaKasih Sudah berbelanja,datang kembali#####"<<endl;
    cout<<"--------------------------------------------------"<<endl;

    return 0;
}