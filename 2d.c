#include<stdio.h>
int main(){
    int a[2][3]={{1,2,3},{4,5,6}};
    a[1][1]=20;

    printf("%d",a[1][1]);
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("\n %d",a[i][j]);
        }
    }

}



#include<stdio.h>
int main()
{
    int i=0,j=0;
    int arr[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};

    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("arr[%d][%d]=%d\n",i,j,arr[i][j]);

        }
    }

    return 0;
}


#include<stdio.h>
int main(){
  int arr[]={1,2,3,4,5};
  int sum=0;
  int length=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<length;i++){
    sum=sum+arr[i];
  
  }
  printf("sum of all the the element of an arr:%d",sum);
  return 0;

}


#include<stdio.h>
int main(){
    int arr[]={25,11,7,75,56};
    int length=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];

    for(int i=0;i<length;i++){
        if(arr[i]>max)
        max=arr[i];

    }
    printf("largest element present in given array:%d\n",max);

    return 0;

}


#include<stdio.h>
int main(){
    int arr[]={25,11,7,75,56};
    int length=sizeof(arr)/sizeof(arr[0]);
    int min=arr[0];
    for(int i=0;i<length;i++){
        if(arr[i]<min)
        min=arr[i];

    }
    printf("smallest element preset in given array : %d\n",min);
    return 0;

}




#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; 
    int temp, i, j;

    printf("Original array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    for (i = 0, j = 4; i < j; i++, j--) { 
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    printf("\nReversed array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}



#include <stdio.h>    
     
int main()    
{    
     
    int arr[] = {5, 2, 8, 7, 1};     
    int temp = 0;    
        
      
    int length = sizeof(arr)/sizeof(arr[0]);    
        
  
    printf("Elements of original array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }      
        
      
    for (int i = 0; i < length; i++) {     
        for (int j = i+1; j < length; j++) {     
           if(arr[i] > arr[j]) {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }     
    }    
        
    printf("\n");    
           
    printf("Elements of array sorted in ascending order: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);    
    }    
    return 0;    
}















