#include<stdio.h>

int main() {
    int c;
    int flag=0;

    while((c = getchar()) != EOF) {
        if(c==' ') {
            flag=1;
            continue;
        }
        if(flag==1) {
            putchar(' ');
            flag=0;
        }
        putchar(c);
    }
    return 0;
}