#include<iostream>
using namespace std;
#include "LinkedList.h"


class LStack
{
	private:
	LinkedList L1;
	public:
	LStack()
	{
		L1.head=L1.tail=NULL;
		
	}
	int pop()
	{
		int X=L1.deletefromhead();
		return X;
	}
	void push(int x)
	{
		L1.Addtohead(x);
	}
	bool isempty()
	{
		return(L1.isempty());
	}
	int peek()
	{
		int el=L1.head->info;
		return el;
	}
	void Display()
	{
		if(L1.isempty()==1)
		cout<<"Empty stack"<<endl;
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
cout<<endl<<"-------------------------------MENU------------------------------------"<<endl;
    
    cout<<"1. Is Empty?"<<"\n2. Push"<<"\n3. Pop"<<"\n4. Peek"<<"\n5. Display"<<"\n6. Exit!!"<<endl;
    int ch;
    
    LStack S1;
    do{
    
    cout<<endl<<"enter your choice:";
    cin>>ch;
    	switch(ch)
	{
		case 1: if(S1.isempty()==1)
		cout<<"True"<<endl;
		else
		cout<<"False"<<endl; 
                break;
	
        case 2: int x;
                      cout<<endl<<"Enter the element you want to push:";
                      cin>>x;
             S1.push(x);

        break;
        case 3: cout<<S1.pop();
        break;
        case 4: cout<<S1.peek();
        break;
        case 5: S1.Display();
        break;
	} 
}while(ch!=6);	
}