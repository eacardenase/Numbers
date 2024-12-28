//
//  main.c
//  Numbers
//
//  Created by Edwin Cardenas on 12/28/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    printf("Integers be like:\n\n");
    
    printf("3 * 3 + 5 * 2 = %d\n", 3 * 3 + 5 * 2);
    printf("11 / 3 = %d remainder of %d \n", 11 / 3, 11 % 3);
    printf("11 / 3.0 = %f\n", 11 / (float)3);
    printf("The absolute value of -5 is %d\n\n", abs(-5));
    
    printf("Floats be like:\n\n");
    
    double y = 12345.6789;
    printf("y is %.2f\n", y);
    printf("y is %.2e\n", y);
    
    printf("\nUsing the math library:\n\n");
    
    double mySine = sin(1);
    printf("%.3f\n", mySine);
    
    return 0;
}
