#include<iostream>
using namespace std;
#include "LinkedList.h"

class LinkedQ
{
	private:
		LinkedList L1;
	public:
		LinkedQ()
		{
			L1.head=0 , L1.tail=0;
		}
		int Front()
		{
			return (L1.head)->info;
		}
		int dequeue()
		{
			int el=L1.deletefromhead();
			return el;
		}
		void enqueue(int el)
		{
			L1.Addtotail(el);
		}
		void clear()
		{
			L1.head=L1.tail=0;
		}
		void display()
		{
			if(L1.isempty()==1)
			cout<<"Empty Queue"<<endl;
			else
			{
				Node *temp;
			for(temp=L1.head;temp!=0;temp=temp->next)
			cout<<temp->info<<" ";
			}
		}
};
int main()
{ 
       LinkedQ Q;
       int ch;
	cout<<"|---------------MENU----------------|"<<endl;
	cout<<"| S.No. |   Functions               |"<<endl;
	cout<<"|   1.  | clear                     |"<<endl;
	cout<<"|   2.  | AddQ                      |"<<endl;
	cout<<"|   3.  | DelQ                      |"<<endl;
	cout<<"|   4.  | front element             |"<<endl;
	cout<<"|   5.  | Display                   |"<<endl;
	cout<<"|   6.  | Exit                      |"<<endl;
	cout<<"|---------------------------------- |"<<endl;
	do {
                  cout<<endl<<"Enter your choice: "<<endl;
                  cin>>ch;
                  switch(ch)
                  {
                  	case 1: { Q.clear();
                                      break;
                                     }
             
                            case 2: { int x;
		cout<<"Enter the element:"<<endl;
                                       cin>>x;
                                       Q.enqueue(x);
                             break;}
         case 3: {cout<<Q.dequeue();
              break;
         }
         case 4: {
            cout<<Q.Front();
            break;
         }
         case 5: {
            Q.display();
            break;
         }
         case 6: {
            cout<<"Exit"<<endl;
            break;
         }
         default:{
         	cout<<"Invalid input!!"<<endl;
	break;
	}
         }
	    }while(ch!=6);
	    return 0;
}