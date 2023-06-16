#include<stdio.h>
#include<stdlib.h>
struct Node{
char data;
struct Node *right;
struct Node *left;
};
void Preorder(struct Node *root){
    if(root==NULL){
        return;
    }
    printf("%c\t",root->data);
    Preorder(root->left);
    Preorder(root->right);
}
void Inorder(struct Node *root){
    if(root==NULL){
        return;
    }
    Inorder(root->left);
    printf("%c\t",root->data);
    Inorder(root->right);
}
void Postorder(struct Node *root){
    if(root==NULL){
        return;
    }
    Postorder(root->left);
    Postorder(root->right);
    printf("%c\t",root->data);
}
int main(){
    struct Node *A=malloc(sizeof(struct Node));
    A->data='A';
    struct Node *B=malloc(sizeof(struct Node));
    B->data='B';
    A->left=B; 
    struct Node *C=malloc(sizeof(struct Node));
    C->data='C';
    A->right=C;
    struct Node *D=malloc(sizeof(struct Node));
    D->data='D';
    D->left=D->right=NULL;
    B->left=D;
    struct Node *E=malloc(sizeof(struct Node));
    E->data='E';
    E->left=E->right=NULL;
    B->right=E;
    struct Node *F=malloc(sizeof(struct Node));
    F->data='F';
    F->left=F->right=NULL;
    struct Node *G=malloc(sizeof(struct Node));
    G->data='G';
    G->left=G->right=NULL;
    C->right=G;
    C->left=F;
 
    struct Node *root=A;
    printf("Preorder is \n");
    Preorder(root);
    printf("\nInorder is \n");
    Inorder(root);
    printf("\nPostorder is\n");
    Postorder(root);
    return 0;
}