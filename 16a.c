#include<stdio.h>
#include<stdlib.h>
struct node {
	int info;
	struct node *lptr;
	struct node *rptr;
};
struct node *root = NULL;
int n;
struct node *insertNode(struct node *root, int n) {
	if (root == NULL) {
		root = (struct node *)malloc(sizeof(struct node));
		root->info = n;
		root->lptr = NULL;
		root->rptr = NULL;
		return root;
	}
	else if (root->info > n) {
		root->lptr = insertNode(root->lptr, n);
	}
	else if(root->info < n) {
			root->rptr = insertNode(root->rptr, n);
		}
	return root;
}
//inorder traversal
void inorder (struct node *root) {
	if (root == NULL) {
		return;
	}
	inorder(root->lptr);
	printf("%d ", root->info);
	inorder(root->rptr);
}
void preorder (struct node *root) {
	if (root == NULL) {
		return;
	}
	printf("%d ", root->info);
	preorder(root->lptr);
	preorder(root->rptr);
}
void postorder (struct node *root) {
	if (root == NULL) {
		return;
	}
	preorder(root->rptr);
	printf("%d ", root->info);
	preorder(root->lptr);
}
struct node *search(struct node *root, int n) {
	if (root == NULL) {
		return root;
	}
	if(root->info == n) {
		printf("value found");
	}
	else if (root->info < n){
		root->rptr = search(root->rptr, n);
	}
	else if (root->info > n){
		root->lptr = search(root->lptr, n);
	}
	return root;
}
struct node *min(struct node *root) {
	while (root->lptr != NULL) {
		root = root->lptr;
	}
	return root;
}
struct node *delete(struct node *root, int n) {
	if (root == NULL) {
		return root;
	}
	if (root->info > n) {
		root->lptr = delete(root->lptr, n);
	}
	else if (root->info < n) {
		root->rptr = delete(root->rptr, n);
	}
	else {
		if (root->lptr == NULL && root->rptr == NULL) {
			free(root);
			return NULL;
		}
		else if (root->lptr == NULL) {
			struct node *temp = root->rptr;
			free(root);
			return temp;
		}
		else if (root->rptr == NULL) {
			struct node *temp = root->lptr;
			free(root);
			return temp;
		}
		else {
			struct node *temp = min(root->rptr);
			root->info = temp->info;
			root->rptr = delete(root->rptr, temp->info);
		}
	}
	return root;
}
void main() {
int choice;

while (1) {
	printf("enter 1 for insert, 2 for preorder, 3 for postoreder and 4 for inorder, 5 for search, 6 for delete, 7 for exit");
		scanf("%d", &choice);
		switch (choice) {
			case 1 :
				printf("enter nodes");
				scanf("%d", &n);
				root = insertNode(root, n);
				printf("============================================================================================================================\n");
				break;
			case 2 :
				preorder(root);
				printf("============================================================================================================================\n");
				break;
			case 3 :
				postorder(root);
				printf("============================================================================================================================\n");
				break;
			case 4 :
				inorder(root);  
				printf("============================================================================================================================\n");
				break;
			case 5 :
				printf("enter the value to search");
				scanf("%d", &n);
				search(root, n);
				printf("============================================================================================================================\n");
				break;
			case 6 :
				printf("enter the value to delete");
				scanf("%d", &n);
				delete(root, n);
				printf("============================================================================================================================\n");
				break;
			case 7 :
				break;
			}
		}
}

