#include<iostream>
#include <stdio.h>
#include <string>

struct Node
{
	char data;
	struct Node *next;
}*top=NULL;


void push(char x);
char pop();
void display();
int parenthesisCheck(std::string input);
void infixToPostFix(std::string input);
void postfixToInfix(std::string input);
void infixToPrefix(std::string input);
void prefixToInfix(std::string input);
void prefixToPostfix(std::string input);
void postfixToPrefix(std::string input);

int main(){

	START:

	printf("\nSelect anyone by number to test:\n");
	printf("1. Parenthesis match test\n");
	printf("2. Infix to postfix convert\n");
	printf("3. Postfix to Infix convert\n");
	printf("4. Infix to Prefix convert\n");
	printf("5. Prefix to Infix convert\n");
	printf("6. Prefix to Postfix convert\n");
	printf("7. Postfix to Prefix convert\n");

	int testOption;
	scanf("%d",&testOption);

	std::string input;
	std::cout<<"please input your expression:"<<std::endl;
	std::cin>>input;

	switch(testOption) {
		case 1: 
			if(parenthesisCheck(input) == 1){
				printf("balanced\n");
			}else{
				printf("not balanced\n");
			}
			break;
		case 2: 
			infixToPostFix("infixToPostFix");
			break;
		case 3: 
			postfixToInfix("postfixToInfix");
			break;
		case 4: 
			infixToPrefix("infixToPrefix");
			break;
		case 5: 
			prefixToInfix("prefixToInfix");
			break;
		case 6: 
			prefixToPostfix("prefixToPostfix");
			break;
		case 7: 
			postfixToPrefix("postfixToPrefix");
			break;
		default:
			printf("wrong selection\n");				
	}

	goto START;
}

void push(char x) {
	struct Node *temp;
	temp = (struct Node*)malloc(sizeof(struct Node));

	if(temp == NULL){
		printf("stack overflow\n");
	}else{
		temp->data = x;
		temp->next = top;
		top = temp;
	}
}

char pop() {
	struct Node *temp;
	char x = -1;

	if(top == NULL) {
		printf("our stack is empty\n");
	}

	else{
		temp = top;
		top = top->next;
		x = temp->data;
		free(temp);
	}

	return x;
}

void display(){
	struct Node *p;
	p=top;
	while(p!=NULL){
		std::cout<< p->data ;
		p = p->next;
	}
	std::cout<<std::endl;
}

int parenthesisCheck(std::string input){
	int i = 0;
	char t;

	for (int i = 0; input[i] != '\0'; i++)
	{
		if(input[i] == '(' || input[i] == '{' || input[i] == '['){
			push(input[i]);
			//display();
		}else if(input[i] == ')' || input[i] == '}' || input[i] == ']'){
			if(top == NULL){
				return 0;
			}else{
				t = pop();
				//display();
				if(input[i] == ')' && t != '('){
					return 0;
				}

				if(input[i] == '}' && t != '{'){
					return 0;
				}

				if(input[i] == ']' && t != '['){
					return 0;
				}
			}
		}
	}

	std::cout<<"debug:"<<top<<std::endl;

	if(top == NULL){
		return 1;
	}else return 0;
}

void infixToPostFix(std::string input){
	printf("%s\n", input.c_str());
}

void postfixToInfix(std::string input){
	printf("%s\n", input.c_str());
}

void infixToPrefix(std::string input){
	printf("%s\n", input.c_str());
}

void prefixToInfix(std::string input){
	printf("%s\n", input.c_str());
}

void prefixToPostfix(std::string input){
	printf("%s\n", input.c_str());
}

void postfixToPrefix(std::string input){
	printf("%s\n", input.c_str());
}
