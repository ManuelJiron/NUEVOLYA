//ejercicio1

#include<stdio.h>
#include<math.h>

float conversion(float gradosF);

int main(int argc, char const *argv[])
{
    float temperaturaF;
    float celsius;
    printf("Dime la temperatura en grados Fahrenheit y la convertire en celsius: ");
    scanf("%f", &temperaturaF);

    celsius = conversion(temperaturaF);
    printf("Temperatura en grados celsius es de %.2f", celsius);


    return 0;
}

float conversion(float gradosF)
{
    return (gradosF-32)/1.8;

}




