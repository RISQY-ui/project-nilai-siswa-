#include <iostream>
#include <vector>
using namespace std;

void tampilkanNilai(vector<int>nilai){
     cout << "\nDaftar Nilai\n";
     for(int i = 0; i < nilai.size(); i++){
     cout << "nilai ke-" << i+1 << ":" << nilai[i] << endl;
    }
}
int tampilkanTotal(vector<int>nilai){
       int total = 0;
      for(int i = 0; i < nilai.size(); i++){
       total += nilai[i];
    }
 return total;
}
int tampilkanTinggi(vector<int>nilai){
      int max = nilai[0];
    for(int i = 1; i < nilai.size(); i++){
       if(nilai[i] > max){
        max = nilai[i];
   }
}
return max;
}
int tampilkanRendah(vector<int>nilai){
      int min = nilai[0];
    for(int i = 1; i < nilai.size(); i++){
       if(nilai[i] < min){
        min = nilai[i];
   }
}
return min;
}
int main(){
  string nama;
  int jumlah;
  vector<int>nilai;
      
        cout << "===nilai sekolah===\n\n";
         cout<< "masukan nama anda :";
        cin >> nama;

          cout<< "jumlah nilai : ";
           cin >> jumlah;
  
    for(int i = 0; i < jumlah; i++){
    int n;
     
      cout << "nilai ke-" << i + 1 << ":";
     cin >> n;
    
     nilai.push_back(n);
    }
       tampilkanNilai(nilai);

int total = tampilkanTotal(nilai);

  double rata = (double)total / nilai.size();
  cout << "\n======================\n" << endl;
  cout << "Nama  : " << nama << endl;
  cout << "Total      : "<< total << endl;
  cout <<"Rata-rata    :  "<< rata << endl;
  cout << "Nilai tinggi   : "<< tampilkanTinggi(nilai) << endl;
  cout <<"Nilai rendah   : " << tampilkanRendah(nilai) << endl;
  
 return 0;
}
