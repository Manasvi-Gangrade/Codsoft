#include<iostream>
using namespace std;

int main()
{
	
    system("color E");
	while (true)
	{
	int num1,num2;
	char x;
	
	cout<<"\nEnter First Number:"<<endl;
	cin>>num1;
	cout<<"\nEnter Second Number:"<<endl;
	cin>>num2;
	
	cout<<"\n\tPress a for Addition"<<endl;
	cout<<"\tPress b for Subraction"<<endl;
	cout<<"\tPress c for Multiplication"<<endl;
	cout<<"\tPress d for Division"<<endl;
	cout<<"\tPress e for Remainder\n"<<endl;
	
	cout<<"Enter Operation: ";
	cin>>x;
	
	if(x=='a')
	cout<<"\nThe sum = "<<num1+num2<<endl;
	
	else if(x=='b')
	cout<<"\nThe subtraction = "<<num1-num2<<endl;
	
	else if(x=='c')
	cout<<"\nThe multiplication = "<<num1*num2<<endl;
	
	else if(x=='d')
	cout<<"\nThe division = "<<num1/num2<<endl;
	
	else if(x=='e')
	cout<<"\nThe remainder = "<<num1%num2<<endl;
	
	else 
	cout<<"Invalid Operation :("<<endl;
    }
	return 0 ;
}
