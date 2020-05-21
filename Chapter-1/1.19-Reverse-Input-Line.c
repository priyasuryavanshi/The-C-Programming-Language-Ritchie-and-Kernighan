#include<stdio.h>
#define SIZE_LIMIT 30
int main () {
    int count =0;
    int c;
    int array[SIZE_LIMIT]={0};
    int max_ele=0;
    

    while((c = getchar()) != EOF) {
        if((c==' ' || c =='\t'||c=='\n' ) && count > 0){
            array[count-1] +=1;
            count=0;
        }
        else if(count>SIZE_LIMIT) {
            count =0;
        }
        count++;
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
        printf("___");
    }
    printf("\n");
    for(int i=0; i<SIZE_LIMIT; i++) {
        printf("_%d_",i+1);
    }
    printf("\n");
    return 0;
}