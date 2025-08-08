#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct {
    char result[10];
    char operand1[10];
    char op[3];     
    char operand2[10];
} Expression;

int isSameExpression(Expression e1, Expression e2) {
    if (strcmp(e1.op, e2.op) != 0)
        return 0;

    if ((strcmp(e1.operand1, e2.operand1) == 0 && strcmp(e1.operand2, e2.operand2) == 0) ||
        ((strcmp(e1.op, "+") == 0 || strcmp(e1.op, "*") == 0) &&
         (strcmp(e1.operand1, e2.operand2) == 0 && strcmp(e1.operand2, e2.operand1) == 0))) {
        return 1;
    }
    return 0;
}

int main() {
    Expression expr[MAX], optimized[MAX];
    int n, i, j, k = 0;

    printf("Enter number of expressions: ");
    scanf("%d", &n);

    printf("Enter expressions in the form result = operand1 operator operand2\n");
    for (i = 0; i < n; i++) {
        scanf("%s = %s %s %s", expr[i].result, expr[i].operand1, expr[i].op, expr[i].operand2);
    }

    for (i = 0; i < n; i++) {
        int found = 0;
        for (j = 0; j < k; j++) {
            if (isSameExpression(expr[i], optimized[j])) {
                printf("Eliminating common subexpression: %s = %s %s %s (Replaced by %s)\n",
                       expr[i].result, expr[i].operand1, expr[i].op, expr[i].operand2, optimized[j].result);
                found = 1;
                break;
            }
        }
        if (!found) {
            optimized[k++] = expr[i];
        }
    }

    printf("\nOptimized Code:\n");
    for (i = 0; i < k; i++) {
        printf("%s = %s %s %s\n", optimized[i].result, optimized[i].operand1, optimized[i].op, optimized[i].operand2);
    }

    return 0;
}

