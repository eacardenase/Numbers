//
//  main.c
//  Numbers
//
//  Created by Edwin Cardenas on 12/28/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    unsigned long x = 255;
    
    printf("x is %lu.\n", x);
    printf("In octal, x is %lo.\n", x);
    printf("In hexadecimal, x is %lx.\n", x);
    
    return 0;
}
