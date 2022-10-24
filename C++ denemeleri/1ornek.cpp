#include <iostream>
using namespace std;
int main()
{
float sayi,
    kontrol;
int toplam=0;

cout << "Bir sayi girin: ";
    cin >> sayi;
cout << "\n" << sayi << "Tam bolenleri;";
for(int i=1;i<=sayi;i++)
{
    kontrol = sayi /i;
    if(kontrol == int(kontrol))
    {
        cout << i << ",";
    }
}
}