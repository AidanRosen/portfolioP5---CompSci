//
//  recursivePalindrome.c
//  4wayCoding
//
//  Created by Rosen, Aidan on 12/9/19.
//  Copyright © 2019 Rosen, Aidan. All rights reserved.
//

#include "Palindrome.h"
char reverse2[1000];
char recursor[1000];
char buffer[100];
int position = 0;
char *strncat(char *dest, const char *src, size_t n);
int reversePos = 0;
char *recursePalin(char *cInput) {
    //strcpy(recursor, cInput);
    //char c;
    //c = cInput[position]
    char character;
    character = cInput[position];
    if (cInput[position] != '\0')
     {
       position++;
       //strncat(reverse2, &character, 1);
       recursePalin(cInput);
       //reversePos++;
       strncat(reverse2, &character, 1); //discovered on my own. 
       //reversePos++;
         
     }
     //printf("%c",*a);
    
    return reverse2;
}
