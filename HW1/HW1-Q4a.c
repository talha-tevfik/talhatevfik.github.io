#include <stdio.h>
#include <math.h>
int computeHomeValue(int popularity, int size){
int computeHomeValue= ((int)pow(popularity, 3) + (int)pow(size, 2)) * 10000;
    return (popularity * popularity * popularity + size * size) * 10000;
}

int main(void)
{
    int popularity, size;
    int homeValue; 

    printf("Enter popularity: ");
    scanf("%d", &popularity);

    printf("Enter size: ");
    scanf("%d", &size);

    homeValue = computeHomeValue(popularity, size);

    printf("Home value is: %d\n", homeValue);

    return 0; 
}
