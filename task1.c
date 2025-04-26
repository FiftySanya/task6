#include <stdio.h>

int main() {
    int x;  // Неініціалізована змінна
    int y = x + 1;  // Читання неініціалізованого значення x
    printf("y = %d\n", y);
    return 0;
}
