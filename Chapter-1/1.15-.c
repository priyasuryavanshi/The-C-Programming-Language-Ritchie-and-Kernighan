/* This program makes Histogram of frequencies of different characters 
from a-z (small and capital letters)*/

#include<stdio.h>
#define SIZE_LIMIT 26
int main () {
    int c;
    int array[SIZE_LIMIT]={0};
    int max_ele=0;

    while((c = getchar()) != EOF) {
        if(c>='a' && c<='z') {
            array[c-'a']++;
        }
        else if(c>='A' && c<='Z') {
            array[c-'A']++;
        }
        
    }

    for(int i=0; i<SIZE_LIMIT; i++) {
        if(array[i] > max_ele) {
            max_ele=array[i];
        } 
    }


    
    while(max_ele>0) {
        for(int j=0; j<SIZE_LIMIT;j++) {
            if(array[j]==max_ele) {
                printf("** ");
                array[j]--;
            }
            else printf("   ");
        }
        printf("\n");
        max_ele--;
    }
    for(int i=0; i<SIZE_LIMIT; i++) {
        printf(" ");
    }
    printf("\n");
    for(int i=0; i<SIZE_LIMIT; i++) {
        printf(" %c ",i+'a');
    }
    printf("\n");
    return 0;
}