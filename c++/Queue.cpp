#include<iostream>
#include <stdlib.h>
using namespace std;

struct queue
{
    int size;
    int f;
    int r;
    int* arr;
};

int isFull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}


void enqueue(struct queue *q, int val){
    if(isFull(q)){
        printf("This Queue is full\n");
    }
    else{
        q->r++;
        q->arr[q->r] = val;
        printf("Enqued element: %d\n", val);
    }
}

int isEmpty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}


int dequeue(struct queue *q){
    if(isEmpty(q)){
    	cout<<"the queue is empty";
    	return 0;
    }
    	else{
    		q->f++;

    		 return q->arr[q->f];
    		}
    		  


    	}
    
    




int main(){
	struct queue q;
	q.size=10;
	q.r=q.f=-1;
	q.arr=(int*)malloc(q.size*sizeof(int));
  enqueue(&q, 12);

    // cout<<q.arr[0];
  cout<<"The element dequeued is "<<dequeue(&q)<<endl;

	return 0;
}