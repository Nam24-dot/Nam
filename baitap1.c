#include <stdio.h>
#include <stdarg.h>

double sum(int tong, ...) {
    double sum = 0;
    va_list args;
    va_start(args, tong);
    for (int i = 0; i < tong; i++) {
        sum += va_arg(args, double);
    }
    va_end(args);
    return sum;
}

int main() {
    double s1 = sum(3, 1.2, 2.4, 3.6);
    double s2 = sum(5, 1.1, 2.2, 3.3, 4.4, 5.5);
    printf("tong cua 1.2, 2.4, 3.6 = %f\n", s1);
    printf("tong cua 1.1, 2.2, 3.3, 4.4, 5.5 = %f\n", s2);
    return 0;
}
