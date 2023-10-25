#include <stdio.h>

        int sum(int a, int b) {
        return a + b;
    }



    int main(int argc, char *argv[]) {
        //int a = 3;
        //int b = 5;
        int ret;

        ret = sum(3, 5);
        printf("%d\n", ret);
       

        return 0;
    }


