#include<bits/stdc++.h>
using namespace std;
typedef struct node{
	int info;
	node *next;
}node;
//int c=0;
node *start=NULL,*last=NULL;
node* createnode(int x){
	node *p;
	p=(node*)malloc(sizeof(node));
	p->info=x;
	p->next=NULL;
//	cout<<"njjf";
	return p;
}
void createlist(int x)
{
	node *p;
	p=createnode(x);
//	cout<<"hhgdj";
	//c++;
	if(start==NULL)
	{
		start=p;
		last=p;
	}
	else
	{
		last->next=p;
		last=p;
	}
}
/*void rev(node *start,int l,int r)
{
	int s=1,b=1;
	node *p=start,*t=start,*r,*q;
	while(s!=l)
	{
		s++;
		p=p->next;
	}
	while(b!=r)
	{
		b++;
		t=t->next;
	}
	while(p->next!=t)
	{
		q=p->next;
		int t=p->info;
		p->info=q->info;
		q->info=t;
		p=p->next;
	}
	
}*/
void display()
{
	node *t=start;
	while(t!=NULL)
	{
		cout<<t->info<<" ";
		t=t->next;
	}
}
int main()
{
	int x;
	while(cin>>x){
		createlist(x);
	}
//	int l,r;
//	cin>>l>>r;
//	
//	rev(start,l,r);
	display();
}
