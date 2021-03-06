// (Igneus, 2015) Command Line Arguments

//  argv[]    pass arguments and additional information, an array of arguments
//  argv[0]   Application Name        // 0 element is the 1st element
//  argv[1]   Argument                // argc == 2
//  argv[...                          // argc, array

#include <stdio.h>

int main(int argc, const char * argv[]) {

    printf("Program name %s \n", argv[0]);

    if ( argc == 2 ) {
        printf("The argument supplied is %s \n", argv[1]);
    } else if ( argc > 2) {
        printf("Too many arguments supplied. \n");
    } else {
        printf("One argument expected. \n");
    }

    printf("Arguments passed: %d ", argc-1);
    printf("(argc is %d minus 1, which is the program name) \n", argc);

    // tests
    printf("\n");
    printf("%s \n", argv[0]);
    printf("%s \n", argv[1]);
    printf("%s \n", argv[2]);

    printf("%d \n", argc);
/*
    printf("%d \n", &argc[0]); //error?
    printf("%d \n", &argc[1]); //error?
*/

}



