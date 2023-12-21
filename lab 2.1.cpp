#include <stdio.h>
#include <string.h>

void reverse( char str1[], char str2[] ) ;

int main() {
    char text[ 50 ] = "I Love You" ;
    char out[ 50 ] ;
    reverse( text, out ) ;

}//end function

void reverse( char str1[], char str2[] ) {
    int len = strlen(str1);
    for(int i = 0 ; i < len ;i++){
       str2[len - 1 - i] = str1[i]; //ใส่ค่าไปที่ str1 ส่งไปที่ตัวแปร str2
    }
    // str2[len] = '\0';
    printf("str1 = %s\n", str1);
    printf("str2 = %s\n", str2);
}

// void GetText(char **text) ;
// int main(){
//     char *str;
//     GetText(&str);
//     printf("\n%s\n",str);
//     return 0;
    
// }
// void GetText(char **text) {
//     *text = new char[20];
//     gets(*text);
// }