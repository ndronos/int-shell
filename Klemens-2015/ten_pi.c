// (Klemens, 2015) Appendix A: C 101 pp. 347
// Variables have to be declared

#include <stdio.h>
#include <math.h>                                             // M_PI

int main(){

    double pi= 3.14159265;                              //POSIX defines the constant M_PI in math.h, by the way. // M_PI
    int count= 10, count2, count3=30;                   //count2 is uninitialized

    printf("%g \n", pi);
    printf("%g times %i = %g.\n", pi, count, pi*count);

    printf("FAILING: count2 uninitialized... \n");
    printf("%g times %i = %g.\n", pi, count2, pi*count2);     // count2 value is 0  // warnining: ... [-Wuninitialized]
    printf("%g times %i = %g.\n", pi, count2=20, pi*count2);  // warning: ... may be undefined [-Wsequence-point] 
                                                              // count2 value is 20, but pi*count2 for GCC value is 0,
                                                              // both lines, for CLang after assignment value is correct
                                                              // but uninitialized count2 has changeable (random?) value.
    printf("count2 value is %i \n", count2);                  // check: count2 value is 20!
    printf("%g times %i = %g.\n", pi, count2, pi*count2);     // expected: initialized as 20! 

    printf("M_PI = %g \n", M_PI);                             // M_PI
    printf("%g times %i = %g.\n", M_PI, count3, M_PI*count3); // M_PI

}

