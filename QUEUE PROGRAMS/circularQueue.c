#include <stdio.h>
#include <stdlib.h>
#define n 5
int queue[n];
int front=-1;
int rear=-1;

void enqueue() {
	int a;
	printf("\nEnter the element: ");
	scanf("%d", &a);
	if((rear+1)%n==front) printf("\nOVERFLOW\n");
	else if(front==-1 && rear==-1){
		front = rear = 0; 
		queue[rear]=a;
	}
	else {
		rear=(rear+1)%n;
		queue[rear]=a;
	}
}

void dequeue(){
	if(front==-1 && rear==-1) printf("\nUNDERFLOW\n");
	else if (front == rear ) {
		printf("\nDeleted element: %d\n", queue[front]);
		front=rear=-1;
	}
	else {
		printf("\nDeleted element: %d\n", queue[front]);
		front=(front+1)%n;
	}
}

void traversal() {
	int i=front; 
	if(front == -1 && rear == -1) printf("\nUNDERFLOW\n");
	else {
		printf("\n");
		while(i!=rear){
			printf("%d ", queue[i]);
			i=(i+1)%n;
		}
		printf("%d\n", queue[rear]);
	}
}

void count(){
	int i=front, c=0; 
	if(front == -1 && rear == -1) printf("\nUNDERFLOW\n");
	else {
		printf("\n");
		while(i!=rear){
			c++;
			i=(i+1)%n;
		}
	}
  printf("\nCount: %d\n", c+1);
}

int main(){
	int ch;
	printf("\n\n------------------------------------\n");
	printf("            CIRCULAR QUEUE               ");
	printf("\n------------------------------------\n\n");
	do{
		printf("\n1--->Insert\n2--->Delete\n3--->Traverse\n4--->Count\n5--->EXIT\nEnter Choice: ");
		scanf("%d", &ch);
		switch(ch){
			case 1: enqueue(); break;
			case 2: dequeue(); break;
			case 3: traversal(); break;
			case 4: count(); break;
			case 5: printf("\n\n------------------------------------\n");
				printf("            THANK YOU            ");
				printf("\n------------------------------------\n\n");
				exit(0); 
			default: printf("INVALID INPUT");
		}
	}while(ch!=5);

return 0;
}










