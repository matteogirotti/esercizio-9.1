#include <stdio.h>
float calcolareArea(float lato) {
    return lato * lato;
}

int main(void) {
    float lato,area;
    printf("inserisci il lato: ");
    scanf("%f",&lato);
    area=calcolareArea(lato);
    printf("l'area del quadrato e': %.2f",area);
}