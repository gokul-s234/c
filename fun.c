#include <stdio.h>

// void hello(){ 
//    int a=10;
//    int b=20;
//    int c=a+b;
//    printf("%d",c);
// }

// parametrs

void sum(int a,int b){  //parameters
    int c=a+b;
    printf("%d",c);
}

int main(){
    printf("hello");
    // hello();
    sum(4,6);//arguments
    return 0;
}