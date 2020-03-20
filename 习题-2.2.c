#include <stdio.h>
#define Maxsize 10

typedef struct {
	int data[Maxsize];
	int length;
} SqList;

int Reverse(SqList *L) {
	int temp,i;
	for(i=0; i<(*L).length/2; i++) {
		temp=(*L).data[i];
		(*L).data[i]=(*L).data[(*L).length-i-1];
		(*L).data[(*L).length-i-1]=temp;
	}
}

int main() {
	int i;
	SqList L;
	L.length=Maxsize-1; 
	for(i=0; i<Maxsize; i++)
		L.data[i]=i;
	L.length++;

	Reverse(&L);
	for(i=0; i<L.length; i++)
		printf("%d\n",L.data[i]);
}
