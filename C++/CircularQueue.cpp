#include<iostream>
using namespace std;
# define MAX 3

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
	 return((front==0 && rear==MAX-1) || (front==rear+1) );
	}
	bool isEmpty()
	{
	return(front==rear==-1);
	}
	void addQ(int x)
	{
		if ((front==0 && rear==MAX-1)||(front==rear+1))
		cout<<"Queue is full!"<<endl;
		else{
			if (front==-1)
			{
			  rear=front=0;
			}
			else
			{
			    if(rear==MAX-1)
			    rear=0;
			    else
			    rear+=1;
			}
			A[rear]=x;
		}
	}
	int DeleteQ()
	{
	      int temp;
	      if (!isEmpty())
	      {
	      	temp=A[front];
	      	if (front==rear)
	      	{ front=rear=-1;}
	      	else if(front==MAX-1)
	      	front=0;
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
	 if (!isEmpty())
	 {
	      
	      return A[front];
	 }
	 else
	 cout<<"Queue is empty!!"<<endl;
	 return -1;
	}
	void Display()
	{
		if(isEmpty())
		cout<<"Queue is empty"<<endl;
		else
		{
			if (front<=rear)
			{
			for(int i=front;i<=rear;i++)
			cout<<A[i]<<" | " ;
		              }
		              else
		              {
		              while (front <= MAX - 1) {
                                          cout<<A[front]<<" | ";
                                          front++;
                                          }
                                          front = 0;
                                          while (front <= rear) {
                                          cout<<A[front]<<" | ";
                                          front++;
                                          }
		              }
		
		
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
	cout<<"|   6.  | Display                   |"<<endl;
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
         	Q.Display();
	break;
         }
         case 7: {
            cout<<"Exit"<<endl;
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
