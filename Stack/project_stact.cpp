#include <stdio.h>
#include <string>

void parenthesisCheck(std::string input);
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

	switch(testOption) {
		case 1: 
			parenthesisCheck("parenthesisCheck");
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

void parenthesisCheck(std::string input){
	printf("%s\n", input.c_str());
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
