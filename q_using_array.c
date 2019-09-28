#include<stdio.h>
#include<conio.h>
#define size 4

void enqueue(int);
void dequeue();
void display();

int queue[size], front=-1, rear=-1;

void main(){
		printf("__________________MENU__________________");

	while(1)
	{
	printf("\n1.insert\n2.delete\n3.display\n4.exit\n");
	int choice, value;
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("\n enter value");
			scanf("\n%d",&value);
			enqueue(value);
			break;
		case 2:dequeue();
				break;
		case 3:display();
				break;
		case 4:exit(0);
				break;
		default:
			printf("\n check your input once");
	}
}
}
void enqueue(int v){
	if(rear==size-1){
		printf("\n queue is full");
		
	}
	else{
		if(front=-1)
			front
			=0;
		rear++;
		queue[rear] = v;
		printf("\n value inserted succesfully  %d", v);
	}
}
void dequeue(){
	if(front==rear){
		printf("\n queue is empty");
		
	}else{
		printf("\n Deleted item is %d",queue[front]);
		front++;
		int j;
		for (j=0;j<rear-1;j++){
			queue[j] = queue[j+1];
		}
		rear--;
		
	}
}
void display(){
	if(front==-1){
		printf("\n Queue is empty");
	}
	else{
		int i;
		for(i=front;i<=rear;i++){
			printf("%d-%d>",queue[i],i);
		}
	}
}
