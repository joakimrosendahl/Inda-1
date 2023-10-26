#include <stdio.h>

    int sum(int a, int b) {
        return a + b;
    }

    int difference(int a, int b) {
        return a - b;
    }

    double avrege(double a, double b) {
        return (a + b)/2;
    }

    int main(int argc, char *argv[]) {

        printf("%d\n", sum(3, 5));
        printf("%d\n", difference(2, 5));
        printf("%f\n", avrege(3.0, 4.0));
       

        return 0; 
    }