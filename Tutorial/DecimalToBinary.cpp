//muhendisarsivi.com - Yakup Afşin

#include <iostream>
#include <cmath>

using namespace std;
//muhendisarsivi.com - Yakup Afşin
int main()
{
    int sayi,eskiSayi,i,c; //Değişkenleri tanımlıyoruz

    cout<<"Bir sayi giriniz : "; 
    cin>>sayi; //Onlu sayı girişini sağlıyoruz.

    eskiSayi=sayi;

    cout<<eskiSayi<<" sayisinin ikilik tabandaki yazilmis : ";

    for(c=0;;c++) //For döngüsü ile sayının kaç defa 2'ye bölünebildiğini ölçüyoruz.
    {
        if(sayi<2)
        {   
            break; 
        }
        sayi=sayi/2;
    }

    //muhendisarsivi.com - Yakup Afşin

    int deger[c];//Her bölüm için kalan sayıyı tutacağımız diziyi tanımlıyoruz
    
   //muhendisarsivi.com - Yakup Afşin

    for(i=0;;i++) //For döngüsü ile her bölümde oluşan kalan sayıyı diziye tanımlıyoruz.
    {
        if(eskiSayi<2)
        {   
            deger[i]=(eskiSayi%2);
            break;
        }
        deger[i]=(eskiSayi%2);
        eskiSayi=eskiSayi/2;
    }
    
   //muhendisarsivi.com - Yakup Afşin

    for(int a=i;a>=0;a--){ //Ve yine for döngüsü ile diziyi ters bir şekilde yazdırıyoruz. 
        
        cout<<deger[a];
    }
 
    return 0;
}