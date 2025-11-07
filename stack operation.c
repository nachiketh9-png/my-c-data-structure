#include <stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;
void push(int value) {
	if(top == MAX - 1) {
		printf("Stack Overflow\n");
	} else {
		stack[++top] = value;
		printf("%d pushed\n", value);
	}
}
void pop() {
	if(top == -1) {
		printf("Stack Underflow\n");
	} else {
		printf("%d popped\n", stack[top--]);
	}
}
void peek() {
	if(top == -1) {
		printf("Stack is empty\n");
	} else {
		printf("Top element: %d\n", stack[top]);
	}
}
void display() {
	if(top == -1) {
		printf("Stack is empty\n");
	} else {
		printf("Stack elements: ");
		for(int i = top; i >= 0; i--) {
			printf("%d ", stack[i]);
		}
		printf("\n");
	}
}

int main() {
	push(30);
	push(40);
	push(50);
	display();

	pop();
	display();

	peek();

	return 0;
}
