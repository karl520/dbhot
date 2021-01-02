#define Maxsize 100
typedef struct node{
	int key;
	struct node *lchild,*rchild;
}BTnode ,*BTREE;

BTREE CREATEBT()
{
	BTREE STACK[Maxsize];
	BTREE *p,T;
	char ch;
	int flag,top=-1;
	while(1)
	{
		scanf("%c",&ch);
		switch(ch)
		{
			case'@':return (T);
			case'(':STACK[++top]=p;
			flag=1;
		  	  break;
			case')':top--;
			  break;
			case',':flag=2;
			  break;
			default:p=(BTREE)malloc(sizeof(BTnode));
			p->data=ch;
			p->lchild=NULL;
			p->rchild=NULL;
			if(t==NULL)
			  T=p;
			else if(falg==1)
			  STACK[top]->lchild=p;
			else
			  STACK[top]->rchild=p;
		}
	}
}
