#include "Stacks.h"
int main(){
	stack s;  // Creates a stack with name s
	s.push(10);  // Inserts the value 10 into the stack
	s.push(20);  // Inserts the value 20 into the stack
	s.push(30);  // Inserts the value 30 into the stack
	s.pop();  // It deletes the top most element in the stack
	s.display();  //It displays the values in the stack
}
