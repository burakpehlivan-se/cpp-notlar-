//
// Created by burak on 19.01.2024.
//

/*
 * FONKSÝYON OLUÞTURMA
 */
#include <iostream>
using namespace std;

// Fonksiyonlar programlama dillerinde tekrar tekrar kullanýlabilen kod bloklarýdýr.
// Fonksiyon oluþturmadaki asýl amaç kod tekrarýný önlemektir.
// Kod tekrarý olmamasý hem zamandan hem de kullanýlacak bellekten tasarruf etmemizi saðlar.

// Fonksiyon tanýmlama
// Fonksiyon tanýmlamak için þu taslaðý kullanacaðýz:
// dönüþ_deðeri_tipi fonksiyon_adý(parametre1, parametre2, ...){
//     // fonksiyonun yapacaðý iþlemler
//     return dönüþ_deðeri;
// }

// dönüþ_deðeri_tipi: fonksiyonun çalýþtýrýlmasý sonucunda döndüreceði deðerin tipini belirtir.
// Örneðin toplama fonksiyonu yazacaðýz ve bu fonksiyonun dönüþ deðeri tipi integer olacak.

// fonksiyon_adý: fonksiyonun adýný belirtir. Fonksiyon adý yazýlýrken deðiþken adý yazýlýrken kullanýlan kurallar geçerlidir.

// parametre1, parametre2, ...: fonksiyonun içinde kullanacaðýmýz deðiþkenlerdir. Fonksiyonun içinde kullanacaðýmýz deðiþkenlerin deðerlerini fonksiyonu çaðýrýrken belirleriz.
// Örneðin toplama fonksiyonu yazacaðýz ve bu fonksiyonun içinde kullanacaðýmýz 2 tane integer deðiþken olacak.

// return dönüþ_deðeri: fonksiyonun çalýþmasý sonucunda döndüreceði deðeri belirtir.
// Örneðin toplama fonksiyonu yazacaðýz bu fonksiyonun dönüþ deðeri toplama iþleminin sonucu olacak.

// Örnek1;
// Girilen 2 deðerin toplamýný döndüren fonksiyon
int topla(int number1, int number2){
    int toplam = number1 + number2;
    // toplama fonksiyonunu çaðýrdýðýmýzda ekrana yazdýrmak için fonksiyon içine þu kodu yazabiliriz:
    // cout << toplam << "\n";
    return toplam;
}
// ilk olarak topla fonksiyonunu tanýmlayacaðýz fonksiyonun çýktýsýnýn ne olacaðýný belirledik iki sayýyý topladýðýmýzda integer bir deðer elde ederiz.
// o yüzden fonksiyonun dönüþ deðeri tipini integer olarak belirledik.
// Fonksiyonun adýný topla olarak belirledik.
// Fonksiyonun içinde kullanacaðýmýz parametrelerin adlarýný sayi1 ve sayi2 olarak belirledik.
// Fonksiyonun sonuç iþlemini (number1 ve number2 yi toplamayý) toplam adýnda bir deðiþkene atadýk.
// Fonksiyonun sonucunu return toplam; ile döndürdük. Return ifadesi ile bu fonksiyonun sonucunu döndürmüþ olduk.





// Taban ve üs deðerlerini alýp tabanýn üssünü hesaplayan fonksiyon.
int kuvvetHesapla(int taban, int us) {
    int sonuc = 1.0;

    // Üs deðeri 0 olana kadar çarpma iþlemi yapma
    while (us > 0) {
        sonuc = sonuc * taban;
        us--;
    }
    /*
     * taban = 2, us = 3
     * sonuc = 1
     * sonuc = 2 üs = 2
     * sonuc = 4 üs = 1
     * sonuc = 8 üs = 0
     */
    return sonuc;
}
// taban deðerine dönüþ deðeri tipini integer olarak belirledik.
// Bu fonksiyonda taban ve us adýnda iki parametre tanýmladýk.
// Kuvvet hesaplama iþleminin sonucunu tutacak olan sonuc adýnda bir deðiþken atadýk.
// while döngüsü ile us deðeri 0 olana kadar taban deðiþkenini sonuc deðiþkeni ile çarptýk.
// while döngüsü bittiðinde sonuc deðiþkeni tabanýn üssü olmuþ olacak.
// sonuc deðiþkenini return sonuc; ile döndürdük.
// Kodun döngü ile olan mantýðýný anlamak için yukarýdaki yorum satýrlarýna bakabilirsiniz. Kendiniz de farklý deðerler verip deneyebilirsiniz.





string bigFinder(int sayi1, int sayi2, int sayi3){
    int bigNumber;
    if (sayi1 > sayi2 && sayi1 > sayi3){
        bigNumber = sayi1;
    }

    else if (sayi2 > sayi1 && sayi2 > sayi3){
        bigNumber = sayi2;
    }

    else if (sayi3 > sayi1 && sayi3 > sayi2){
        bigNumber = sayi3;
    }

    return ("en büyük sayý: " + to_string(bigNumber));
    // to_string fonksiyonu ile integer deðerleri string deðerlere çevirebiliriz.
}

int main() {

topla(3,2);
// çkt:
// örneðin main fonksiyonu içinde topla fonksiyonunu çaðýrdýk ardýndan 3 ve 2 deðerleri girdik.
// Topla fonksiyonu çalýþtý, 3 ve 2 deðerlerini topladý ve sonucu return toplam; ile döndürdü.
// Fonksiyon sonucunun 5 olduðunu hafýzasýnda tuttu ama biz ekrana yazdýrmasý ile ilgili bir komut vermedik.

cout << topla(3,2) << "\n";
// çkt:5
// Bu kod çalýþtýðýnda ekrana 5 yazdýracak. Çünkü topla fonksiyonu 3 ve 2 deðerlerini topladý sonucu return toplam; ile döndürdü.
// ve mainde biz o dönen sonucu ekrana yazýdrmasý için cout << topla(3,2) << "\n"; kodunu yazdýk.


cout << kuvvetHesapla(5,4) << "\n";
// çkt: 625

int number1,number2;
cout << "Lütfen taban giriniz: ";
cin >> number1;

cout << "Lütfen üs giriniz: ";
cin >> number2;

cout << "kuvvet hesaplandý: " <<  kuvvetHesapla(number1,number2) << "\n";



cout << bigFinder(5,4,3) << "\n";
// çkt: en büyük sayý: 5

cout << "-----------------------\n";


// iç içe fonksiyonlar (nested functions)
cout << topla(kuvvetHesapla(2,3), kuvvetHesapla(5,2));
// çkt: 33
// topla(8,25) = 33
// Bir fonksiyonun çýktýsýný baþka bir fonksiyonun parametrelerine atayabiliriz.


    return 0;
}