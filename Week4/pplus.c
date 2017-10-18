#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]) {
    printf("%d", (argc - 1));
    return (argc != (strtol(argv[1], NULL, 10)) + 1) ? main(++argc, argv) : 0;
}