#include <stdio.h>
void swapping(int,int);
void main(){
int i,j;
char space;
printf("enter the 1st num\n");
scanf("%d",&i);
//scanf("%c",space);
printf("\n enter the 2nd num\n");
scanf("%d",&j);
swapping(i,j);
}
void swapping(int x,int y){
printf("before swapping\n");
printf("x= %d",x);
printf("   y= %d",y);

x=x+y;
y=x-y;
x=x-y;

printf("\n after swapping\n");
printf("x= %d",x);
printf("     y= %d",y);

}
