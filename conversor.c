#include <stdio.h>

void convertir(double cantidad, double tasa, char *moneda_destino) {
    printf("%.2f en %s es: %.2f\n", cantidad, moneda_destino, cantidad * tasa);
}

int main() {
    int opcion;
    double cantidad;

    printf("Bienvenisods al conversor de monedas, selecciona una opción\n");
    printf("1. Quetzales a Dólares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dólares a Quetzales\n");
    printf("4. Dólares a Euros\n");
    printf("5. Euros a Quetzales\n");
    printf("6. Euros a Dólares\n");
    printf("Seleccione una opción: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad a convertir: ");
    scanf("%lf", &cantidad);

    switch (opcion) {
        case 1:
            convertir(cantidad, 0.13, "Dólares"); // 1 Quetzal = 0.13 USD (ejemplo)
            break;
        case 2:
            convertir(cantidad, 0.12, "Euros"); // 1 Quetzal = 0.12 EUR (ejemplo)
            break;
        case 3:
            convertir(cantidad, 7.8, "Quetzales"); // 1 USD = 7.8 Quetzales (ejemplo)
            break;
        case 4:
            convertir(cantidad, 0.92, "Euros"); // 1 USD = 0.92 EUR (ejemplo)
            break;
        case 5:
            convertir(cantidad, 8.5, "Quetzales"); // 1 EUR = 8.5 Quetzales (ejemplo)
            break;
        case 6:
            convertir(cantidad, 1.09, "Dólares"); // 1 EUR = 1.09 USD (ejemplo)
            break;
        default:
            printf("Opción no válida.\n");
    }

    return 0;
}
