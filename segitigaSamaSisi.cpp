#include <iostream>
using namespace std;

class PusatData{
    public:
    int tinggiSegitiga;
    
    void selamatDatang(){
        cout << "<<=== MATH BY DAVISAPP ===>>" << endl;
        cout << "Tinggi Segitiga --> "; cin >> tinggiSegitiga; cout << endl << "\n";
    }
    
    void mulaiMembuat(){
        for(int a=0;a<tinggiSegitiga;a++){
            for(int p=tinggiSegitiga-a;p>0;p--){
                cout << " ";
            }
            
            for(int i=tinggiSegitiga-a;i<tinggiSegitiga;i++){
                cout << " *";
            }
            
            cout << endl;
        }
    }

    
};

int main(){
    PusatData done;
    string memulai;
    
    do{
    done.selamatDatang(); done.mulaiMembuat();
    cout << endl << "Apakah Anda Ingin Mulai Ulang? (Ya/Tidak) --> ";
    cin >> memulai; cout << "\n" << endl;
    }while(memulai=="Ya");
    
    if(memulai == "Ya"){
        done.selamatDatang(); done.mulaiMembuat();
    }
    
    else if(memulai == "Tidak"){
        cout << "Baik, Terimakasih Karena Telah Menggunakan ^_^" << endl;
        cout << "Salam Hormat, Davis App" << endl;
      }
}