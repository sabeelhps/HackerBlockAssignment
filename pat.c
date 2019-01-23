#include<stdio.h>

int main(){
    int n,i,j,k;
    printf("\nEnter the value of n. ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        printf("%d",i);
            if((i-2)>0)
            {
               for(k=1;k<=(i-2);k++)
               printf("0");
            }
            if(i>=2)
                printf("%d",i);
       printf("\n");
 }  
    return 0;
}