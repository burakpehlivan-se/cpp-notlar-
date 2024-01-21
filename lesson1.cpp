#include <iostream>
/*
Kodumuzun düzgün çalışabilmesi için koda kütüphaneler eklememiz gerekmekte iostream kütüphanesi de
temel işlevler için kullanacağımız kütüphane.
*/

int main() {
    // İLK KODUMUZU YAZALIM
    std::cout << "Hello, World!\n";
    //std::cout << "Hello, World!\n"; kodu ekrana Hello, World! yazdırmak için kullanılan kod.

    std::cout << 3 + 2 << "\n"; //çkt: 5, 3 ve 2 sayılarının toplamını ekrana yazdırdık.



    /*
    * NOT1: \n ifadesi bir alt satıra geçmek için kullanılan bir ifadedir.
    * yukarıdaki örnekte ekrana Hello, World! yazdırdıktan sonra bir alt satıra geçmek için kullandık.
    */

    // NOT2: ; (noktalı virgül) her c++ kod satırının sonunda bulunması gereken bir ifadedir.


    // DEĞİŞKEN TİPLERİ VE DEĞİŞKEN TANIMLAMA

    // Değişkenler programlama dillerinde veri tutmak için kullanılan yapılardır.

    // Değişken adı belirlerken değişkenin değerle olan bağlantısını göz önünde bulundurmalıyız.
    // a,b,x,y gibi değişken isimleri yerine sayi1, fark, isim1 gibi değişken isimleri kullanmak daha okunaklı kod yazmamıza yardımcı olacaktır.
    // (bu derste çok değişken kullanacağımız için değişken isimlerini kısa tutacağız.)

    // NOT3: Değişken isimleri rakam ile başlayamaz, boşluk içeremez ve özel karakterler içeremez.
    // (Türkçe karakterler kullanmayın sıkıntı çıkartabiliyor.)

    // NOT4: Değişken isimleri büyük küçük harf duyarlıdır. Örnek: a ve A iki farklı değişkendir.

    // C++ dilinde değişken tanımlamak için önce veri tipini sonra değişkenin ismini yazıyoruz.
    // Örnek: int a; integer (tam sayı) veri tipindeki a değişkenini tanımladık.

    /*
     * VERİ TİPLERİ
     * int (integer - tam sayı) veri tipi (Örnek: 1, 2, 43, 647, 9, 10) max: 2147483647 ((2^31)-1) min: -2147483648(-2^31)
     * std::string (string - metin) veri tipi (Örnek: "Merhaba", "Dünya", "Selam", "Hello")
        * string veri tipindeki değişkenlerin değerlerini çift tırnak "" içerisinde yazıyoruz.
     * float ve double (ondalıklı sayı) veri tipi (Örnek: 1.5, 2.3, 4.6, 7.8, 9.1)
     * char (karakter) veri tipi (Tek karakter tutar) (Örnek: 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j')
     * bool (boolean - mantıksal) veri tipi (true veya false değerlerini tutar)
        * true (doğru) değeri 1'e eşittir.
        * false (yanlış) değeri 0'a eşittir.
    */

    // int (integer - tam sayı) veri tipi
    // int değerler üzerinde işlemler yapılabilir.
    int a = 5; // integer (tam sayı) veri tipindeki a değişkenine 5 değerini atadık.
    int b = 6; // integer (tam sayı) veri tipindeki b değişkenine 6 değerini atadık.

    std::cout << a + b << "\n"; //çkt: 11, a ve b değişkenlerinin toplamını ekrana yazdırdık.
    std::cout << a - b << "\n"; //çkt: -1, a ve b değişkenlerinin farkını ekrana yazdırdık.
    std::cout << a * b << "\n"; //çkt: 30, a ve b değişkenlerinin çarpımını ekrana yazdırdık.
    std::cout << a / b << "\n"; //çkt: 0, a ve b değişkenlerinin bölümünü ekrana yazdırdık.
    std::cout << a % 2 << "\n"; //çkt: 1, a değişkeninin 2 ile modunu (2 ile bölümünden kalan) ekrana yazdırdık. (teklik çiftlik kontrolünde bu yapıyı kullanacağız)
    std::cout << b % 3 << "\n"; //çkt: 0, b değişkeninin 3 ile modunu (3 ile bölümünden kalan) ekrana yazdırdık.


    // std::string (string - metin) veri tipi
    // string (metin) veri tipindeki değişkenlerin değerlerini çift tırnak "" içerisinde yazıyoruz.
    std::string text1 = "Hello"; // string (metin) veri tipindeki text1 değişkenine "Hello" değerini atadık.
    std::string text2 = "World"; // string (metin) veri tipindeki text2 değişkenine "World" değerini atadık.

    std::cout << text1 + " " + text2 << "\n"; //çkt: Hello World, text1 ve text2 değişkenlerini birleştirip ekrana yazdırdık.
    std::cout << "ilk kodum: " + text1 + " " + text2 << "\n"; //çkt: ilk kodum: Hello World, text1 ve text2 değişkenlerini birleştirip ekrana yazdırdık.
    //  std::cout << "3" + 2 << "\n"; //çkt: HATA VERİR, string (metin) veri tipi ile integer (tam sayı) veri tipi toplanamaz.

    std::cout << text1.length() << "\n"; //çkt: 7, text1 değişkeninin uzunluğunu ekrana yazdırdık.
    std::cout << text2.length() << "\n"; //çkt: 5, text2 değişkeninin uzunluğunu ekrana yazdırdık.

    std::cout << text1[0] << "\n"; //çkt: H, text1 değişkeninin 0. indexindeki değeri ekrana yazdırdık.
    // YAZILIMCILAR SAYMAYA 0 DAN BAŞLAR O YÜZDEN BENİM İÇİN BİR NUMARASIN DEMEK ASLINDA 2 NUMARASIN DEMEK.
    std::cout << text1[1] << "\n"; //çkt: E, text1 değişkeninin 1. indexindeki değeri ekrana yazdırdık.
    std::cout << text1[2] << "\n"; //çkt: L, text1 değişkeninin 2. indexindeki değeri ekrana yazdırdık.
    std::cout << text1[3] << "\n"; //çkt: L, text1 değişkeninin 3. indexindeki değeri ekrana yazdırdık.
    std::cout << text1[4] << "\n"; //çkt: O, text1 değişkeninin 4. indexindeki değeri ekrana yazdırdık.

    // float ve double (ondalıklı sayı) veri tipi
    // float ve double veri tipleri ondalıklı sayıları tutar.

    float f1 = 1.5; // float f1 = 1.5; kodu float (ondalıklı sayı) veri tipindeki f1 değişkenine 1.5 değerini atadık.
    float f2 = 2.3; // float f2 = 2.3; kodu float (ondalıklı sayı) veri tipindeki f2 değişkenine 2.3 değerini atadık.

    std::cout << f1 + f2 << "\n"; //çkt: 3.8, f1 ve f2 değişkenlerinin toplamını ekrana yazdırdık.
    std::cout << f1 - f2 << "\n"; //çkt: -0.8, f1 ve f2 değişkenlerinin farkını ekrana yazdırdık.
    std::cout << f1 * f2 << "\n"; //çkt: 3.45, f1 ve f2 değişkenlerinin çarpımını ekrana yazdırdık.
    std::cout << f1 / f2 << "\n"; //çkt: 0.652174, f1 ve f2 değişkenlerinin bölümünü ekrana yazdırdık.
    std::cout << f1 + 2 << "\n"; //çkt: 3.5, f1 değişkeninin 2 ile toplamını ekrana yazdırdık.

    //char (karakter) veri tipi
    // char veri tipi tek karakter tutar.
    char c1 = 'a'; // char c1 = 'a'; kodu char (karakter) veri tipindeki c1 değişkenine 'a' değerini atadık.
    std::cout << c1 << "\n"; //çkt: a, c1 değişkeninin değerini ekrana yazdırdık.

    // bool (boolean - mantıksal) veri tipi
    // bool veri tipi true veya false değerlerini tutar.
    bool b1 = true; // bool b1 = true; kodu bool (boolean - mantıksal) veri tipindeki b1 değişkenine true değerini atadık.
    bool b2 = false; // bool b2 = false; kodu bool (boolean - mantıksal) veri tipindeki b2 değişkenine false değerini atadık.

    std::cout << b1 << "\n"; //çkt: 1, b1 değişkeninin değerini ekrana yazdırdık.
    std::cout << b2 << "\n"; //çkt: 0, b2 değişkeninin değerini ekrana yazdırdık.

    // DEĞİŞKENLERİN DEĞERLERİNİ DEĞİŞTİRMEK
    // Değişkenlerin değerlerini değiştirmek için = (eşittir) işaretini kullanıyoruz.
    int d1 = 5; // int d1 = 5; kodu integer (tam sayı) veri tipindeki d1 değişkenine 5 değerini atadık.
    std::cout << d1 << "\n"; //çkt: 5, d1 değişkeninin değerini ekrana yazdırdık.
    d1 = 6; // d1 = 6; kodu d1 değişkeninin değerini 6 olarak değiştirdik.
    std::cout << d1 << "\n"; //çkt: 6, d1 değişkeninin değerini ekrana yazdırdık.

    /*DEĞİŞKENLERİN DEĞERLERİNİ DEĞİŞTİRMEK 2
    * Değişkenlerin değerlerini değiştirmek için
    * +=x (değişkenin değerini x kadar arttırmak için), 1 arttırmak için ++ da kullanabiliriz.
    * -=, (değişkenin değerini x kadar azaltmak için),  1 azaltmak için -- da kullanabiliriz.
    * *=, (değişkenin değerini x kadar ile çarpmak için),
    * /=, (değişkenin değerini x kadar ile bölmek için),
    * %=, (değişkenin değerini x kadar ile modunu (x ile bölümünden kalan) almak için)
    * işaretlerini kullanıyoruz.
    */
    int d2 = 5; // integer (tam sayı) veri tipindeki d2 değişkenine 5 değerini atadık.
    std::cout << d2 << "\n"; //çkt: 5, d2 değişkeninin değerini ekrana yazdırdık.
    d2 += 1; // d2 değişkeninin değerini 1 arttırdık.
    std::cout << d2 << "\n"; //çkt: 6, d2 değişkeninin değerini ekrana yazdırdık.

    // SABİT DEĞİŞKEN TANIMLAMAK
    // Tanımladığımız değişkenin değerinin kod içerisinde değiştirilmemesini istiyorsank const yapısı ile sabit değişken tanımlarız.
    // const yapısı const (değişken türü) (değişken adı) = (değişken değeri) yapısı ile kullanılır.

    const double pi = 3.14;  // pi değişkeninin değerini 3.14 e sabit olarak tanımladık.
    //pi = 5 gibi bir kod yazdığımızda sabit olarak tanımlanan değeri değiştiremezsiniz hatası alırız.


    return 0;
}

/*
 * Kodumuzun çalışması için main fonksiyonu olması gerekmekte.
 * main fonksiyonundan başka kendimiz de fonksiyonlar oluşturabiliriz.
 * Fonksiyonları oluşturmayı, fonksiyonun sonundaki return ifadesini ve
 * main'inönündeki int ifadesinin ne anlama geldiğini fonksiyonları anlatırken öğreneceğiz.
*/
