#include <stdio.h>

int main () {
    int w,i,b;

    i=w%b;
    printf("enter the weight");
    scanf("%d", &w);
    for (b=2;b<=10;b=b+2) {
        if (i==0 && i&2==0) {
            printf("YES");
        } else {
            printf("NO");
        }
    }
    return 0;
}
