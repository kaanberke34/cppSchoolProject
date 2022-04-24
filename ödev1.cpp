#include <iostream>
#include <string>
#include <locale.h>
using namespace std;
int kelime_sayisi(string);
int harf_sayisi(string);
int kelime_bul(string, string);
int harf_say(string, string);
string degistir_harf(string, string, string);

int main(void) {
	setlocale(LC_ALL, "Turkish"); 
	
	string cumle;
	string devam = "E";
	string choice;
	string kelime_sayilsin;
	string harf_sayilsin;
	string bundan_donusecek_harf;
	string buna_donusecek_harf;
	
	do {
	 cout<<"*"<<endl;
 cout<<"* 1-Kac kelime oldugunu ekrana yazdiran, *"<<endl;
 cout<<"* 2-Kac harf oldugunu ekrana yazdiran*"<<endl;
 cout<<"* 3-Disardan girilen kelimeden Kac tane oldugunu ekrana yazdiran *"<<endl;
 cout<<"* 4-Disardan girilen harften Kac tane oldugunu ekrana yazdiran*"<<endl;
 cout<<"* 5-cumledeki bir harfi Disardan girilen harfle degistirerek cumlenin son halini ekrana yazdiran*"<<endl;
 cout<<"* 6-Exit*"<<endl;
 cout<<"*"<<endl<<endl;
 cout<<"Bir secenek secin lutfen: ";
		getline(cin, choice);
		
		if (choice == "1"){
			cout << "Bir cumle giriniz: ";
		getline(cin, cumle);
			cout << "Girilen cumle " << kelime_sayisi(cumle) << " adet kelimeden olu�maktad�r."<< endl;
        }
		else if (choice == "2"){
			cout << "Bir cumle giriniz: ";
		getline(cin, cumle);
			cout << "Girilen cumle " << harf_sayisi(cumle) << " adet harften olu�maktad�r."<< endl;
		}
		else if (choice == "3"){
			cout << "Bir cumle giriniz: ";
		getline(cin, cumle);
			cout << "Saymak istediginiz kelimeyi giriniz: ";
			getline(cin, kelime_sayilsin);
			cout << "Girilen cumle icerisinde \"" << kelime_sayilsin << "\" kelimesi " << kelime_bul(cumle, kelime_sayilsin) << " kez tekrar ediyor." << endl;
		}
		else if (choice == "4"){
			cout << "Bir cumle giriniz: ";
		getline(cin, cumle);
			cout << "Saymak istediginiz harfi giriniz: ";
			getline(cin, harf_sayilsin);
			cout << "Girilen cumle icerisinde \"" << harf_sayilsin << "\" harfi " << harf_say(cumle, harf_sayilsin) << " kez tekrar ediyor." << endl;
		}
		else if (choice == "5"){
			cout << "Bir cumle giriniz: ";
		getline(cin, cumle);
			cout << "De�i�tirmek istediginiz harfi giriniz: ";
			getline(cin, bundan_donusecek_harf);
			cout << "Hangi harfe degisecegini giriniz: ";
			getline(cin, buna_donusecek_harf);
			cout << "Girilen cumle icerisindeki tum " << bundan_donusecek_harf << " harfleri " << buna_donusecek_harf << " harflerine donusturuldu.\n\nSonuc:\n";
			cout << degistir_harf(cumle, bundan_donusecek_harf, buna_donusecek_harf) << endl;
		}
		else if (choice == "6"){
		exit(1);
		}
		else{
		 	cout<<"Lutfen,.. Biraz daha dikkat!!!\nMumkunse secenekteki numaralardan birisini giriniz...\n\n";
			continue;
		}
		
		cout << "Devam etmek istiyor musunuz (E/H): ";
	getline(cin, devam);
	}
	while (devam == "E" || devam == "e");
	
	return 0;
}

int kelime_sayisi(string cumle) {
	int count = 0;
	for(int i = 0; i < cumle.length(); i++) 
		if(cumle[i] == ' ')
			count++;
	return count+1;
}

int harf_sayisi(string cumle) {
	int count = 0;
	for(int i = 0; i < cumle.length(); i++)
		if(cumle[i] != ' ')
			count++;
	return count;
}

int kelime_bul(string cumle, string girilen_kelime) {
	int girilen_kelime_uzunluk = girilen_kelime.length(), count = 0;
	for(int i = 0; i < cumle.length(); i++)
		if(cumle.substr(i, girilen_kelime_uzunluk) == girilen_kelime)
			count++;
	return count;
}

int harf_say(string cumle, string girilen_harf) {
	int count = 0;
	for(int i = 0; i < cumle.length(); i++)
		if(cumle[i] == girilen_harf[0])
			count++;
	return count;
}

string degistir_harf(string cumle, string bundan, string buna) {
	for (int i = 0; i < cumle.length(); i++)
		if(cumle[i] == bundan[0])
			cumle[i] = buna[0];
	return cumle;
}
