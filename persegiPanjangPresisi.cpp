#include <iostream>
using namespace std;

class PusatData{
    public:
    int tinggiPersegiPanjang, panjangPersegiPanjang;
    
    void selamatDatang(){
        cout << "<<=== MATH BY DAVISAPP ===>>" << endl << "\n";
        cout << "Tinggi Persegi Panjang --> "; cin >> tinggiPersegiPanjang; cout << endl;
        cout << "Panjang Persegi Panjang --> "; cin >> panjangPersegiPanjang; cout << endl;
        cout << "Detail Ukuran: " << tinggiPersegiPanjang << " x " << panjangPersegiPanjang * 2 << endl;
    }
    
    void mulaiMenggambar(){
        cout << "Menggambar Persegi Panjang Dimulai..." << endl << "\n";
        
        for(int a=0;a<tinggiPersegiPanjang;a++){
            for(int b=0;b<panjangPersegiPanjang * 2;b++){
                cout << " *";
            }
            cout << endl;
        }
        
         cout << "\nSelesai, Menggambar Sukses!" << endl;
    }
};


int main(){
    PusatData done; string jawaban = "otomatis";
    done.selamatDatang(); done.mulaiMenggambar();
    
    do{
    cout << endl << "Apakah Anda Ingin Memulai Ulang? (Ya/Tidak) --> ";
    cin >> jawaban; cout << endl;
    
    if(jawaban == "Ya"){
        done.selamatDatang(); done.mulaiMenggambar();
    }
    
    else {
        cout << "Baik, Terimakasih Karena Telah Menggunakan ^_^" << endl;
        cout << "Salam Hormat, Davis App" << endl;
  }
    }while(jawaban == "otomatis" || jawaban == "Ya");
}