//
// Created by burak on 19.01.2024.
//

/*
 * FOR DÖNGÜSÜ
 */
#include <iostream>
using namespace std;


int main() {

// For döngüsü de while döngüsü gibi bir döngü yapısıdır.
// for döngüsünde koşul ile birlikte başlangıç değeri ve artış miktarı da belirtilir.
// For döngüsü şu taslak ile kullanılır:
/*
for (başlangıç değeri; koşul; artış miktarı) {
     // koşul sağlandığında döngü boyunca çalışacak kodlar
 }
*/

// Örnek1:
// 1'den 15'e kadar olan sayıları ekrana yazdıralım.
   int number = 15;

   for (int i = 0; i < number; i++) {
       cout << i << ", ";
   }
    cout << "\n----------------\n";

   // kullanıcıdan sayı girmesi istenecek kullanıcının girdiği sayıya kadar olan çift sayıları ekrana yazdıracağız
    // örnek: kullanıcı 10 girdiğinde ekrana 0 2 4 6 8 yazacak
    int number1;

    cout << "bir sayı giriniz";
    cin >> number1;
    for (int i = 0; i < number1; i+=2) {
        cout << i << " ";
    }
    // kullanıcı 10 sayısını girsin
    // i = 0 => 0 < 10 => 0 yazdır i yi 2 arttır
    // i = 2 => 2 < 10 => 2 yazdır i yi 2 arttır
    // i = 4 => 4 < 10 => 4 yazdır i yi 2 arttır
    // i = 6 => 6 < 10 => 6 yazdır i yi 2 arttır
    // i = 8 => 8 < 10 => 8 yazdır i yi 2 arttır
    // i = 10 => 10 < 10 => 10 YAZDIRMAZ DÖNGÜDEN ÇIKAR


// Örnek2:
// girilen sayıdan 0 a kadar olan tek sayıları ekrana "1. tek sayı bu 2. tek sayı bu şeklinde yazacak for döngüsü"
    int number2;
    cout << "bir sayı giriniz";
    cin >> number2;
    int j = 1;
    for (int i = 1 ; i < number2; i+=2) {
    cout << "0 dan " << number2 << "'e kadar olan " << j << ". tek sayı " << i << "\n";
    j++;
    }
// number2 adında bir değişken tanımladık ve kullanıcıdan bir sayı girmesini istedik.
// j adında bir değişken tanımladık ve değerini 1 olarak atadık. bu değişkeni tek sayıları saymak için (1.sayı, 2.sayı...) kullanacağız.
// for döngüsünün içinde i değişkenini 0 olarak tanımladık ve i değişkeninin değeri number2 değişkeninin değerine eşit olana dek döngüyü çalıştırdık.
// döngü her çalıştığında i değişkeninin değerini 2 arttırdık. (i+=2)
// döngü her çalıştığında j değişkeninin değerini 1 arttırdık. (j++)
// kullanıcı 10 sayısını girdiğinde döngü şu şekilde çalışır:
// i = 1 => 1 < 10 => 1 yazdır. j = 1 => 1. tek sayı yazdırır. j yi 1 arttırır i yi 2 arttır.
// i = 3 => 3 < 10 => 3 yazdır. j = 2 => 2. tek sayı yazdırır. j yi 1 arttırır i yi 2 arttır.
// i = 5 => 5 < 10 => 5 yazdır. j = 3 => 3. tek sayı yazdırır. j yi 1 arttırır i yi 2 arttır.
// i = 7 => 7 < 10 => 7 yazdır. j = 4 => 4. tek sayı yazdırır. j yi 1 arttırır i yi 2 arttır.
// i = 9 => 9 < 10 => 9 yazdır. j = 5 => 5. tek sayı yazdırır. j yi 1 arttırır i yi 2 arttır.
// i = 11 => 11 < 10 => 11 YAZMAZ DÖNGÜDEN ÇIKAR.



// Örnek3:
// Kullanıcıdan alınan sayıya kadar olan sayıların toplamını ekrana yazdıralım.
    int number3;
    int total = 0;
    cout << "bir sayı giriniz";
    cin >> number3;
    for (int i = 0; i <= number3; i++) {
        total = total + i;
    }
    cout << "toplam: " << total << "\n";

// Bu örnekte düşündüğümüzde hafızada tutacağımız iki farklı veri var
// bunlar kullanıcının girdiği sayı (number3) ve sayıların toplam değeri (total).

// for döngüsünün içinde i değişkenini 0 olarak tanımladık ve i değişkeninin değeri number3 değişkeninin değerine eşit olana dek döngüyü çalıştırdık.
// döngü her çalıştığında total değişkeninin değerini i değişkeninin değeri ile topladık.
// kullanıcı 5 sayısını girdiğinde döngü şu şekilde çalışır:
// i = 0 => 0 <= 5 => total = 0 + 0 = 0, total = 0 , i++
// i = 1 => 1 <= 5 => total = 0 + 1 = 1, total = 1 , i++
// i = 2 => 2 <= 5 => total = 1 + 2 = 3, total = 3 , i++
// i = 3 => 3 <= 5 => total = 3 + 3 = 6, total = 6 , i++
// i = 4 => 4 <= 5 => total = 6 + 4 = 10, total = 10 , i++
// i = 5 => 5 <= 5 => total = 10 + 5 = 15, total = 15 , i++
// i = 6 => 6 <= 5 => 6 <= 5 sağlanmadığı için döngüden çıkar.
// çkt: toplam: 15



// Örnek4:
// Kullanıcıdan alınan sayının faktöriyelini ekrana yazdıralım.
    int number4;
    int total2 = 1;
    cout << "bir sayı giriniz";
    cin >> number4;
    for (int i = 1; i <= number4; i++) {
        total2 = total2 * i;
    }
    cout << "toplam: " << total2 << "\n";

// Bu örnekte düşündüğümüzde hafızada tutacağımız iki farklı veri var
// bunlar kullanıcının girdiği sayı (number4) ve sayıların çarpım değeri (total2).

// for döngüsünün içinde i değişkenini 1 olarak tanımladık ve i değişkeninin değeri number4 değişkeninin değerine eşit olana dek döngüyü çalıştırdık.
// döngü her çalıştığında total2 değişkeninin değerini i değişkeninin değeri ile çarptık.
// kullanıcı 5 sayısını girdiğinde döngü şu şekilde çalışır:
// i = 1 => 1 <= 5 => total2 = 1 * 1 = 1, total2 = 1 , i++
// i = 2 => 2 <= 5 => total2 = 1 * 2 = 2, total2 = 2 , i++
// i = 3 => 3 <= 5 => total2 = 2 * 3 = 6, total2 = 6 , i++
// i = 4 => 4 <= 5 => total2 = 6 * 4 = 24, total2 = 24 , i++
// i = 5 => 5 <= 5 => total2 = 24 * 5 = 120, total2 = 120 , i++
// i = 6 => 6 <= 5 => 6 <= 5 sağlanmadığı için döngüden çıkar.

return 0;

}
