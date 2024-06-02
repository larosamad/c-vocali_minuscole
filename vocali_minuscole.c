/* Chiedi una sequenza di caratteri
la sequenza termina quando viene inserito il il carattere #
Conta il numero complessivo di vocali minuscole (a, e, i, o, u)
Stampa il valore
Esempio: se l’utente inserisce d**e**fgh**i**123kjkmAA**a**002#, stampa il valore 3. */

#include <stdio.h>
const char STOP = '#';
int cont = 0;
char carattere;
const char MIN_A = 'a';
const char MIN_E = 'e';
const char MIN_I = 'i';
const char MIN_O = 'o';
const char MIN_U = 'u';

int main (void) {
    do {
        printf("Inserisci carattere\n");
        scanf(" %c", &carattere);
        if((carattere == MIN_A) || (carattere == MIN_E) || (carattere == MIN_I) || (carattere == MIN_O) || (carattere == MIN_U))
            cont++;
    } while (carattere != STOP);
    printf("Nella sequenza le vocali minuscole sono %d", cont);
    return 0;
}

//con vettori e for
int main2 (void){
    char vocali_minuscole[5] = {'a', 'e', 'i', 'o', 'u'};
    int i;

    do
    {
        printf("Inserisci carattere\n");
        scanf(" %c", &carattere);

        for(i = 0; i < 5; i++) {
            if (carattere==vocali_minuscole[i])
            cont++;
        }
    } while (carattere != STOP);
    
    printf("Nella sequenza le vocali minuscole sono %d", cont);
    return 0;
}