#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
/*
cikarma islemi, toplama islemi ve kare alma islemi yapildi
 program ilk olarak girilen iki sayiyi topluyor ve bu toplamin karesini aliyor
 elde edilen bu kare alma sonucundan ilk girilen sayiyi cikartiyor ve programi sonlandiriyor
 */
class cikarma_islemi {
    public:
        int cikar(int sayi, int sayii) {
            return sayi - sayii;
        }
};

class toplama_islemi {
    public:
        int topla(int sayi1, int sayi2) {
            return sayi1 + sayi2;
        }
};

class kare_alma_islemi {
    public:
        int karesini_al(int sayi) {
            return sayi * sayi;
        }
};

class hesapla: public cikarma_islemi, toplama_islemi, kare_alma_islemi {
    public:
        int sonuc_hesapla(int sayi1, int sayi2) {
            return cikar(karesini_al(topla(sayi1, sayi2)), sayi1);
        }
};

int main(void) {
    setlocale(LC_ALL, "Turkish");
    
    float sayi1, sayi2;
    kare_alma_islemi k;
    toplama_islemi t;
    hesapla h;
     cout << "***"<<endl;
    cout << "         OZEL ISLEM"<<endl;
    cout<<"SAYILARI ONCE TOPLAR SONRA TOPLAMIN KARESINI ALIR VE ILK SAYIYI BUNDAN CIKARTIR"<<endl;
     cout << "***"<<endl;
    cout << "Bir sayi girin"<<endl;
    cin >> sayi1;
    cout << "Bir sayi daha girin"<<endl;
    cin >> sayi2;
    cout << "toplam�n sonucu = ";
    cout<< t.topla(sayi1, sayi2)<<endl;
    cout << "kare alma sonucu = ";
    cout<< k.karesini_al(t.topla(sayi1, sayi2))<<endl;
    cout << sayi1 << " ile " << sayi2 << " sayilardan yapilan  ozel islemin sonucu " << h.sonuc_hesapla(sayi1, sayi2) << " dir." << endl;
}
