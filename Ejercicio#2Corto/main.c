#include <stdio.h>

void cambiodeposicion(int *p_a, int *p_b){

    *p_a=*p_a+*p_b;
    *p_b=*p_a-*p_b;
    *p_a=*p_a-*p_b;
}


int main(){

    int a;
    int b;

    printf("Ingrese a: ");
    scanf("%d", &a);
    printf("Ingrese b: ");
    scanf("%d", &b);

    cambiodeposicion(&a,&b);

    printf("El número de a es: %d\n", a);
    printf("El número de b es: %d\n", b);


    return 0;
}