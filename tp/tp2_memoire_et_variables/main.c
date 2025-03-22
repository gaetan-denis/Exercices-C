#include <stdio.h>

int main (){

    printf("TP2: Memoire et variables\n");

    int mon_int = 8;
    long mon_long= 16;
    short mon_short=4;
    float mon_float=3.1416;
    double mon_double=1.61803398875;
    char mon_char[1] ="g";

    printf("Mon int = %d et fait %zu octets\n", mon_int, sizeof(int));
    printf("Mon long = %ld et fait %zu octets\n", mon_long, sizeof(long));
    printf("Mon short= %d et fait %zu octets\n", mon_short, sizeof(short));
    printf("Mon float= %f et fait %zu octets\n", mon_float, sizeof(float));
    printf("Mon double= %f et fait %zu octets\n", mon_double, sizeof(double));
    printf("Mon char= %c et fait %zu octets\n", mon_char, sizeof(char));
    
return 0;
}
