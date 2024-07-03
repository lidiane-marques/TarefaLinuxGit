#include <stdio.h>

int main()
{
    float base, altura, area;
    printf("Vamos calcular a area de um triangulo!\n digite a base e altura do triangulo: \n");
    scanf("%f %f", &base, &altura);
    area = (base*altura)/2;

    printf("a area é %.1f ",area);

    return 0;
}
