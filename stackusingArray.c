#include<stdio.h>
int stack[10],i,top,x,choice,n;
void push();
void pop();
void display();
int main(){
top=-1;
printf("Enter size:");
scanf("%d",&n);
printf("\nStack implementation using array:");
do{
printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
        push();
        break;
}
case 2:
{
        pop();
        break;
}
case 3:
{
        display();
        break;
}
case 4:
{
        break;

}
default:
{
        printf("Invalid choice!");
}
}}
while(choice!=4);
return 0;
}
void push(){
if(top>=n-1){
printf("Stack noverflopw!:");
}
else{
printf("Enter value:");
    scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop(){
if(top<=-1){
printf("Stack underflow!:");
}
else{
printf("The popped element is : %d",stack[top]);
top--;
}
}
void display(){
if (top>=0){
printf("Elements in stack are:\n");
for(i=top;i>=0;i--)
printf("%d\t",stack[i]);
}
else{
printf("\nEmpty stack\n");
}
}


                             