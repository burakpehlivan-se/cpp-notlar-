//
// Created by burak on 19.01.2024.
//

/*
 * FOR DÖNGÜSÜ
 */
#include <iostream>
using namespace std;


int main() {

// For döngüsü de while döngüsü gibi bir döngü yapýsýdýr.
// for döngüsünde koþul ile birlikte baþlangýç deðeri ve artýþ miktarý da belirtilir.
// For döngüsü þu taslak ile kullanýlýr:
/*
for (baþlangýç deðeri; koþul; artýþ miktarý) {
     // koþul saðlandýðýnda döngü boyunca çalýþacak kodlar
 }
 */

// Örnek1:
// 1'den 15'e kadar olan sayýlarý ekrana yazdýralým.
   int number = 15;

   for (int i = 0; i < number; i++) {
       cout << i << ", ";
   }
    cout << "\n----------------\n";

   // kullanýcýdan sayý girmesi istenecek kullanýcýnýn girdiði sayýya kadar olan çift sayýlarý ekrana yazdýracaðýz
    // örnek: kullanýcý 10 girdiðinde ekrana 0 2 4 6 8 yazacak
    int number1;

    cout << "bir sayý giriniz";
    cin >> number1;
    for (int i = 0; i < number1; i+=2) {
        cout << i << " ";
    }
    // kullanýcý 10 sayýsýný girsin
    // i = 0 => 0 < 10 => 0 yazdýr i yi 2 arttýr
    // i = 2 => 2 < 10 => 2 yazdýr i yi 2 arttýr
    // i = 4 => 4 < 10 => 4 yazdýr i yi 2 arttýr
    // i = 6 => 6 < 10 => 6 yazdýr i yi 2 arttýr
    // i = 8 => 8 < 10 => 8 yazdýr i yi 2 arttýr
    // i = 10 => 10 < 10 => 10 YAZDIRMAZ DÖNGÜDEN ÇIKAR


// Örnek2:
// girilen sayýdan 0 a kadar olan tek sayýlarý ekrana "1. tek sayý bu 2. tek sayý bu þeklinde yazacak for döngüsü"
    int number2;
    cout << "bir sayý giriniz";
    cin >> number2;
    int j = 1;
    for (int i = 1 ; i < number2; i+=2) {
    cout << "0 dan " << number2 << "'e kadar olan " << j << ". tek sayý " << i << "\n";
    j++;
    }
// number2 adýnda bir deðiþken tanýmladýk ve kullanýcýdan bir sayý girmesini istedik.
// j adýnda bir deðiþken tanýmladýk ve deðerini 1 olarak atadýk. bu deðiþkeni tek sayýlarý saymak için (1.sayý, 2.sayý...) kullanacaðýz.
// for döngüsünün içinde i deðiþkenini 0 olarak tanýmladýk ve i deðiþkeninin deðeri number2 deðiþkeninin deðerine eþit olana dek döngüyü çalýþtýrdýk.
// döngü her çalýþtýðýnda i deðiþkeninin deðerini 2 arttýrdýk. (i+=2)
// döngü her çalýþtýðýnda j deðiþkeninin deðerini 1 arttýrdýk. (j++)
// kullanýcý 10 sayýsýný girdiðinde döngü þu þekilde çalýþýr:
// i = 1 => 1 < 10 => 1 yazdýr. j = 1 => 1. tek sayý yazdýrýr. j yi 1 arttýrýr i yi 2 arttýr.
// i = 3 => 3 < 10 => 3 yazdýr. j = 2 => 2. tek sayý yazdýrýr. j yi 1 arttýrýr i yi 2 arttýr.
// i = 5 => 5 < 10 => 5 yazdýr. j = 3 => 3. tek sayý yazdýrýr. j yi 1 arttýrýr i yi 2 arttýr.
// i = 7 => 7 < 10 => 7 yazdýr. j = 4 => 4. tek sayý yazdýrýr. j yi 1 arttýrýr i yi 2 arttýr.
// i = 9 => 9 < 10 => 9 yazdýr. j = 5 => 5. tek sayý yazdýrýr. j yi 1 arttýrýr i yi 2 arttýr.
// i = 11 => 11 < 10 => 11 YAZMAZ DÖNGÜDEN ÇIKAR.



// Örnek3:
// Kullanýcýdan alýnan sayýya kadar olan sayýlarýn toplamýný ekrana yazdýralým.
    int number3;
    int total = 0;
    cout << "bir sayý giriniz";
    cin >> number3;
    for (int i = 0; i <= number3; i++) {
        total = total + i;
    }
    cout << "toplam: " << total << "\n";

// Bu örnekte düþündüðümüzde hafýzada tutacaðýmýz iki farklý veri var
// bunlar kullanýcýnýn girdiði sayý (number3) ve sayýlarýn toplam deðeri (total).

// for döngüsünün içinde i deðiþkenini 0 olarak tanýmladýk ve i deðiþkeninin deðeri number3 deðiþkeninin deðerine eþit olana dek döngüyü çalýþtýrdýk.
// döngü her çalýþtýðýnda total deðiþkeninin deðerini i deðiþkeninin deðeri ile topladýk.
// kullanýcý 5 sayýsýný girdiðinde döngü þu þekilde çalýþýr:
// i = 0 => 0 <= 5 => total = 0 + 0 = 0, total = 0 , i++
// i = 1 => 1 <= 5 => total = 0 + 1 = 1, total = 1 , i++
// i = 2 => 2 <= 5 => total = 1 + 2 = 3, total = 3 , i++
// i = 3 => 3 <= 5 => total = 3 + 3 = 6, total = 6 , i++
// i = 4 => 4 <= 5 => total = 6 + 4 = 10, total = 10 , i++
// i = 5 => 5 <= 5 => total = 10 + 5 = 15, total = 15 , i++
// i = 6 => 6 <= 5 => 6 <= 5 saðlanmadýðý için döngüden çýkar.
// çkt: toplam: 15



// Örnek4:
// Kullanýcýdan alýnan sayýnýn faktöriyelini ekrana yazdýralým.
    int number4;
    int total2 = 1;
    cout << "bir sayý giriniz";
    cin >> number4;
    for (int i = 1; i <= number4; i++) {
        total2 = total2 * i;
    }
    cout << "toplam: " << total2 << "\n";

// Bu örnekte düþündüðümüzde hafýzada tutacaðýmýz iki farklý veri var
// bunlar kullanýcýnýn girdiði sayý (number4) ve sayýlarýn çarpým deðeri (total2).

// for döngüsünün içinde i deðiþkenini 1 olarak tanýmladýk ve i deðiþkeninin deðeri number4 deðiþkeninin deðerine eþit olana dek döngüyü çalýþtýrdýk.
// döngü her çalýþtýðýnda total2 deðiþkeninin deðerini i deðiþkeninin deðeri ile çarptýk.
// kullanýcý 5 sayýsýný girdiðinde döngü þu þekilde çalýþýr:
// i = 1 => 1 <= 5 => total2 = 1 * 1 = 1, total2 = 1 , i++
// i = 2 => 2 <= 5 => total2 = 1 * 2 = 2, total2 = 2 , i++
// i = 3 => 3 <= 5 => total2 = 2 * 3 = 6, total2 = 6 , i++
// i = 4 => 4 <= 5 => total2 = 6 * 4 = 24, total2 = 24 , i++
// i = 5 => 5 <= 5 => total2 = 24 * 5 = 120, total2 = 120 , i++
// i = 6 => 6 <= 5 => 6 <= 5 saðlanmadýðý için döngüden çýkar.

return 0;

}