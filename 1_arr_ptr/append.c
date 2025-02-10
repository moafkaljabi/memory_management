#include <stdio.h>
#include "string.h"

char str1[50] = "Hello";
char* str2 = "you";

char c =0 ;
char i= 0;

int main(){

    while (str1[c] != '\0'){

        c++;
    }       

    str1[c] = ' ';
    c++;

    // for loop to iterate over str2 
    while(str2[i] != '\0')
    {
        str1[c] = str2[i];
        i++;
        c++;
        
    }
    str1[c] = '\0';

    printf("%s\n",str1);

    return 0;
}



