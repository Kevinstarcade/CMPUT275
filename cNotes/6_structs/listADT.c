#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

struct Node {
	int data;
	struct Node *next;
};

struct list {
	struct Node *head;
	struct Node *tail;
	size_t len;
};

struct list *createList() {
	struct list *ret = malloc(sizeof(struct list)*1);
	ret->len = 0;
	ret->head = NULL;
	ret->tail = NULL;
	return ret;
}

struct list *addToFront(struct list *l, int data) {
	struct Node *n = malloc(sizeof(struct Node));
	n->data = data;
	n->next = l->head;
	l->head = n;
	++l->len;
	// if the tail is NULL, then the list was empty
	// so this is the new tail
	if (!l->tail) l->tail = n;
	return l;
}

int length(struct list *l) {
	return l->len;
}

int ith(struct list *l, size_t i) {
	// this function assumes i is within the range of the list
	assert(i < l->len);
	
	// if i is the last element
	if (i == l->len-1) return l->tail->data;

	struct Node *cur = l->head;
	for (size_t j = 0; j < i; ++j, cur = cur->next);
	return cur->data;
}

// unfinished
int safeith(struct list *l, size_t i, size_t *loc) {
	if (i > l->len) {
		// if 
		return 1;
	}
}

void setElem(struct list *l, int i, int e){
	// replaces (but doesnt insert) element at index i
	
	assert(i > length(l));
	struct Node *cur = l->head;
	for (int j = 0; j < i; ++j, cur = cur->next);
	cur->data = e;
}

int pop(struct list *l, int i) {
	assert(i < length(l));
	if (i == 0) {
		// saves the next node, frees current node, then reassignes head. order is important
		struct Node *newHead = l->head->next;
		int data = l->head->data;
		free(l->head);
		l->head = newHead;
		l->len -= 1;
		return data;
	}
	struct Node *prev = l->head;
	struct Node *cur = l->head->next;
	for (int j = 0; j < i; ++j, prev = cur, cur = cur->next);
	prev->next = cur->next;
	int data = cur->data;
	if (!cur->next) {
		l->tail = prev;
	}
	free(cur);
	return data;

}

void freeNodes(struct Node *n) {
	if (n) {
		struct Node *next = n->next;
		free(n);
		freeNodes(next);
	}
}

void destroy(struct list *l) {
	/* method 1:
	for (struct Node *cur = l->head; cur; cur = cur->next) {
		struct Node *node = cur->next;
		free(cur);
		cur = node;
	}
	free(l);
	*/

	// method 2: (may take up lots of memory as each recursive call takes up memory before the function ends
	// ie, we will have one stackframe for each freeNodes call
	freeNodes(l->head); 
}


int main() {
	struct list *l = createList();
	addToFront(addToFront(addToFront(l, 1), 2), 3); // this was why we return l in addToFront
	addToFront(addToFront(addToFront(addToFront(l, 4), 5), 6), 7);
	
	for (size_t i = 0; i < l->len; ++i){
		printf("%d ", ith(l, i));
	} // O(n^2) because each call of ith is O(n)
	printf("\n");

	pop(l, 3);
	
	for (struct Node *cur = l->head; cur; cur=cur->next) {
		printf("%d ", cur->data);
	} // O(n) but takes away from the abstraction of an ADT
	printf("\n");

	destroy(l);

}
