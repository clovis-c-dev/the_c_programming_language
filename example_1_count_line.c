#include <stdio.h>

int main(void){
    int lines_number = 0;
    int c;
    while((c = getchar()) != EOF){
        if(c == '\n')
            ++lines_number;
    }
    printf("%d\n", lines_number);
    return 0;
}
