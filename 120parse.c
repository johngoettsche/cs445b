#include "120parse.h"

extern FILE *yyin;
TreeNode *yyroot;

TreeNode *treenode(int symbol)
{
	struct TreeNode *p = (struct TreeNode *)calloc(1, sizeof(struct node));
	if (p == NULL) memoryError();
	p->symbol = symbol;
	return p;
}

TokenStackNode *createTokenStack(){
	TokenStackNode *top = (TokenStackNode *)calloc(1, sizeof(TokenStackNode));
	if(top == NULL) memoryError();
	return top;
}

TokenStackNode *pushTokenStack(TokenStackNode *top, Token *token){
	TokenStackNode *newNode = (TokenStackNode *)calloc(1, sizeof(TokenStackNode));
	if(newNode == NULL) memoryError();
	newNode->t = token;
	newNode->next = top;
	top = newNode;
	return top;
}

TokenStackNode *popTokenStack(TokenStackNode *top){
	top = top->next;
	return top;
}

TokenStackNode *topTokenStack(TokenStackNode *top){
	return top;
}


int main(int argc, char **argv){
	int rv;
   if(argc > 1) { 
		int f;
		//read each file in arguments
		for(f = 1; f < argc; f++) {
			fname = argv[f];
			FILE *infile = fopen(fname, "r");
			yyin = infile;
			line_num = 1;
			if(!yyin){
				printf("Error reading file %s\n", argv[f]);
				exit(1);
			}
			rv = yyparse();
			fclose(infile);
			//treeprint(yyroot);
		}
	} else { //no files in arguments
		printf("Missing file name.\n");
		exit(1);
	}
   return 0;
}

