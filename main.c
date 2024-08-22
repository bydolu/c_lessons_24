#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day=1;  // 'day' adında bir değişken tanımlanıyor ve değeri 1 olarak atanıyor.


        // 'switch' yapısı, 'day' değişkenine göre hangi günün seçileceğini belirliyor.
    switch(day){
        case 1:
            printf("Pazartesi.\n");  // 'day' 1 ise "pazartesi" yazdırılıyor.
            break;                          // 'break' komutu ile 'switch' yapısından çıkılıyor.
        case 2:
            printf("Salı.\n");
            break;                          //'break' yazmadığımız zaman case den çıkmaz.
        case 3:
            printf("Çarsamba.\n");
            break;
        case 4:
            printf("Perşembe.\n");
            break;
        case 5:
            printf("Cuma.\n");
            break;
        case 6:
            printf("Cumartesi.\n");
            break;
        case 7:
            printf("Pazar.\n");
            break;

    }

    /*int x,y,z;      //x==7?:10(y==12?:-90) İfadesi tek satırda iki farklı koşulu değerlendiren operatördür.
    x=3;
    y=10;

                      // 'x' değişkenine göre bir 'switch' yapısı kullanılıyor.
    switch(x){
        case 7:       // 'x' 7 ise 'z' 19 olarak atanıyor.
                z=19;
                break;
        default:
                    switch(y){      // 'x' 7 değilse, 'y' için bir iç 'switch' yapısı kullanılıyor.
                    case 12:
                            z=10;   // 'y' 12 ise 'z' 10 olarak atanıyor.
                            break;
                    default:
                            z=-90;          // 'y' 12 değilse 'z' -90 olarak atanıyor.

                }

            }

    printf("%d\n",z);   // 'z' değişkeninin değeri ekrana yazdırılıyor.
    */
    return 0;
}
