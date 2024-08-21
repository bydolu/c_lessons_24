#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* int day=8;
    switch(day){
        case 1:printf("pazartesi.\n");
        break;
        case 2:printf("sali.\n");
        break;                          //break yazmazsak case den çýkmaz
        case 3:printf("carsamba.\n");
        break;
        case 4:printf("persembe.\n");
        break;
        case 5:printf("cuma.\n");
        break;
        case 6:printf("cumartesi.\n");
        break;
        case 7:printf("pazar.\n");
        break;
        default:printf("saka yapma.\n");
        break;
    }
    */
    int x,y,z;      //x==7?:10(y==12?:-90)
    x=3;
    y=10;

    switch(x){
        case 7: z=19;
                break;
        default: switch(y){
                    case 12: z=10; break;
                    default:z=-100;

                }

    }

    printf("%d\n",z);
    return 0;
}
