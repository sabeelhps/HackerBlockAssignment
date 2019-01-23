#include<stdio.h>
int main(){
    int i,j,n,k=1;
    printf("enter the values\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=2*i-1;j++){
            if(j>=n+1-i&&j<=n-1+i)
                printf("%d",k);
            else
                printf(" ");        
        }
        k=k+1;
        printf("\n");
    }


    return 0;
}