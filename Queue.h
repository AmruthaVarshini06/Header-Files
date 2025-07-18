#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

#define MAX 100

struct queue{
int queue[MAX];
int rear = -1, front = -1;

void enqueue(int val){
	if(rear == MAX - 1){
    cout <<" queue is overflown" << endl;
  }
	else if(rear == -1 && front == -1){  // If queue is empty increment both rear, front
		rear++;
		front++;
		queue[rear] = val;  // Store val at rear pos
	}
	else{
    queue[++rear] = val;  // Increment rear store at that pos
  }
}

void dequeue(){
	if(rear == -1 && front == -1){
	cout <<" queue is empty" << endl;
	}
	else if(rear == front){  //If rear and front equal queue becomes empty so point both to -1
		rear = front = -1;
	}
	else ++front;  //Pop element
}

void peek (){
 	if( rear == -1){
    cout << " queue is empty" << endl;
  }
 	else{
 	cout << "peek element is :" << queue[rear] << endl;
 }
 }

 void display(){
	if(rear == -1 && front == -1){
		cout << "queue is empty" << endl;
	}
	cout <<" queue elements are :";
	for(int i = front; i < rear+1; i++){
	cout <<queue[i] <<" ";
	}
}
};
#endif
