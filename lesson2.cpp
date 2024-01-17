//
// Created by burak on 17.01.2024.
//

/*
 * KONULAR:
 * Kullanıcıdan veri alma
 * if, else if, else yapısı
 */

#include <iostream>

int main(){

    // KULLANICIDAN VERİ ALMA

    // Programa dillierinde değişkenlerin değerlerini kullanıcıdan da alabiliriz.
    // Kullanıcıdan aldığımız verilere input (girdi) denir. ve bu yüzden C++ input'un kısaltması olan cin kullanır.
    // C++ da kullanıcıdan veri almak için std::cin >> kullanıyoruz.
    // Örnek:
        // örneğimizde kullanıcının girdiği kelime ve uzunluğunu ekrana yazdıracağız.

        std::string kelime;
        // Kullanıcıdan alacağımız kelimeyi tutmak için kelime adında string bir değişken tanımladık.
        std::cout << "Lütfen bir kelime giriniz: ";
        // Kullanıcıya bir kelime girmesini söyledik. (durumun anlaşılabilir olması için açıklama yaptık)

        std::cin >> kelime;
        // Kullanıcıdan aldığımız kelimeyi std::cin >> fonksiyonu ile okuduk ve metin değişkenine atadık.
        std::cout << "Girdiğiniz kelime: " << kelime << "\n" << "Kelimenin uzunluğu: " << kelime.length() << "\n";
        // Kullanıcıdan aldığımız kelimeyi ve kelimenin uzunluğunu ekrana yazdırdık.

    // örnek2:
        // örneğimizde kullanıcıdan bir sayı girmesini isteyeceğiz ve o sayının karesini ekrana yazdıracağız.
        int sayi;
        // Kullanıcıdan alacağımız sayıyı tutmak için sayi adında integer bir değişken tanımladık.
        std::cout << "Lütfen bir sayı giriniz: ";
        // Kullanıcıya bir sayı girmesini söyledik. (durumun anlaşılabilir olması için açıklama yaptık)
        std::cin >> sayi;
        // Kullanıcıdan aldığımız sayıyı std::cin >> fonksiyonu ile okuduk ve sayi değişkenine atadık.

        std::cout << "Girdiğiniz sayının karesi: " << sayi * sayi << "\n";
        // Kullanıcıdan aldığımız sayının karesini ekrana yazdırdık.

    // İF, ELSE IF, ELSE YAPILARI
    // Programlama dillerinde şartlı durumlar için if, else if, else yapısı kullanılır.
    // if yapısını şu taslak ile kullanacağız:
        // if (şart) {
        //     // şart sağlanırsa burası çalışır.
        // }
    // örnek:
        // örneğimizde kullanıcıdan aldığımız sayının 10'dan büyük mü küçük mü olduğunu ekrana yazdıracağız.
        int sayi2;
        // Kullanıcıdan alacağımız sayıyı tutmak için sayi2 adında integer bir değişken tanımladık.
        std::cout << "Lütfen bir sayı giriniz: ";
        // Kullanıcıya bir sayı girmesini söyledik. (durumun anlaşılabilir olması için açıklama yaptık)
        std::cin >> sayi2;
        // Kullanıcıdan aldığımız sayıyı std::cin >> fonksiyonu ile okuduk ve sayi2 değişkenine atadık.

        if (sayi2 > 10) {
            // sayi2 değişkeninin değeri 10'dan büyükse burası çalışır.
            std::cout << "Girdiğiniz sayı 10'dan büyüktür.\n";
        }

        if (sayi2 < 10) {
            // sayi2 değişkeninin değeri 10'dan küçükse burası çalışır.
            std::cout << "Girdiğiniz sayı 10'dan küçüktür.\n";
        }

        if (sayi2 == 10) {
            // sayi2 değişkeninin değeri 10'a eşitse burası çalışır.
            std::cout << "Girdiğiniz sayı 10'a eşittir.\n";
        }
            // NOT: Eşitlik kontrolü için iki eşittir == kullanılır.
                // Bir eşittir = kullanırsak değer atama işlemi yapmış oluruz.
                //örn: int a = 5; // a değişkenine 5 değerini atadık.
                // İki eşittir == kullanırsak eşitlik kontrolü yapmış oluruz.
                //örn: a == 5 a değişkeninin değeri'nin 5 e eşit olup olmadığını kontrol ettik.

    // ELSE IF, ELSE YAPISI
    // else if yapısı if yapısından sonra kullanılır ve İF YAPISININ ŞARTI SAĞLANMAZSA çalışır.
    // NOT: İF YAPISI SAĞLANIRSA DERLEYİCİ ELSE İF BLOĞUNA BAKMAZ.
    // else if yapısını şu taslak ile kullanacağız:
    // if (şart) {
    //     // şart sağlanırsa burası çalışır.
    // }
    // else if (şart) {
    //     //if şartı sağlanmazsa ve else if şartı sağlanırsa burası çalışır.
    // }



    // else yapısı ise if ve else if şartları sağlanmazsa çalışır.
    // else yapısını şu taslak ile kullanacağız:
    // if (şart) {
    //     // şart sağlanırsa burası çalışır.
    // }
    // else if (şart) {
    //     //if şartı sağlanmazsa ve else if şartı sağlanırsa burası çalışır.
    // }
    // else {
    //     // hiçbir şart sağlanmazsa burası çalışır.
    // }
    // örnek:
        int notu;

        std::cout << "Notunuzu girin: ";
        std::cin >> notu;

        if (notu >= 90) {
            // notu değişkeninin değeri 90'dan büyük veya eşitse burası çalışır.
            std::cout << "Harika! AA aldınız." << "\n";
            std::cout << "\t if bloğu çalıştı." << "\n";  // NOT: \t bir tab (4 boşluk) bırakır.
        }
        else if (notu >= 80) {
            // notu değişkeninin değeri 90'dan büyük veya eşit değilse (yani if'in şartı sağlanmazsa) ve 80'den büyük veya eşitse burası çalışır.
            std::cout << "Tebrikler! BB aldınız." << "\n";
            std::cout << "\t 1. else if bloğu çalıştı." << "\n";
        }
        else if (notu >= 70) {
            // notu değişkeninin değeri 90'dan büyük veya eşit değilse (yani if'in şartı sağlanmazsa)
            // ve 80'den büyük veya eşit değilse (yani 1. else if'in şartı sağlanmazsa)
            // ve 70'den büyük veya eşitse burası çalışır. (bi tık karışık olmuş olabilir aşağıda daha basit bir şekilde yazdım.)
            std::cout << "İyi iş! CC aldınız." << "\n";
            std::cout << "\t 2. else if bloğu çalıştı." << "\n";
        }
        else {
            // hiçbir şart sağlanmazsa burası çalışır.
            std::cout << "Üzgünüz, başarısız oldunuz." << "\n";
            std::cout << "\t if ya da else if blokları çalışmadı o yüzden else bloğu çalıştı." << "\n";
        }

        /*
         * Yukarıdaki örneği bir değer üzerinden açıklamaya çalışalım.
         * notu değişkeninin değeri 95 olsun.
         * derleyici (kodu çalıştıran program)
            *1-) if bloğuna bakar der ki "not 95 ve 95 90'dan büyük veya eşit."
                * İF ÇALIŞTI EKRANA
                *   Harika! AA aldınız.
                        if bloğu çalıştı.
                YAZAR


         * başka bir değer üzerinden de örnek verelim.
         * notu değişkeninin değeri 75 olsun.
         * derleyici(kodu çalıştıran program)
            *1-) Önce if bloğuna bakar der ki "not 75 ve 75 90'dan büyük veya eşit değil."
                * İF ÇALIŞMADI

            *2-) if çalışmadığı için else if bloğuna bakar der ki "not 75 ve 75 80'den büyük veya eşit değil."
                * ELSE IF ÇALIŞMADI

            *3-) 1.else if çalışmadığı için aşağısındaki else if bloğuna bakar der ki "not 75 ve 75 70'den büyük veya eşit."
                * 2.ELSE IF ÇALIŞTI EKRANA
                *   iyi iş! CC aldınız.
                        2. else if bloğu çalıştı.
                YAZAR


         * bir de 50 değeri üzerinden örnek verelim.
         * notu değişkeninin değeri 50 olsun.
         * derleyici
            *1-) Önce if bloğuna bakar der ki "not 50 ve 50 90'dan büyük veya eşit değil."
                * İF ÇALIŞMADI

            *2-) if çalışmadığı için else if bloğuna bakar der ki "not 50 ve 50 80'den büyük veya eşit değil."
                * ELSE IF ÇALIŞMADI

            *3-) 1. else if çalışmadığı için aşağısındaki else if bloğuna bakar der ki "not 50 ve 50 70'den büyük veya eşit değil."
                * 2.ELSE IF ÇALIŞMADI

            *4-) 2. else if çalışmadığı için else bloğuna bakar der ki "hiçbir şart sağlanmıyor."
                * ELSE ÇALIŞTI EKRANA
                *   Üzgünüz, başarısız oldunuz.
                        if ya da else if blokları çalışmadı o yüzden else bloğu çalıştı.
                YAZAR
         */

}
