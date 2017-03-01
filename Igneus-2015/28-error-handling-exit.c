// (Igneus, 2015) Error Handling

// man fprintf // give raw input and detailed information

#include <stdio.h>
#include <stdlib.h>

int main() {

    int value1 = 5;
    int value2 = 0;
    int value3;

    if( value2 == 0 ){
        fprintf(stderr, "Legendary Division by Zero error! \nExiting... \n");
        exit(EXIT_FAILURE); //EXIT_FAILURE; //race condition  //exit(-1);
    }
    value3 = value1 / value2;
    fprintf(stderr, "Answer is: %d \n", value3);

    EXIT_SUCCESS; //exits fine // exit(0);  //return 0;    
}

