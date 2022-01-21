#include <stdio.h>
#include <string.h>
#define size 100

//creating the stack
char arr[size];
int top=-1;

//push operation
void push(char ch){
  if(top==size-1) {
    printf("\nSTACK OVERFLOW\n");
  return;
  }
  arr[++top]=ch;
}

//pop operation;
char pop(){
  if(top==-1) {
    printf("\nSTACK UNDERFLOW\n");
    return 0;
  }
  return arr[top--];
}

int main(void) {
  char e[size];
  //Read the expression from the user
  printf("\nEnter your expression (Note: Do not use spaces): ");
  scanf("%s", e);

  //pushing the paranthesis into stack
  for(int i=0; i<strlen(e); i++) {
    if(e[i]=='(' || e[i]=='{' || e[i]=='['){
      push(e[i]);
    }
    else if(e[i]==')' || e[i]=='}' || e[i]==']'){
        if(e[i]==')') {
          if(arr[top]=='('){
            pop();
          }
          else {
            printf("\nUNBALANCED EXPRESSION\n");
            break;
          }
        }
        if(e[i]=='}') {
        if(arr[top]=='{'){
          pop();
        }
        else {
          printf("\nUNBALANCED EXPRESSION\n");
          break;
        }
      }
      if(e[i]==']') {
        if(arr[top]=='['){
          pop();
        }
        else {
          printf("\nUNBALANCED EXPRESSION\n");
          break;
        }
      }
    }
  }
  if(top==-1) printf("\nBALANCED EXPRESSION\n");
  getchar();
  return 0;
}
