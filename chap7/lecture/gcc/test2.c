/* test3 */
#include <stdio.h>

int a;

int main() {
        int y, z;
        static int x = 3;
        y = 5;
        z = x + y;
        printf("%d\n", z);

        return 0;
}
