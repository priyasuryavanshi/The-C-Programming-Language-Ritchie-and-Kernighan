#include <stdio.h>
#define IN 1
#define OUT 0
int main () {
    int c;
    int state =OUT;
 
    while((c=getchar()) != EOF) {
        if(c==' ' || c== '\t'|| c== '\n') 
        {
            state = OUT;
           continue;
        }
        else {
         if(state == OUT) {
             putchar('\n');
             state=IN;
         }
         putchar(c);

        }
        
    }
    putchar('\n');

   

    return 0;
}