#include<stdio.h>
#include<stdlib.h>
#define MAX 6
int stk[MAX];
int top=-1;

int stackFull(){
	if(top==MAX-1)
		return 1;
	else
		return 0;
}

int stackEmpty(){
	if(top==-1)
		return 1;
	else
		return 0;
}

void push(char s){
		if(stackFull()==1)
		{
			printf("StackOverflow");
			return;
		}
		top+=1;
		stk[top]=s;
}

void pop(){
		if(stackEmpty()==1)
		{
			printf("StackUnderflow");
			return;
		}
		
		
		top-=1;
}

int main()
{
	char str[50]="[[()]";
	int i;
	for(i=0;str[i]!='\0';i++){
		
		
		
		if(str[0]==')' || str[0]==']'||str[0]=='>'||str[0]=='}')
			{
				printf("%d",i+1);	
				break;
		}
		else if(str[i]=='<' || str[i]=='[' || str[i]=='(' || str[i]=='{') {
			push(str[i]);
		}
		else if(str[i]=='>' && stk[top]=='<')
			pop();
		else if(str[i]==')' && stk[top]=='(')
			pop();
		else if(str[i]==']' && stk[top]=='[')
			pop();
		
		else if(str[i]=='}' && stk[top]=='{')
			pop();
		else
			{	
			if(stackEmpty()==1 && i!=0)
				printf("\n0");
			else
				printf("\n%d",i+1);
			break;
				
			}
	
	
	}

	if(str[i]=='\0')
			printf("\n%d",i+1);
	return 0;
}


