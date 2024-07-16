#include<stdio.h>
int main()
{
    int n;
    printf("enter the rows ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
           printf("*");

        }
        printf("\n");

    }
    return 0;
}


#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1||i==n||j==1||j==n)
            {
                printf("*");

            }
            else

            printf(" ");
        }
        printf("\n");
    }
    return 0;
     
}


#include<stdio.h>
int main(){
    int i,j,rows;
    printf("enter the numbr of rows");
    scanf("%d",&rows);
    for(i=rows;i>=1;--i){
    for(j=1;j<=i;++j){
    printf("* ");
    }
    printf("\n");
    }
    return 0;

    
}


#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter the value of n");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");

    }
    return 0;

}



#include<stdio.h>
int main() {
    int i, j, n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>
int main() {
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            if(j == 1 || j == i || i == n) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}


#include<stdio.h>
int main(){
    int i,j,rows;
     printf("enter the numbers of rows");
     scanf("%d",&rows);
     for(i=1;i<=rows;++i){
        for(j=1;j<=i;++j){
            printf("* ");

        }
        printf("\n");

     }
     return 0;
     
}



#include<stdio.h>
int main(){
    int i,j,rows;
    printf("enter the numbers of rows");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=i;j<rows;j++)
        {

            printf(" ");

        }
        for(j=1;j<=(2*i-1);j++)
        {
            if(i==rows || j==1 || j==(2*i-1))
            {
                printf("*");

            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}


#include<stdio.h>

int main() {
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(i=rows; i>=1; i--) {
        for(j=1; j<=rows-i; j++) {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


#include<stdio.h>
int main() {
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for(i=rows; i>=1; i--) {
        for(j=1; j<=rows-i; j++) {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++) {
            if(j==1 || j==(2*i-1) || i==rows)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}


#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i=rows; i>=1; i--) {
        for(j=1; j<=rows-i; j++) {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++) {
            printf("*");
        }
        printf("\n");
    }

    for(i=2; i<=rows; i++) {
        for(j=1; j<=rows-i; j++) {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}



#include<stdio.h>
int main() {
    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++) {
        for(j=1; j<=rows-i; j++) {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++) {
            printf("*");
        }
        printf("\n");
    }

    for(i=rows-1; i>=1; i--) {
        for(j=1; j<=rows-i; j++) {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


#include<stdio.h>
int main(){
    int i,j,rows;
        printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++) {
        for(j=1; j<=rows-i; j++) {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++) {
            if(j==1 || j==(2*i-1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    for(i=rows-1; i>=1; i--) {
        for(j=1; j<=rows-i; j++) {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++) {
            if(j==1 || j==(2*i-1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}


#include<stdio.h>

int main() {
    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i=0; i<rows; i++) {
        for(j=0; j<=i; j++) {
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














 









