// (Klemens, 2015) Appendix A: C 101 pp. 355-356

#include <stdio.h>
#include <math.h>     //The square root function is declared here.

int main(){

    double x = 49;

    printf("The truncated square root of x is %g. \n", x > 0 ? sqrt(x) : 0);

}

