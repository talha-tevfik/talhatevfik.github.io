#include <stdio.h>
#include <math.h>  

int main() {
    int popularity, size;
    int homeValue;

    printf("Enter popularity: ");
    scanf("%d", &popularity);

    printf("Enter size: ");
    scanf("%d", &size);

    homeValue = ((int)pow(popularity, 3) + (int)pow(size, 2)) * 10000;

    printf("Home value is: %d\n", homeValue);

    return 0;
}
