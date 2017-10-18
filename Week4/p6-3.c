#include <stdio.h>

void rev(int i, int num) {
    if(i != (num + 1)) {
        printf("%d", i++);
        return rev(i, num);
    } else {
        return;
    }
}

int main() {
    int num;
    scanf("%d", &num);
    rev(1, num);
    return 0;
}