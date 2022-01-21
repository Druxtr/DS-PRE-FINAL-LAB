//REVERSING A STRING USING STACK OPERATIONS
#include <stdio.h>
#include <string.h>
#define size 100

//stack operations
char arr[size];
int top=-1;

void push(char ch){
  if(top==size-1){
    printf("\nStack Overflow\n");
    return;
  }
  else {
    arr[++top]=ch;
  }
}

char pop(){
  if(top==-1){
    printf("\nStack Underflow\n");
    return 0;
  }
    return arr[top--];
}

int main(void) {
  int k; char str[100], revstr[100];
  //take input of the string 
  printf("\nEnter your string: ");
  fgets(str, 100, stdin);
  str[strcspn(str,"\n")]=0;
  printf("\nOriginal string: ");
  printf("%s", str);

  //reversing it
  for(int i=0; i<strlen(str); i++){
    push(str[i]);
  }
  
  for(k=0; k<strlen(str); k++){
    revstr[k]=pop();
  }
  revstr[k]='\0';
  printf("\nReversed string: %s", revstr);
  getchar();
  return 0;
}
