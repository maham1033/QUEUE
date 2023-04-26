#include <iostream>
#define size 5
using namespace std;
class Circle
{
	private:
		int arr[size], front, rear,d;
	public: 
	Circle()
	{
		front=-1;
		rear=-1;
	}

	bool Full()
	{
		if(front==0 && rear == size - 1)
		{
			return true;
		}
       if (front == rear + 1) 
	   {
      return true;
     	}
	return false;
	}
	bool empty()
	{
		if(front==-1)
		{
			return true;
		}
		return false;
	}
	void enqueue(int d)
	{
	if (Full()) {
      cout << "Queue is full"<<endl;
    } else{
		if(front==-1)
			front=0;
			rear=(rear+1) % size;
			arr[rear]=d;
			cout <<endl<< "Inserted " << d << endl;
		
		
 }
}
	void deq()
	{
		if(empty())
		{
			cout<<"Queue is empty"<<endl;
		}
		else
		{
			arr[front]=d;
			if(rear==front)
			{
				rear=1;
				front=1;
			}
		
		else
		{
			front=(front+1)%size;
		}
	}
	}
	  void display() {
    int i;
    if (empty()) {
      cout << endl
         << "Empty Queue" << endl;
    } 
      {
      	if(rear<front)
      	{
      		for(int i=rear;i<size;i++)
      		{
      			cout << arr[i];
			  }
		  }
		  else{
		  	cout <<"Queue is: ";
		  	for(int i=front;i<size;i++)
		  	{
		  		cout<< arr[i];
			  }
			  cout<<endl;
		  }
	  
        
      
      
    }
  }

};

	int main()
	{
		Circle q;
		
		q.enqueue(4);
		q.enqueue(6);
		q.enqueue(9);
		q.enqueue(1);
		q.enqueue(5);
		q.display();
		q.enqueue(0);
		q.deq();
		q.display();
		q.enqueue(3);
		q.display();
		q.enqueue(7);
	
	}
