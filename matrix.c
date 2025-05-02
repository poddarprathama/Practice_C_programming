#include<stdio.h>
int main(){

int r,c;
printf("Enter rows and columns: ");
scanf("%d %d",&r,&c);
int mat[r][c],i,j,sum=0;
printf("Enter elements of the matrix:\n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&mat[i][j]);
    }
}
printf("\n matrix \n");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d \t",&mat[i][j]);
        sum=sum+mat[i][j];
    }
    printf("\n");
}
printf("\n sum=%d",sum);
return 0;
}
