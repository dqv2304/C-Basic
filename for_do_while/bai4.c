#include <stdio.h>
#include <math.h>

int main() {
    int sum = 0;
    for (int i = 1; i < 100; i+=2){
        sum += i;
    }
    printf("Tong cac so le tu 1 den 100 la: %d ", sum);

    return 0;
}
