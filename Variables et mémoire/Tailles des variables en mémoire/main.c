#include <stdio.h>;
#include <stdlib.h>;

int main (){
    
    int mon_int = 12;
    
    /* 
    * La fonction sizeof() retourne la taille de la mémoire utilisée par la variable
    * Prend un type de variable en paramètre.  
    */

    int taille_int= sizeof(int);
    printf("mon int = %d et prend en memoire %d octets\n",mon_int, taille_int);
    
    /*
    * sizeof() retourne un size_t, qui est un type non signé. 
    * Pour l'afficher correctement, on utilise %zu.
    */

    char mon_char ='A';
    printf("mon char = %c et prend en memore %zu octets\n",mon_char,sizeof(char));

    float mon_float= 3.1416;

    printf("mon float =%f et prend en memoire %zu octets\n", mon_float,sizeof(float));

    double mon_double= 12.6;
    printf("mon double = %f et prend en memoire %zu octets\n", mon_double,sizeof(double));


    return 0;

}
