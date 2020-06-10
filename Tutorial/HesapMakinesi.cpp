#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;

    cout << "\n #DERS 2 (HESAP MAKiNASI / if-else , cout, cin,)";

    cout << "\n KAYNAK : MuhendisArsivi.com \n";

    cout << "\nYapmak istediginiz islemin numarasini giriniz."
         << "\n"
         << "\n Toplama = 1\n Cikartma = 2\n Carpma = 3\n Bolme = 4\n";

    cin >> c;

    cout << "ilk sayiyi giriniz = ";

    cin >> a;

    cout << "Son sayiyi giriniz = ";

    cin >> b;

    if (c == 1)

        d = (a + b); //eğer 1 seçildiyse ilk ve son sayıyı topla.

    if (c == 2)

        d = (a - b); //eğer 2 seçildiyse ilk sayıdan son sayıyı çıkart.

    if (c == 3)

        d = (a * b); // eğer 3 seçildiyse ilk ve son sayıyı çarp.

    if (c == 4)

        d = (a / b); // eğer 4 seçildiyse ilk ve son sayıyı böl.

    cout << "\n islemin sonucu = " << d << "\n";

    if (c > 4)

        cout << "Program yanildi. Cunku girdiginiz islemin numarasi yanlis. En buyuk islem numarasi 4(Bolme)''dir.";

    cout << "\nCikmak icin bir tusa basiniz.";

    return 0;
}
