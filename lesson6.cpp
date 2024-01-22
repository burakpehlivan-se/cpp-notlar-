//
// Created by burak on 22.01.2024.
//
// Diziler
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // Değişkenler verileri RAM (geçici bellek) üzerinde tutar.
    // Program çalıştığı sürece değişkenler RAM üzerinde tutulur.
    // Değişkenlerin tuttuğu veriler program sonlandığında RAM'den silinir.
    // Diziler aynı türden verileri tutan değişkenlerdir.

    // Dizileri tanımlarken şu taslak kullanılır:
    // dizinin_tutacağı_veri_tipi dizi_adi[dizi_boyutu];

    int numbers[5] = {1,2,3,4,5};
    // numbers adında 5 elemanlı içinde integer değerler tutacak bir dizi tanımladık.


    int numbers2[5];

    numbers2[0] = 1; // dizinin 0. elemanına 1 değerini atadık.
    numbers2[1] = 2; // dizinin 1. elemanına 2 değerini atadık.
    numbers2[2] = 3; // dizinin 2. elemanına 3 değerini atadık.
    numbers2[3] = 4; // dizinin 3. elemanına 4 değerini atadık.
    numbers2[4] = 5; // dizinin 4. elemanına 5 değerini atadık.

    // Eleman sayısı 5 olmasına rağmen indis sayısı 4'tür. Bunun nedeni indislerin 0'dan başlamasıdır.

    // Dizilerin elemanlarına erişmek için şu taslak kullanılır:
    // dizi_adi[elemanin_indisi];
    cout << numbers[0] << "\n"; // çkt: 1, dizinin 0. elemanını ekrana yazdırdık.
    cout << numbers[1] << "\n"; // çkt: 2, dizinin 1. elemanını ekrana yazdırdık.
    cout << (numbers[2] * 2) << "\n"; // çkt: 6, dizinin 2. elemanını'nı 2 ile çarpıp ekrana yazdırdık.
    cout << sqrt(numbers[3]) << "\n"; // çkt: 2, dizinin 3. elemanını'nı karekökünü alıp ekrana yazdırdık.
    // sqrt fonksiyonu cmath kütüphanesinde tanımlıdır (#include <cmath>). içine girilen değerin karekökünü alır.

    // sizeof(dizi_adi) dizinin ram üzerinde kapladığı alanı verir.
    cout << sizeof(numbers) << " byte\n"; // çkt: 20, numbers dizisinin ram üzerinde kapladığı alanı ekrana yazdırdık.
    cout << sizeof(numbers[0]) << " byte\n"; // çkt: 4, numbers dizisinin 0. elemanının ram üzerinde kapladığı alanı ekrana yazdırdık.
    // Dizinin her elemanı'nın aynı türden veriler olduğunu dikkate alırsak dizinin ilk elemanının kapladığı alan diğer elemanların kapladığı alanlarla aynıdır.
    cout << sizeof(numbers[1]) << " byte\n"; // çkt: 4, numbers dizisinin 1. elemanının ram üzerinde kapladığı alanı ekrana yazdırdık.
    // Dizi'nin eleman sayısını öğrenmek için şu taslak kullanılır:
    // sizeof(dizi_adi) / sizeof(dizi_adi[0]);
    // Burada yaptığımız işlem dizinin hepsinin ram üzerinde kapladığı alanı dizinin ilk elemanının RAM üzerinde kapladığı alana bölüyoruz.


    // bir adet;
        // integer = 4 byte
        // string = 8 byte
        // float = 4 byte
        // double = 8 byte
        // char = 1 byte
        // bool = 1 byte
    // yer kaplar. (bilmek zorunda değilsiniz(ama bilseniz fena olmaz.)).

    cout << "numbers dizisinin RAM'de kapladığı alan " << sizeof(numbers) << " byte\n";
    cout << "numbers dizisinin bir elemanının RAM'de kapladığı alan" << sizeof(numbers[0]) << " byte\n";
    cout << "numbers dizisinin eleman sayısı: " << sizeof(numbers) / sizeof(numbers[0]) << "\n";

    // Tanımlanan dizinin elemanlarını teker teker ekrana yazdıran for döngüsü

    string names[5] = {"Burak", "Ahmet"};
    names[2] = "Rümeysa" ;
    cout << names[2] << "\n"; // çkt: Rümeysa

    names[3] = "Ünal";
    names[4] = "Çağla";

    names[4] = "Merve"; // names dizisindeki 4. indisteki elemanı Çağla değerinden Merve değerine güncelledik."

    for (int i = 0; i < (sizeof(names)/sizeof(names[0])) ; i++){
        cout << "Gelecek " << i+1 << ". davetli: " << names[i] << "\n";
    }
    // Bu for döngüsü ile names dizisinin elemanlarını teker teker ekrana yazdırdık.
    // i için sınır belirlerken names dizisinin eleman sayısını öğrendik.
    // i = 0 => names[0] = "Burak" ekrana "Gelecek 1. davetli: Burak" yazdırdık.
    // i = 1 => names[1] = "Ahmet" ekrana "Gelecek 2. davetli: Ahmet" yazdırdık.
    // i = 2 => names[2] = "Rümeysa" ekrana "Gelecek 3. davetli: Rümeysa" yazdırdık.
    // i = 3 => names[3] = "Ünal" ekrana "Gelecek 4. davetli: Ünal" yazdırdık.
    // i = 4 => names[4] = "Merve" ekrana "Gelecek 5. davetli: Merve" yazdırdık.

// 1 ile 10 arasındaki (10 dahil) sayıları bir diziye for döngüsü ile tanımlama

    int numbers3[10];
    for (int i = 0; i <10;i++){
        numbers3[i] = i+1;
    }

    // i = 0 => numbers3[0] = 1
    // i = 1 => numbers3[1] = 2
    // i = 2 => numbers3[2] = 3
    // ...


    // for döngüsü ile tanımlanan dizinin elemanlarını teker teker ekrana yazdırma
    for (int i = 0; i < (sizeof(numbers3)/sizeof(numbers3[0])) ; i++){
        cout << "Numbers3 dizisinin " << i+1 << ". elemanı:" << numbers3[i] << "\n";
    }

// dizinin değerlerini kullanıcıdan alma

    string markalar[5];
    for (int i = 0; i < (sizeof(markalar)/sizeof(markalar[0])) ; i++){
        cout << i+1 << ". markayı giriniz: ";
        cin >> markalar[i];
    }
    cout << "\n";

    // markaları ekrana yazdırma.
    for (int i = 0; i < (sizeof(markalar)/sizeof(markalar[0])) ; i++){
        cout << "Girdiğiniz " << i+1 << ". marka:" << markalar[i] << "\n";
    }

    cout << "\n";
    // dizilerdeki değerleri başka bir diziye klonlama
    string markalar_yeni[7];

    // eşitleme işlemi
    for (int i = 0; i < (sizeof(markalar)/sizeof(markalar[0])) ; i++ ){
        markalar_yeni[i] = markalar[i];
    }

    int number = 2;

    markalar_yeni[5] = "monster";
    markalar_yeni[6] = "gamegaraj";


    // markalar_yeni yi ekrana yazırma
    for (int i = 0; i < (sizeof(markalar_yeni)/sizeof(markalar_yeni[0])) ; i++){
        cout << "Girdiğiniz " << i+1 << ". marka:" << markalar_yeni[i] << "\n";
    }

    return 0;
}