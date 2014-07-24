//
//  main.c
//  MyFirstCProgram
//
//  Created by turner on 9/26/13.
//  Copyright (c) 2013 treehouse. All rights reserved.
//

#include <stdio.h>

int funky_math (int a, int b);

int main()
{
    int days_in_a_week = 7;
    float cm_to_in = 2.54;
    
    char the_w;
    the_w = 'W';
    
    // insert code here...
    printf("Hello, World!\n");
    printf("%d days in a week.\n", days_in_a_week);
    printf("%f cm to in", cm_to_in);
    printf("%c \n", the_w);
    
    char letters[] = {'a','b','c'};
    int w = 0;
    while (w < 3) {
        printf("letter at %d is %c\n", w, letters[w]);
        ++w;
    }
    
    int foo = 20;
    int barr = 15;
    int output = funky_math(foo, barr);
    printf("%d \n", output);
    
    float numbers[] = {11.11, 22.22, 33.33};
    
    printf("length of numbers array is %ld \n", sizeof(numbers)/sizeof(float));
    
    return 0;
}

int funky_math (int a, int b){
    return a + b + 242;
};

