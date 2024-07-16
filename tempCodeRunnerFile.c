

#include<stdio.h>
int main() {
    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i=0; i<rows; i++) {
        for(j=i; j>=0; j--) {
            printf("%d ", binomialCoefficient(i, j));
        }
        printf("\n");
    }

    return 0;
}

int binomialCoefficient(int n, int k) {
    if(k==0 || k==n)
        return 1;
    else
        return binomialCoefficient(n-1, k-1) + binomialCoefficient(n-1, k);
}