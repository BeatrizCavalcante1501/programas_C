#include <stdio.h>
#include <math.h>

float area(float r){
float pi= 3.14;
return pi*pow(r,2);
}

float perimetro(float r){
float pi= 3.14;
float p= 2*pi*r;
return p;
}

int main(void){
float r;

printf("Escreva o valor do raio para calcular a area do circulo: ");
scanf("%f",&r);

printf("O valor da area e: %2.f\n", area(r));

printf("Escreva o valor do raio para calcular o perimetro do circulo: ");
scanf("%f",&r);

printf("O valor da area e: %f\n", perimetro(r));

return 0;

}