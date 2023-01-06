#include <iostream>
using namespace std;


int main () {

    int sayi;
    cout << "deneme" << endl;
    cout << "deneme 2 sayi gir: ";
    cin >> sayi;
    cout << sayi << endl;

    // makefile'ı cmd üstünden mingw32-make ile çalıştırırsan sadece tek bir kuralı çalıştırır
    // bütün kuralların çalışması için ortak bir kural yazarız (her bir kuralın bağımlı olduğu başka bir kural)
    //farklı farklı cpp dosyalarını tek bir exe üzerinden çalıştırmaya çalışma hata verir zaten

    
    /*KODLARIN ANLAMLARI*/
    //g++ -o program(oluşacak exe dosyasının adı) try.cpp // try.cpp'yi derler ve exe haline dönüştürür
    //cmd üstünden program yazarak direkt çalıştırabilirsin

    // g++ -c try.cpp -o try.o // programı sadece derler
    // buradaki örnekte tek bir exe dosyasına çevirip çalıştırmayı yaptım 

    // oluşan dosyaları düzenli bir şekilde tutmak için makefile dosyamızın içinde yolları belirtiyoru örneğin;
    // g++ -I (include klasörünü tanımlarız) "./include/" -c ./src/main_try.cpp

    //debug yapamadım :( [gelecekten geldim yaptım ama nasıl yaptığımı bilmiyorum oldu bi şekilde .d]
    

    return 0;
}