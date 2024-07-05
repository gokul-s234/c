
#include<stdio.h>
#include<string.h>
#include<math.h>
int main(void)
{

    char a[]="hello world";
    printf("%s",a);

    char b[]="gokul";
    printf("\n%s",b);

    int f;
    printf("\nenter a number");
    scanf("\n%d",&f);
    printf("the number is%d",f);

    int k=4,h=7,sum;
    sum=k+h;
    printf("\nsum=%d",sum);

    int i,n= 9;
    printf("\nenter the number");
    scanf("%d",&i);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        
        printf("%d is prime",i);
        
    
    else 
        printf("%d is not prime",i);

    }

    float r=7.8,y=9.5,mul;
    mul =r*y;
printf("\n%f",mul);



    int z=34,x=54;
    printf("\ndisplay the number z=%d x=%d",z,x);
    z=z+x;
    x=z-x;
    z=z-x;
    printf("\nafter swapping z=%d x=%d",z,x);



    float fahrenheit,celsius;
    fahrenheit=64;
    celsius=((fahrenheit-32)*5)/9;
    printf("\n\n temperature in celsius is %f",celsius);




    int principal, rate, time, interest;
    printf("\nEnter the principal: ");
    scanf("%d", &principal);
    printf("Enter the rate: ");
    scanf("%d", &rate);
    printf("Enter the time: ");
    scanf("%d", &time);
    interest=(principal*rate*time)/100;
    printf("the simple interest is%d",interest);

    

    int pr,ti;
    float ra,ci;
    printf("\nenter the principal amount ");
    scanf("%d",&pr);   
    printf("\nenter the rate of interest");
    scanf("%f",&ra);  
    printf("\nenter the time period");
    scanf("%d",&ti);
    ci=pr*pow((1+ra/100),ti);
    printf("\nenter the compound interest %f",ci);




   double length,width,area,perimeter;
   printf("\nenter the length");
   scanf("%lf",&length);
   printf("\nenter the width");
   scanf("%lf",&width);
   area=length*width;
   perimeter=(length+width)*2;
   printf("\narea:%lf",area);
   printf("\nperimeter:%lf",perimeter);

   














    


    


return 0;


}

