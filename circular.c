#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int queue[SIZE];
int front=-1,rear=-1;
void enqueue(int value)
{
if ((front==0 && rear==SIZE-1)||(rear==(front-1)%(SIZE-1)))
{
printf("Queue is full\n");
}
else if(front==-1)
{
front=rear=0;
queue[rear]=value;
printf("front=%d\nrear=%d\n",front,rear);
}
else{
rear++;
queue[rear]=value;
printf("front=%d\n rear=%d\n",front,rear);

}
}
void dequeue(){
if(front==-1){
printf("Queue is empty");
}
else if(front==rear){
printf("deleted element is:%d\n",queue[front]);
printf("front=%d\nrear=%d\n",front,rear);
front=rear=-1;
}
else if(front==SIZE-1){
printf("deleted element : %d\n",queue[front]);
front=0;
printf("front=%d\nrear=%d\n",front,rear);
}
else{
printf("deleted element:%d\n",queue[front]);
front++;
printf("front=%d\nrear=%d\n",front,rear);
}
}
int search(int value){
if(front==-1){
printf("Queue is empty and cannot search elements.\n");
return-1;
}
else{
int i=front;
if(front<=rear){
while(i<=rear){
if(queue[i]==value){
printf("entered %d found at index %d.\n",value,i);
return i;
}
i++;
}
}
else{
while(i<=SIZE-1){
if(queue[i]==value){
printf("Entered %d founf at index %d.\n",value,i);
return i;
}
i++;
}
i=0;
while(i<=rear){
if(queue[i]==value){
printf("Entered %d found at index  %d.\n",value,i);
return i;
}
i++;
}
}
printf("element %d not found in the queue.\n",value);
return-1;
}
}
void display(){
if(front==-1){
printf("Queue is empty\n");
}
else{
int i=front;
printf("queue elements:\n");
if(front<=rear){
while(i<=rear){
printf("%d\n",queue[i]);
i++;
}
}
else{
while(i<=SIZE-1);
{

printf("%d\n",queue[i]);
i++;
}
i=0;
while(i<=rear){
printf("%d\n",queue[i]);
i++;
}
}
printf("\n");
}
}
int main(){
int choice,value;
do{
printf("1.enqueue.\n2.dequeue\n3.search\n4.display\n5..exit\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice){
case 1:
printf("Enter the values to be entewred :");
scanf("%d",&value);
enqueue(value);
break;
case 2:
dequeue();
break;
case 3:
printf("Enter the element you want to search:");
scanf("%d",&value);
search(value);
break;
case 4:
display();
break;
case 5:
exit(0);
default:
printf("Invalid chooice! please enter  a validd option.\n");
}
}
while(choice!=5);
return 0;
}

