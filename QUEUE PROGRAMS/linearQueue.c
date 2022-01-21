#include <stdio.h>
#include <stdlib.h>
#define size 5

//global variables
int arr[size];
int front = -1;
int rear = -1;

void insertElement(){
  int n;
  printf("\nEnter the element you want to insert: ");
  scanf("%d", &n);
  if(rear == (size-1)){
    printf("\nQueue is full\n");
    return;
  }
  else if(front == -1 && rear == -1){
    front = rear = 0; 
    arr[rear]=n;
  }
  else {
    arr[++rear]=n;
  }
}

void deleteElement(){
  if(front==-1&&rear==-1){
    printf("\nQueue is empty\n");
    return;
  }
  else if(front == rear){
    printf("\nDeleted element: %d", arr[front]);
    front = rear = -1;
  }
  else {
    printf("\nDeleted element: %d", arr[front]);
    front++;
  }
}

void traverseTheList(){
  int i=0;
  if(front == -1 && rear == -1){
    printf("\nQueue is empty\n");
    return;
  }
  else {
    printf("\n");
    for(i=front; i<=rear; i++){
      printf("%d ", arr[i]);
    }
  }
  printf("\n");
}

void count(){
   int i=0, c=0;
  if(front == -1 && rear == -1){
    printf("\nQueue is empty\nCount: 0");
    return;
  }
  else {
    for(i=front; i<=rear; i++){
      c++;
    }
  }
  printf("\nCount: %d\n", c);
}

int main(){
	int ch;
	printf("\n\n------------------------------------\n");
	printf("            LINEAR QUEUE               ");
	printf("\n------------------------------------\n\n");
	do{
		printf("\n1--->Insert\n2--->Delete\n3--->Traverse\n4--->Count\n5--->EXIT\nEnter Choice: ");
		scanf("%d", &ch);
		switch(ch){
			case 1: insertElement(); break;
			case 2: deleteElement(); break;
			case 3: traverseTheList(); break;
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
