#include <stdio.h>
 
int main() {
 
    int t, speed;
    scanf("%d\n%d", &t, &speed);
    float fuel = (t*speed)/12.0;
    printf("%.3f\n", fuel);
    
    return 0;
}