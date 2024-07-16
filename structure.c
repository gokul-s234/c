 #include<stdio.h>
 struct cl{
    int a;
    float b;
    char s;
 };

 int main(){
    struct cl ob;
    ob.a=8;
    ob.b=4.7;
    ob.s='s';

    printf("%d",ob.a);
    printf("\n%f",ob.b);
    printf("\n%c",ob.s);

 }



 
