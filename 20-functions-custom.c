// (Igneus, 2015) Custom Functions

//  At least one function
//  the main function         keep at bottom

#include <stdio.h>

int cal(int value1, int value2) {

    int result;

    if (value1 > value2) {
        result = value1;
    } else
        result = value2;

    return result;
}


int main() {

    int highScore1 = 100;
    int highScore2 = 200;
    int highest;

    highest = cal(highScore1, highScore2);
    printf("The high score is: %d \n", highest);

    return 0;
}



//  latest standard
//  int main() {
//      return 0;
//  }


//  old days...      // Program ended with exit code: 14
//  void main() {
//  }

