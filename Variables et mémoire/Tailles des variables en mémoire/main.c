#include <stdio.h>;
#include <stdlib.h>;

int main (){
    
    
    /* 
    * La fonction sizeof() retourne la taille de la mémoire utilisée par la variable
    * Prend un type de variable en paramètre.  
    */

    /*
    * Le type short prend en mémoire seulement deux octets.
    */ 
    
    short mon_short=10;
    printf("mon short= %d et prend en memoire %d octets\n",mon_short,sizeof(short));
   
    /*
    * Le type long prend en mémoire quatre octets.
    */

    long mon_long=123;
    printf("mon long = %d et prend en memoire %d octets\n",mon_long,sizeof(long));
    
    
    int mon_int=-12;
    printf("mon int = %d et prend en memoire %d octets\n",mon_int,sizeof(int));
   
    /*
    * Le type int unsigned ne peut contenir de signe moins (-) comparé à int qui est signed par défaut.
    * Cela possède une influence sur les plages de valeurs possibles pour les variables.
    * En effet, si la taille en octets (2 ou 4 octets) reste la même,
    * la plage des valeurs positives, elle, se retrouve doublée pour les entiers non signés.
    */        

    unsigned int mon_unsigned=12;
    printf("mon int = %d et prend en memoire %d octets\n",mon_unsigned,sizeof(int));
    
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
