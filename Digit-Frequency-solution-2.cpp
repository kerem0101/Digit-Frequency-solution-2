#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int count[10]={0};
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);  
    for(int j=0; j<10; j++){
        for(int i=0; i<strlen(s); i++){
            if(s[i]==(j+'0')){
                count[j]++;
            }
        }
        printf("%d ",count[j]);
    }
    
    return 0;
}

