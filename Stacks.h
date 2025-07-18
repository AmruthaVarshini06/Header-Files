#ifndef STACK_H
#define STACK_H
#include<iostream>
#define MAX 100
using namespace std;
struct stack{
	int st[MAX];
	int top = -1;
	
	void push(int n){
	    if(top == MAX - 1){
	        cout << "Stack is overflowed.";  // If the stack is filled then it returns
	    }
	    st[++top] = n;  //Else it first increament the top and then assign the value to the stack
	}
	
	void insert(int n){
		push(n);  //Helps to insert the value
	}
	
	bool is_empty(){
		return top = -1;  //Checks whether the stack is empty or not
	}
	
	void pop(){
	    if(top == -1){
	        cout << "Stack is empty.";
	        return;
	    }
	    top--;  //It removes the top element in the stack
	}
	
	void display(){  //It displays the values in the stack
	    if(top == -1){
	        cout << "Stack is empty." << " ";
	    }
		for(int i = 0; i <= top; i++){
	        cout << st[i] << " ";
	    }
		cout << endl;
	}
	
	void peek(){  //It shows the top most element in the stack
	    if(top == -1){
	        cout << "Stack is empty.";
	        return;
	    }
	    cout << st[top];
	}
};
#endif
