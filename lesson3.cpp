//
// Created by burak on 18.01.2024.
//


/*
 * while döngüsü
 */

#include <iostream>

using namespace std;


 int main(){

     // WHILE DÖNGÜSÜ

     // While öngüsü eðer while ýn içindeki þart saðlanýyorsa ÞART SAÐLANMAYANA DEK çalýþýr.
        // while döngüsünü þu taslak ile kullanacaðýz:
            // while (þart) {
            //     // þart saðlanýyorsa burasý ÞART SAÐLANMAYANA DEK çalýþacak olan kodlar.
            // }

     // Örnek1:
     //int anahtar = 1;

     // while (anahtar == 1){
     //     cout << "anahtar 1'e eþittir\n";
     //    }

     /*
      * Bu örnekte anahtar diye integer bir deðiþken tanýmladýk ve deðerini 1 olarak atadýk.
      * while döngüsünün içinde anahtar deðiþkeninin deðerini kontrol ettik.
      * anahtar deðiþkeninin deðeri 1 olduðu sürece while döngüsü çalýþýr.
      * Kodumuzun içinde anahtar deðiþkenini deðiþtirecek bir yapý (örn: anahtar++, anahtar = 0, anahtar = 5 gibi ) olmadýðýndan
      * while döngüsü sonsuz döngüye girer (endless loop) ve bu programýmýzda istemediðimiz bir þeydir.
      */

     // Yukarýdaki örnekte sonsuz döngüyü engellemek için anahtar deðiþkeninin deðerini while döngüsünün içinde deðiþtirmemiz gerekiyor.
     int anahtar = 1;
     while (anahtar == 1){
         cout << "anahtar 1'e eþittir\n";
         anahtar = 0;
     }
     // çkt: anahtar 1'e eþittir
     // Bu kod çalýþýrken kodumuzu çalýþtýran program (IDE) þöyle bir okuma yapar:
        // 1-) anahtar adýnda integer bir deðiþken tanýmla ve deðerini 1 olarak ata.
        // 2-) Bir while döngüsü var ve çalýþma koþulu "anahtar deðiþkeninin deðerini 1'e eþit mi diye kontrol et".
        // 3-) anahtar deðiþkeninin deðeri 1'e eþitse while döngüsünün içindeki kodlarý çalýþtýr.
        // 4-) while döngüsünün içindeki kod anahtar deðiþkeninin 1'e eþit olduðunu ekrana yazdýr.
        // diðer kod ise anahtar deðiþkeninin deðerini 0 olarak deðiþtir.
        // 5-) Döngü içindeki kodlar bittiði için while döngüsünün baþýna dön ve anahtar deðiþkeninin deðerini 1'e eþit mi diye kontrol et.
        // 6-) anahtar deðiþkeninin deðeri 1'e eþit deðil çünkü döngü içerisinde 0 olarak deðiþtirdik.
        // 7-) while döngüsünün içindeki kodlarý çalýþtýrma ve döngüden çýk.


     // Örnek2:
     // 1'den 5'e kadar olan sayýlarý ekrana yazdýralým.
     int sayi = 1;
     while (sayi <= 5){
         cout << sayi << " ";
         sayi++;
     }
     // çkt: 1 2 3 4 5 6 7 8 9 10
     // Bu kod çalýþýrken kodumuzu çalýþtýran program (IDE) þöyle bir okuma yapar:
         // 1-) sayi adýnda integer bir deðiþken tanýmla ve deðerini 1 olarak ata.
         // 2-) Bir while döngüsü var ve çalýþma koþulu "sayi deðiþkeninin deðeri 10'a eþit veya 10'dan küçük mü diye kontrol et".
         // 3-) sayi deðiþkeninin deðeri 10'a eþit veya 10'dan küçük olduðu sürece while döngüsünün içindeki kodlarý çalýþýr.
         // 4-) while döngüsünün içindeki kod (cout) sayi deðiþkeninin deðerini ekrana yazdýr.
         // 5-) sayi++ sayi deðiþkeninin deðerini 1 arttýr. (sayi deðiþkeni 2 oldu)
         // 6-) Döngü içindeki kodlar bittiði için while döngüsünün baþýna dön ve sayi deðiþkeninin deðerini 10'a eþit veya 10'dan küçük mü diye kontrol et.
         // 7-) sayi deðiþkeninin deðeri 2 olduðu için while döngüsünün içindeki kodlarý çalýþtýr.
         // 8-) 4, 5, 6. adýmlarý tekrarla. (sayi deðiþkeni 2 idi 1 arttý 3 oldu)
         // 9-) sayi deðiþkeninin deðeri 3 olduðu için while döngüsünün içindeki kodlarý çalýþtýr.
         // 10-) 4, 5, 6. adýmlarý tekrarla. (sayi deðiþkeni 3 idi 1 arttý 4 oldu)
         // 11-) sayi deðiþkeninin deðeri 4 olduðu için while döngüsünün içindeki kodlarý çalýþtýr.
         // 12-) 4, 5, 6. adýmlarý tekrarla. (sayi deðiþkeni 4 idi 1 arttý 5 oldu)
         // 13-) sayi deðiþkeninin deðeri 5 olduðu için (while (sayi<=5 dediðimiz için 5 de dahil)) while döngüsünün içindeki kodlarý çalýþtýr.
         // 14-) 4, 5, 6. adýmlarý tekrarla. (sayi deðiþkeni 5 idi 1 arttý 6 oldu)
         // 15-) sayi deðiþkeninin deðeri 6 olduðu için while döngüsünün þartýný (5 den küçük eþit olma) saðlamýyor ve while döngümüz çalýþmayacaktýr.
    cout << "\n------------------------------------\n";

     // Örnek3:
     // Kullanýcýnýn girdiði 6 tane sayýnýn tek mi çift mi olduðunu hesaplayan program
         int sayinumara = 1; // sayinumara deðiþkeni bu kodda bizim sýnýrlayýcýmýz olacak.
         while (sayinumara <= 6) {
             int sayi2;
             cout << "Hesaplamak istediðiniz " << sayinumara << ". sayýyý giriniz: ";
             cin >> sayi2;
             if(sayi2%2 == 0){
                 cout << "Giriðiniz " << sayinumara << ". sayý:" << sayi2 << "çifttir\n";
             }

             else if (sayi2%2 == 1){
                 cout << "Giriðiniz " << sayinumara << ". sayý: " << sayi2 << " tektir\n";
             }
             sayinumara++;

         }

    // Örnek4:
    // Kullanýcý ilk olarak bir þifre belirleyecek.
    // þifrenin uzunluðu 5 karakterden fazla olmak zorunda yoksa kullanýcýya tekrar þifre sorulmalý.

    // sonra kullanýcýdan hesabýna giriþ yapmasý istenecek eðer þifre yanlýþ ise tekrar sorulacak
    // eðer þifre doðru ise ekrana "tebrikler doðru giriþ yaptýnýz yazacak"

    // Kullanýcý kaydý;
    string sifre;

    // Kullanýcýdan þifreyi al
    cout << "Þifre belirleyiniz (5 karakterden uzun olmalý): ";
    cin >> sifre;
    cout << "\n";

    // Þifre uzunluðunu kontrol et
        while (sifre.length() <= 5) {
            cout << "Þifreniz 5 karakterden uzun olmalý. Tekrar belirleyiniz: ";
            cin >> sifre;
            cout << "\n";
        }
        // length() fonksiyonu string veri tipindeki deðiþkenlerin uzunluðunu verir.

    // Þifre tanýmlandý
        cout << "Þifre " << sifre << " olarak tanýmlandý ve kaydedildi." <<"\n";

    // giriþ yapmak;
       string giris_sifre;
       cout << "Þifrenizi giriniz: ";
       cin >> giris_sifre;

    // Þifre doðru olana dek tekrar sor
       while (giris_sifre != sifre) {
           cout << "Þifreniz yanlýþ. Tekrar deneyiniz: ";
           cin >> giris_sifre;
       }
    // Kullanýcýnýn giriði þifre ile belirlediði þifre ayný olmadýðý sürece while döngüsü çalýþmaya devam eder.
    // Kullanýcý önce belirlediði þifreyle ayný þifreyi girdiðinde while döngüsünün koþulu saðlanmaz ve döngüden çýkýlýr.

    // Þifre doðru ise tebrik et
       cout << "Tebrikler doðru giriþ yaptýnýz." << "\n";


       return 0;
 }