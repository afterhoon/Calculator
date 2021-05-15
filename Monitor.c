#include <stdio.h>

void PrintMonitor() {
    printf("계산식을 입력해주세요\n");
    printf("%3s %3s %3s %3c\n", "1/x", "x^2", "CE", C);
    printf("%3s %3c %3s %3c\n", "÷", 'x', '-', '+');
    printf("===========================================\n");
    printf("ex) 10 + 3\n");
    printf("===========================================\n");
}

int main () {
    PrintMonitor();

    return 0;
}