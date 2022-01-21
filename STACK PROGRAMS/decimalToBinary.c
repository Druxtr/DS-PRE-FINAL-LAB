#include <stdio.h>

//declaring the stack
int arr[100];
int top=-1;

void push(int t){
  if(top==99){
    printf("\nSTACK OVERFLOW\n");
    return;
  }
  arr[++top]=t;
}

int pop(){
  if(top==-1){
    printf("\nSTACK UNDERFLOW\n");
    return -1;
  }
  return arr[top--];
}

int main(void) {
  int n;
  printf("\nEnter a number: ");
  scanf("%d", &n);

  while(n!=0){
    int r=n%2;
    push(r);
    n/=2;
  }  
  getchar();
  printf("Binary: ");
  while(top!=-1){
      printf("%d", pop());
  }
  getchar();
  
  return 0;
}
