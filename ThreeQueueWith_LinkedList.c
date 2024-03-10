#include<stdio.h>
#include<stdlib.h>
#define null 0
void displayq1();
void displayq2();
void displayq3();
struct node
{
    struct node *next;
    int data;
};
struct node *f1=null;
struct node *r1=null;
struct node *f2=null;
struct node *r2=null;
struct node *f3=null;
struct node *r3=null;
struct node *q1=null;
struct node *q2=null;
struct node *q3=null;

struct node *create()
{
    struct node *p=(struct node*)malloc(sizeof(struct node));
    p->next=null;
    return p;
}
void enqueue()
{
    struct node *p,*q,*r,*temp;
    p=create();
    q=create();
    r=create();
    if(q1==null)
    {
        r1=p;
        q1=r1;
        f1=r1;
        printf("enter data in q1\n");
        scanf("%d",&r1->data);
        r2=q;
        q2=r2;
        f2=r2;
         printf("enter data in q2\n");
        scanf("%d",&r2->data);
        r3=r;
        q3=r3;
        f3=r3;
         printf("enter data in q3\n");
        scanf("%d",&r3->data);
        printf("%d %d %d\n",r1->data,r2->data,r3->data);
        
    }
    
    else
    {
       r1->next=p;
       r1=p;
        printf("enter data in q1\n");
        scanf("%d",&r1->data);
       r2->next=q;
       r2=q;
        printf("enter data in q2\n");
        scanf("%d",&r2->data);
       r3->next=r;
       r3=r;
        printf("enter data in q3\n");
        scanf("%d",&r3->data);
    }
}
void dequeue()
{
    struct node *t1,*t2,*t3;
    if(f3==null&&f2==null&&f1==null)
    {
        printf("queue is empty!!\n");
    }
    
    else
        {
           printf("%d %d %d are deleted from q1 , q2 and q3 respectively\n",f1->data,f2->data,f3->data);
            t1=f1;
            f1=f1->next;
            t2=f2;
            f2=f2->next;
            t3=f3;
            f3=f3->next;
            free(t1);
            free(t2);
            free(t3);
        }
}
void display()
{
    displayq1();
    printf("\n");
    displayq2();
    printf("\n");
    displayq3();
    printf("\n");
}
void max_in_q1()
{
    int n;
      n=q1->data;
    struct node *temp=q1,*prev,*t;
    while(temp->next!=null)
    {
        if(n<temp->data)
        {  
          
        
            n=temp->data;
        }
        temp=temp->next;

    }
    if(n<temp->data)
        {  
            
            n=temp->data;
        }
    printf("%d is max element in q1 so deleted\n",n);
    temp=q1;
    while(temp->data!=n)
    {
        prev=temp;
        temp=temp->next;
    }
    if(f1->data==temp->data)
    {
           t=f1;
           f1=temp->next;
           q1=f1;
           free(t);
    }
    else if(temp->next==null)
    {
        t=temp;
        prev->next=null;
        free(t);
    }
    else
    {
        t=temp;
        prev->next=temp->next;
        free(t);
    }
        


    
    
}

void max_in_q2()
{
    struct node *temp=q2,*prev,*t;
      int n;
      n=q2->data;
    while(temp->next!=null)
    {
        if(n<temp->data)
        {  
            

            n=temp->data;
        }
        temp=temp->next;

    }
    if(n<temp->data)
        {  
            
            n=temp->data;
        }
    printf("%d is max element in q2 so deleted\n",n);
    temp=q2;
    while(temp->data!=n)
    {
        prev=temp;
        temp=temp->next;
    }
    if(f2->data==temp->data)
    {
           t=f2;
           f2=temp->next;
           q2=f2;
           free(t);
    }
    else if(temp->next==null)
    {
        t=temp;
        prev->next=null;
        free(t);
    }
    else
    {
        t=temp;
        prev->next=temp->next;
        free(t);
    }
}

void max_in_q3()
{
    int n;
   n=q3->data;
   struct node *temp=q3,*prev,*t;
    while(temp->next!=null)
    {
        if(n<temp->data)
        {  
            
            n=temp->data;
        }
        temp=temp->next;

    }
    if(n<temp->data)
        {  
           
            n=temp->data;
        }
    printf("%d is max element in q3 so deleted\n",n);
    temp=q3;
    while(temp->data!=n)
    {
        prev=temp;
        temp=temp->next;
    }
    if(f3->data==temp->data)
    {
           t=f3;
           f3=temp->next;
           q3=f3;
           free(t);
    }
    else if(temp->next==null)
    {
        t=temp;
        prev->next=null;
        free(t);
    }
    else
    {
        t=temp;
        prev->next=temp->next;
        free(t);
    }
}

    


void min_in_q1()
{
      int n;
     n=q1->data;
     struct node *temp=q1,*prev,*t;
    while(temp->next!=null)
    {
        if(n>temp->data)
        {  
            n=temp->data;
        }
        temp=temp->next;

    }
    if(n>temp->data)
        {  
           
            n=temp->data;
        }
    printf("%d is min element in q1 so deleted\n",n);
    temp=q1;
    while(temp->data!=n)
    {
        prev=temp;
        temp=temp->next;
    }
    if(f1->data==temp->data)
    {
           t=f1;
           f1=temp->next;
           q1=f1;
           free(t);
    }
    else if(temp->next==null)
    {
        t=temp;
        prev->next=null;
        free(t);
    }
    else
    {
        t=temp;
        prev->next=temp->next;
        free(t);
    }
}



void min_in_q2()
{
        int n;
         struct node *temp=q2,*prev,*t;
        n=q2->data;
    
    while(temp->next!=null)
    {
        if(n>temp->data)
        {  
           
            n=temp->data;
        }
        temp=temp->next;

    }
    if(n>temp->data)
        {  
            n=temp->data;
        }
    printf("%d is min element in q2 so deleted\n",n);
    temp=q2;
    while(temp->data!=n)
    {
        prev=temp;
        temp=temp->next;
    }
    if(f2->data==temp->data)
    {
           t=f2;
           f2=temp->next;
           q2=f2;
           free(t);
    }
    else if(temp->next==null)
    {
        t=temp;
        prev->next=null;
        free(t);
    }
    else
    {
        t=temp;
        prev->next=temp->next;
        free(t);
    }
}

    
    
   


void min_in_q3()
{
    int n;
   n=q3->data;
    struct node *temp=q3,*min,*prev,*t;
    while(temp->next!=null)
    {
        if(n>temp->data)
        {  
           
            min=temp;
            n=temp->data;
        }
        temp=temp->next;

    }
    if(n>temp->data)
        {  
            min=temp;
            n=temp->data;
        }
    printf("%d is min element in q3 so deleted\n",n);
     temp=q3;
    while(temp->data!=n)
    {
        prev=temp;
        temp=temp->next;
    }
    if(f3->data==temp->data)
    {
           t=f3;
           f3=temp->next;
           q3=f3;
           free(t);
    }
    else if(temp->next==null)
    {
        t=temp;
        prev->next=null;
        free(t);
    }
    else
    {
        t=temp;
        prev->next=temp->next;
        free(t);
    }
}



void displayq1()
{
    struct node *temp;
    
    if(q1==null)
    {
        printf("q1 is empty!!\n");

    }
    else
    {
        printf(" Q1 : ");
        temp=q1;
        while(temp!=null)
        {
            printf(" %d ",temp->data);
            temp=temp->next;
        }

    }
}

void displayq2()
{
    struct node *temp;
    
    if(q2==null)
    {
        printf("q2 is empty!!\n");

    }
    else
    {
        printf(" Q2 : ");
        temp=q2;
        while(temp!=null)
        {
            printf(" %d ",temp->data);
            temp=temp->next;
        }

    }
}

void displayq3()
{
    struct node *temp;
    
    if(q3==null)
    {
        printf("q3 is empty!!\n");

    }
    else
    {
        printf(" Q3 : ");
        temp=q3;
        while(temp!=null)
        {
            printf(" %d ",temp->data);
            temp=temp->next;
        }

    }
}
void delete_min()
{
    min_in_q1();
    min_in_q2();
    min_in_q3();
}
void delete_max()
{
    max_in_q1();
    max_in_q2();
    max_in_q3();
}

void main()
{
    int ch;
    while(1)
    {
        printf("enter your choice\n 1. for enqueue\n 2. for dequeue\n 3. for display\n 4. for max dequeue\n 5. for min delete\n 6. for exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: enqueue();    break;
            case 2: dequeue();    break;
            case 3: display();    break;
            case 4: delete_max(); break;
            case 5: delete_min(); break;
            case 6: exit(0);
            default: printf("invalid choice\n");
        }
    }
}