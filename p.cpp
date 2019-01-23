#include<stdio.h>
#include<iostream>
using namespace std;


int main(){

 int n,i,j,k;

 printf("\nEnter the value of n. ");
 scanf("%d",&n);

 for(i=1;i<=n;i++){

       for(j=1;j<=n;j++){
           printf("%d",i);

           if((i-2)>0)
           {
               for(k=1;k<=(i-2);k++)
               printf("0");
           }

          printf("%d",i);
       }
       printf("\n");
 }  
    
    return 0;
}