/*
WAP to write a menu driven program to perform following stack operations:
Press 1 for making empty stack
Press 2 for push operation
Press 3 for Pop operation
Press 4 for Peek operation
Press 5 for displaying Item in Stack
*/
#include<iostream>
#include<conio.h>
#define max 10
using namespace std;
int main(){
	cout<<"Press 1 for making empty stack"<<endl;
	cout<<"Press 2 for Push operation"<<endl;
	cout<<"Press 3 for Pop operation"<<endl;
	cout<<"Press 4 for Peek operation"<<endl;
	cout<<"Press 5 for displaying item in stack"<<endl;
	int stack[max],i,choice,top=0,count=0;
	char ch;
	do{
		cout<<"Enter your choice: ";
		cin>>choice;
		switch(choice){
			case 1:
				top=-1;
				cout<<"Stack is made empty"<<endl;
				break;
				case 2: 
				if(top==max-1){
					cout<<"Stack Overflow"<<endl;
					
				}
				else{
					int element;
					top++;
					cout<<"Enter element to push in your stack: ";
					cin>>element;
					stack[top]=element;
				}
				break;
				case 3: 
				if(top<0){
					cout<<"Stack is empty"<<endl;
				}
				else{
					int temp;
					temp=stack[top];
					top--;
					cout<<"Popped element is: "<<temp<<endl;
				}
				break;
				case 4: 
				if(top<0){
					cout<<"Stack is empty"<<endl;
					
				}
				else{
					cout<<stack[top];
				}
				break;
				case 5: 
				if(top<0){
					cout<<"Stack is empty"<<endl;
				
				}
				else{
					if(count==1){
						top++;
						count--;
					}
					for(i=top;i>0;i--){
						cout<<stack[i]<<endl;
					}
				}
				break;
				default:
					cout<<"Invalid number!!!"<<endl;
					
			
		}
		cout<<"Do you want to continue?(y/n): "<<endl;
		cin>>ch;
		
		if(ch=='y' && choice==1){
			count=1;
		}
		
	}while(ch=='y');
	return 0;
}


