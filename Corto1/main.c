#include <stdio.h>
#include <math.h>
int convertBinaryToDecimal(long long n);
int main()
{
    long long n;
    printf("Ingrese el numero binario: ");
    scanf("%lld", &n);
    printf("%lld en binario = %d en decimal", n, convertBinaryToDecimal(n));
    return 0;
}
int convertBinaryToDecimal(long long n)
{
    /*Envia el decimal para combetir lo pasa remainder que es la division con residuo*/
    int decimalNumero = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumero += remainder*pow(2,i);
        ++i;
    }
    return decimalNumero;
}