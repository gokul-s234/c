# include<stdio.h>
#include<string.h>
int main(){
    char str[]="hello";
    char s[]="hey";
    char s1[]="";
    char s2[]="hey";
    // int length=sizeof(str);
    
    // printf("%d",length);
    // printf("%s",str);
    printf("\n%d",strlen(str));

    // strcpy
    // strcat
    // strcmp

    // strcat
    printf("\n%s",strcat(str,s));

// strcpy

printf("\n%s",strcpy(s1,s));

// strcmp
printf("\n%d",strcmp(s1,s2));

printf("\n%s",str);
printf("\n%s",s1);
printf("\n%s",s);
printf("\n%s",s2);
}

#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int max =arr[0];
    int secound_max=arr[0];
    for(int i=1;i<5;i++){
        if (arr[i]>max){
            secound_max=max;
            max=arr[i];

        }else if (arr[i]>secound_max && arr[i]!=max){
            secound_max=arr[i];

        }
    }
    printf("secound largest element:%d\n",secound_max);
    return 0;

}



#include<stdio.h>
#include<string.h>

void main(){
    char s[200];
    int count=0,i;

    printf("enter the string :\n");
    scanf("%[^\n]s",s);
    for(i=0;s[i] !='\0';i++){
        if(s[i]=='5'&& s[i+1]!='8')
        count++;

    }
    printf("number of words in given string are:%d\n",count+1);
    return 0;
}


#include<stdio.h>
int main(){
    char s[]="programming is fun";
    int i;
    for (i=0;s[i]!='\0';++i);

    printf("length of the string:%d",i);
    return 0;

}


#include<stdio.h>
#include<string.h>
int main(){

char str[]="hello";
char str2[]="man";
printf("\n%s",strcat(str,str2));
return 0;
}


#include<stdio.h>
#include<string.h>

int main(){
    char str[20];
    printf("enter a string");
    scanf("%s",&str);
    int i,len,flag=0;
    len=strlen(str);
    for(i=0;i<len;i++){
        if(str[i]!=str[len-i-1]){
            flag=1;
            break;

        }
    }

    if(flag)
    printf("%s is not palidrome",str);
else
printf("%s is a palidrome",str);
return 0;

}


#include<stdio.h>
#include<string.h>
int mai(){
    int n=100;
    char str[n];
    printf("input string:");
    gets(str);

    char letter;
    printf("input letter to be searched");
    letter=getchar();
    int cnt=0;
    for(int i=0;str[i];i++){
        if(str[i]==letter)
        {
            cnt++;
        }

    }
    printf("\nthe value'%c'has occured %d time in the string \n",letter,cnt);
    return 0;
}


#include<stdio.h>
void merge_arrays(int arr1[],int m,int arr2[],int n,int arr3[]){
    int i=0,j=0,k=0;

    while (i<m && j<n){
        if (arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];

        }else{
            arr3[k++]=arr2[j++];
        }
    }
    while(i<m){
        arr3[k++]=arr1[i++];

    }
    while (j<n){
        arr3[k++]=arr2[j++];

    }
    
}

int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[5]={2,4,6,8,10};
    int arr3[10];

    merge_arrays(arr1,5,arr2,5,arr3);
    printf("merged array");
    for (int i=0;i<10;i++){
        printf("%d",arr3[i]);

    }
    printf("\n");
    return 0;
}
 


 













 
   




 