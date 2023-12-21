#include <stdio.h>
#include <string.h>

char* reverse( char str1[], char str2[]) ;

int main() {
    char text[ 50 ] = "I Love You" ;
    char text2[ 50 ];
    char *out;
    out = reverse(text, text2) ;
}//end function
char* reverse( char str1[], char str2[]) {
     int len = strlen(str1);
    for(int i = 0 ; i < len ;i++){
        str2[len - 1 - i] = str1[i];
    }
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
}