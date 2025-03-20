#include <stdio.h>
#include <math.h>
void computeHomeValue(void) {
    int popularity, size;
    int homeValue;  

    printf("Enter popularity: ");
    scanf("%d", &popularity);
    
    printf("Enter size: ");
    scanf("%d", &size);

    homeValue = ((int)pow(popularity, 3) + (int)pow(size, 2)) * 10000;

    printf("Home's value is: %d\n", homeValue);
}

int main() {

    computeHomeValue();

    return 0; 
}
