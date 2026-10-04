#include <stdio.h>
#include <stdlib.h>

int main() {
    char *ops[] = {"5", "2", "C", "D", "+"};
    int n = 5;
    int stack[100];
    int top = -1;

    for (int i = 0; i < n; i++) {
        if (ops[i][0] >= '0' && ops[i][0] <= '9') {
            stack[++top] = atoi(ops[i]);
        } 
        else if (ops[i][0] == 'C') {
            top--;
        } 
        else if (ops[i][0] == 'D') {
            stack[++top] = 2 * stack[top - 1];
        } 
        else if (ops[i][0] == '+') {
            stack[++top] = stack[top - 1] + stack[top - 2];
        }
    }

    int sum = 0;

    for (int i = 0; i <= top; i++)
        sum += stack[i];

    printf("%d\n", sum);

    return 0;
}