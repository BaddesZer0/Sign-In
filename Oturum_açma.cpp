#include <iostream>
using namespace std;
int main()
{
	string sys_kullanici_adi = "admin";
	string sys_parola = "123456";

	string kullanici_adi;
	string parola;

	cout << "Lutfen kullanici adini giriniz:";
	cin >> kullanici_adi;

	cout << "Lutfen parolanizi giriniz:";
	cin >> parola;

	if (sys_kullanici_adi != kullanici_adi && sys_parola == parola) {

		cout << "Girilen kullanici adi sistemde kayıtlı değildir";

		return 0;
	}
	else if (sys_kullanici_adi == kullanici_adi && sys_parola != parola) {

		cout << "Hatalı parola girdiniz";

		return 0;
	}
	else if (sys_kullanici_adi != kullanici_adi && sys_parola != parola) {

		cout << "Kullanici adi ve parola hatalı";
	}
	else {

		cout << "Hosgeldiniz";

		return 0;
	}
}