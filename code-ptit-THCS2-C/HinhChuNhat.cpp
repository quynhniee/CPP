#include<stdio.h>
#include<math.h>

int sosanh2(int a, int b){
    return (a>b)? a : b;
}
int min2(int a, int b){
    return (a<b)?a:b;
}
int sosanh4(int a, int b, int c, int d){
    int max;
    max = (sosanh2(a, b) > sosanh2(c, d))? sosanh2(a, b) : sosanh2(c, d);
    return max;
}
int min4(int a, int b, int c, int d){
    int min;
    min = (min2(a, b)<min2(c, d))? min2(a, b) : min2(c, d);
    return min;
}
int main () {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    scanf("%d%d%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
    int a = sosanh4(x1, x2, x3, x4)- min4(x1, x2, x3, x4);
    int b = sosanh4(y1, y2, y3, y4) - min4(y1, y2, y3, y4);
    printf("%d", (a>b)? a*a : b*b);
}
