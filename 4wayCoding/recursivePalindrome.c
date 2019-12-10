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
int position = 0;
char *recursePalin(char *recursor) {
    //strcpy(recursor, cInput);
    char c;
    c = recursor[position];
    if (c != '\0')
     {
       position++;
       recursePalin(recursor);
       reverse2[position] = recursor[position - (position -1)];
     }
     //printf("%c",*a);
    
    return reverse2;
}
