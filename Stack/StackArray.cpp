#include<stdio.h>
#include<stdlib.h>

struct Stack
{
	int size;
	int top;
	int *S;
};

void create(struct Stack *st);
void display(struct Stack st);
void push(struct Stack *st, int x);
int pop(struct Stack *st);

int main(){
	struct Stack st;

	printf("Enter Stack size:");
	scanf("%d", &st.size);

	create(&st);
	
	push(&st,4);
	push(&st,7);
	push(&st,2);
	push(&st,5);

	display(st);

	printf("pop value: %d", pop(&st));
	printf("\n");

	display(st);

	push(&st, 100);
	display(st);

	return 0;
}

void create(struct Stack *st){
	st->top = 0;
	st->S =(int *) malloc(st->size*sizeof(int));
}

void push(struct Stack *st, int x){
	if(st->top == st->size){
		printf("Stack Overflow");
	}else{
		st->S[st->top] = x;
		st->top++;
	}
}

void display(struct Stack st){
	for(int i = (st.top-1); i>=0 ; i--){
		printf("%d ",st.S[i]);
	}
	printf("\n");
}

int pop(struct Stack *st){
	int x = -1;
	if(st->top == 0){
		printf("Stack is empty");
	}else{
		x = st->S[st->top-1];
		st->top--;
	}

	return x;
}

