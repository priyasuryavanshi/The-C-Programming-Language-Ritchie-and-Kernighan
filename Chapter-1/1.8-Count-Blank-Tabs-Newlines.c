#include <stdio.h>

int main () {
    int c, blanks,tabs,newlines;
    blanks =0;
    tabs=0;
    newlines=0;
    while((c=getchar()) != EOF) {
        if(c==' ') blanks++;
        else if(c=='\t') tabs++;
        else if(c=='\n') newlines++;
    }

    printf("Blanks:\t\t%d\n",blanks);
    printf("Tabs:\t\t%d\n",tabs);
    printf("Newlines:\t%d\n",newlines);
    printf("Total:\t\t%d\n",blanks+tabs+newlines);

    return 0;
}