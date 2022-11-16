// simple queue

#include<iostream>
using namespace std;
# define MAX 5

class Queue
{
      private:
      	int front,rear;
      	int A[MAX];
      public:
      	Queue()
      	{ front=rear=-1;
	      }
	bool isFull()
	{
	 return(rear==MAX-1);
	}
	bool isEmpty()
	{
	return(front==-1 && rear==-1);
	}
	void addQ(int x)
	{
		if (rear==MAX-1)
		cout<<"Queue is full!"<<endl;
		else
		{ if(rear==-1 && front==-1)
		{
			front=0;
			rear=0;
			A[rear]=x;
		}
	              else
	              A[++rear]=x;
	}
		
	}
	int DeleteQ()
	{
	      int temp;
	      if (front!=-1)
	      {
	      	temp=A[front];
	      	if (rear==front)
	      	{ front=rear=-1;
		      }
		else
		front++;
		return temp;
	      	
	      }
	      else
	      cout<<endl<<"Queue is empty!"<<endl;
	      return -1;
	}
	int frontEl()
	{
	 if (front==-1)
	 {
	      cout<<"Queue is empty!!"<<endl;
	 return -1;
	 }
	 else{
	 if (rear==0 && front==0)
	 return A[0];
	 else if(rear<=MAX-1)
	 return A[front];
}
}
void display()
{
	if (front!=-1)
	{
		for(int i=front;i<=rear;i++)
		{
			cout<<A[i]<<" ";
		}
		cout<<endl<<"Front"<<front<<endl<<"Rear"<<rear;
		}
	}         
	
};

int main()
{ 
       Queue Q;
       int ch;
	cout<<"|---------------MENU----------------|"<<endl;
	cout<<"| S.No. |   Functions               |"<<endl;
	cout<<"|   1.  | Is Empty                  |"<<endl;
	cout<<"|   2.  | Is full                   |"<<endl;
	cout<<"|   3.  | AddQ                      |"<<endl;
	cout<<"|   4.  | DelQ                      |"<<endl;
	cout<<"|   5.  | frontEl                   |"<<endl;
	cout<<"|   6.  | display                   |"<<endl;
	cout<<"|   7.  | Exit                      |"<<endl;
	cout<<"|---------------------------------- |"<<endl;
	do {
                  cout<<endl<<"Enter your choice: "<<endl;
                  cin>>ch;
                  switch(ch)
                  {
                  	case 1: { if (Q.isEmpty()==1)
                  	          cout<<"True"<<endl;
                  	          else cout<<"False"<<endl;
                                      break;
                                     }
                            case 2: { if (Q.isFull()==1)
                  	          cout<<"True"<<endl;
                  	          else cout<<"False"<<endl;
                                      break;
             
                                    }
                            case 3: { int x;
		cout<<"Enter the element:"<<endl;
                                       cin>>x;
                                       Q.addQ(x);
                             break;}
         case 4: {cout<<Q.DeleteQ();
              break;
         }
         case 5: {
            cout<<Q.frontEl();
            break;
         }
         case 6: {
            Q.display();
            break;
         }
         default:{
         	cout<<"Invalid input!!"<<endl;
	break;
	}
         }
	    }while(ch!=7);
	    return 0;
}
