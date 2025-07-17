#include "Queue.h"
int main(){
	queue q;
	q.enqueue(10);  //It adds an element 10 to the of the queue
	q.enqueue(20);  //It adds an element 20 to the of the queue
	q.enqueue(30);  //It adds an element 30 to the of the queue
	q.enqueue(40);  //It adds an element 40 to the of the queue
	q.dequeue();  //It removes and first element of the queue
	q.peek();  //It allows to view the element at front of the queue
	q.display();  //It displays the elements in the queue
}
