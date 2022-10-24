#include <iostream>
using namespace std;
int main(){
	int sayi,kontrol;
	kontrol = 0;
	cout << "Bir Sayi Girin: ";
		cin >> sayi;
	
	for(int i=2; i<sayi; i++) {
		if( (sayi%i) == 0 ){
			kontrol++;
		}
	}
	
	if( (kontrol==0) && (sayi>1) ) {
		cout << " --> " << sayi << " asal sayidir";
	} else {
		cout << " --> " << sayi << " asal sayi degildir";
	}
	cout << "\n\n";
	return main();
	
}