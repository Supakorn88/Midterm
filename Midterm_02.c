#include <stdio.h>

int main() {
    int productID;
    char productName[100];
    float productPrice, productSale;

    printf("++++++++++++++++++++++++++++++\n");
    printf(" Program Price Sale\n");
    printf("++++++++++++++++++++++++++++++\n");

    printf("Product ID: ");
    scanf("%d", &productID);

    printf("Product Name: ");
    scanf(" %[^\n]s", productName);

    printf("Product Price: ");
    scanf("%f", &productPrice);

    productSale = (productPrice * 0.75) * 1.07;

    printf("++++++++++++++++++++++++++++++\n");
    printf("Product Sale: %.2f\n", productSale);
    printf("++++++++++++++++++++++++++++++\n");

    return 0;
}


