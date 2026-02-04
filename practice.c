#include <stdio.h>
int main () {
    int m1, m2, m3;
    float average;
    printf("enter marks of three subjects");
    scanf("%d%d%d", &m1, &m2, &m3);
    average =(m1 + m2 + m3)/3.0;
    printf("average = %f", average);
    return 0;
}