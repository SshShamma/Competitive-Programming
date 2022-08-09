#include <stdio.h>
 
int main() {
 
int t, i;
scanf("%d\n", &t);
float n1, n2, n3, average;

for(i=1; i<=t; i++)
{
    scanf("%f %f %f\n", &n1, &n2, &n3);
    average = ((n1*2)+(n2*3)+(n3*5))/10.0;
    printf("%.1f\n", average);
}
 
    return 0;
}
