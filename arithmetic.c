#include<stdio.
int add(int X,int Y){
int result=X+Y;
return result;
}
int main(){
int a=20,b=40;
int c=add(a,b);
printf("Addition:%d",c);
}