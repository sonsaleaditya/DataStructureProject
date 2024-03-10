#include <stdio.h>
#include <stdlib.h>
#define size 5
void maxq1();
void maxq2();
void maxq3();
void minq1();
void minq2();
void minq3();
void max_dequeue();
void min_dequeue();
void display();
int q1[size],q2[size],q3[size];
int front=-1;
int rear=-1;

void enqueue()
{
     if(front==-1&&rear==-1)
	{
		front++;
        rear++;
        printf(" Enter data in q1,q2,q3 respectively ");
		scanf("%d%d%d",&q1[rear],&q2[rear],&q3[rear]);
		
	}
	else if (rear == size - 1)
	{
		printf("all queues are full\n");
	}
	else
	{
		rear++;
		printf(" Enter data in q1,q2,q3 respectively ");
		scanf("%d%d%d",&q1[rear],&q2[rear],&q3[rear]);
	}
}
void dequeue()
{
    
	if(front==-1 && rear==-1)
	{
		printf("all queues are empty\n");
	}
    else if(front==rear)
    {
     printf("%d %d %d are deleted from q1 , q2 and q3 respectively\n", q1[front], q2[front], q3[front]);
     front=-1;
     rear=-1;
     return;

    }
    else
	{
         printf("%d %d %d are deleted from q1 , q2 and q3 respectively\n", q1[front], q2[front], q3[front]);
         front++;
         
    }	
}
void display()
{
    if(front==-1 && rear==-1)
    {
        printf("all queues are empty!!\n");
    }
    
    else
    {
        printf("QUEUE 1     QUEUE 2      QUEUE 3\n");
        for(int i=front;i<=rear;i++)
        {
            printf(" %d        %d         %d\n", q1[i],q2[i],q3[i]);
        }
    }
}
void max_dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("all queues are empty!!!");
    }
    else
    {
      maxq1();
      maxq2();
      maxq3();  
    }
}
 

void maxq1()
{
int m1=q1[front],x;
    if(front==-1 && rear==-1)
    {
        printf("all queues are empty!!\n");
    }
    else if(front==rear)
    {
        printf("%d is max so deleted\n",m1);
       
       
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            if(m1<q1[i])
            {
                m1=q1[i];
                
                x=i;
            }
        }
    
      for(int i=x; i<=rear;i++ )
        {
          q1[i]=q1[i+1];
           
        }
        printf("%d is max so deleted\n",m1);
        
      
}
}
void maxq2()
{
    int m2=q2[front],y;
    if(front==-1 && rear==-1)
    {
        printf("all queues are empty!!\n");
    }
    else if(front==rear)
    {
         printf("%d is max so deleted\n",m2);
        
    }
    else{
       for(int j=front;j<=rear;j++)
        {
            if(m2<q2[j])
            {
                
                m2=q2[j];
            
                
                y=j;
                
            }
        }
        
        for(int j=y;j<=rear;j++)
        {
            q2[j]=q2[j+1];
        }

       printf("%d is max so deleted\n",m2);
    }
        
        
       
}
void maxq3()
{
    int m3=q3[front],z;
    
    if(front==-1 && rear==-1)
    {
        printf("all queues are empty!!\n");
    }
    else if(front==rear)
    {
        printf("%d is max so deleted\n",m3);
        front=-1;
        rear=-1;
        return;
    }
    else
    {
       for(int k=front;k<=rear;k++)
        {
            if(m3<q3[k])
            {
                
            
                m3=q3[k];
                
                
                z=k;
            }
        }
        for(int k=z;k<=rear;k++)
        {
             q3[k]=q3[k+1];
        }
        printf("%d is max so deleted\n",m3);
        rear--;
    }
      
}
void minq1()
{
 int m1=q1[front],x;
    if(front==-1 && rear==-1)
    {
        printf("all queues are empty!!\n");
    }
    else if(front==rear)
    {
        printf("%d is min so deleted\n",m1);
        
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            if(m1>q1[i])
            {
                m1=q1[i];
                
                x=i;
            }
        }
            
       for(int i=x; i<=rear;i++ )
        {
          q1[i]=q1[i+1];
          
          
        }
        printf("%d is min so deleted\n",m1);
    }
    

}
void minq2()
{
    int m2=q2[front],y;
    if(front==-1 && rear==-1)
    {
        printf("all queues are empty!!\n");
    }
    else if(front==rear)
    {
       printf("%d is min so deleted\n",m2);
        
    }
    else{
         for(int j=front;j<=rear;j++)
        {
            if(m2>q2[j])
            {
                
                m2=q2[j];
            
                
                y=j;
                
            }
        }
        
        for(int j=y;j<=rear;j++)
        {
            q2[j]=q2[j+1];
        }
        printf("%d is min so deleted\n",m2);
       
    }
}
void minq3()
{
    int m3=q3[front],z;
    if(front==-1 && rear==-1)
    {
        printf("all queues are empty!!\n");
    }
    else if(front==rear)
    {
       printf("%d is min so deleted\n",m3);
        front=-1;
        rear=-1;
        return;
    }
   else{
        for(int k=front;k<=rear;k++)
        {
            if(m3>q3[k])
            {
                
            
                m3=q3[k];
                
                
                z=k;
            }
        }
       
        for(int k=z;k<=rear;k++)
        {
             q3[k]=q3[k+1];
        }

        printf("%d is min so deleted\n",m3);
        rear--;
 }
}
 

void min_dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("all queues are empty!!!");
    }
    else
    {
      minq1();
      minq2();
      minq3(); 
    }
    
}

void main()
{
    int ch;
    while(1)
    {
    printf("<--- Enter your choice --->\n 1. for add data in all queues\n 2. for delete data from all queue\n 3. for display data in all queues\n 4. for max dequeue\n 5. for min dequeue\n 6. for exit\n");
    scanf("%d",&ch);
    printf("\n");
    
    switch(ch)
    {
        case 1: enqueue();      break;
        case 2: dequeue();      break;
        case 3: display();      break;
        case 4: max_dequeue();  break;
        case 5: min_dequeue();  break;
        case 6: exit(0);
        default:printf("you have entered wrong choice !!!\n please choose right choise\n");
    }
    
    }
}