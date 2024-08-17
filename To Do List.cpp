#include<iostream>
#include<windows.h>
using namespace std;

void print_tasks(string tasks[],int task_count)
{
	cout<<"Tasks To Do: "<<endl;
	cout<<"--------------------------------------------------------"<<endl;
	for(int i=0; i<task_count; i++)
	{
		cout<<"Task "<<i+1<<" : "<<tasks[i]<<endl;
	}
	cout<<"--------------------------------------------------------"<<endl;
}

int main()
{
    system("color d");
	string tasks[10]={""};
	// counter varible - to know how many tasks we have !
	int task_count=0;
	int option=-1;
	while (option !=0)
	{
		// we will write menu here 
		cout<<"--- TO DO List ---"<<endl;
		cout<<"Press 1 - To Add New Task"<<endl;
		cout<<"Press 2 - To View Tasks"<<endl;
		cout<<"Press 3 - To Delete Tasks"<<endl;
		cout<<"Press 0 - To Terminate the Program\n\n"<<endl;
		cin>>option;
		
		switch(option)
		{
			case 1:
				{
					if (task_count>9)
					{
					   cout<<"```TASK LIST IS FULL```"<<endl;
				    } 
					else
					{
					   cout<<"Enter a New Task: ";
					   cin.ignore(); // this is help in not taking empty spaces 
					   getline(cin,tasks[task_count]); // string functioning
					   task_count++;
				    }
				    break;
					
				}
				
			case 2:
				system("cls");
				print_tasks(tasks,task_count);
				break;
				
			case 3:
				{
					system("cls");
					print_tasks(tasks,task_count);
					int del_task=0;
					cout<<"Enter a task to Delete: ";
					cin>>del_task;
					
					if(del_task<0 || del_task>9)
					{
						cout<<"You Entered Invalid Task No."<<endl;
						break;
					}
					for(int i=del_task;i<task_count;i++)
					{
						tasks[i]=tasks[i+1];
					}
					task_count= task_count - 1;
					break;
			   }
				case 0:
					cout<<"Terminating the Program - -- --- ---- "<<endl;
					break;
					
				default:
					cout<<"You entered Invalid Value!"<<endl;
				}
		}
		
    /* lot of confusions in this code toh fir se sochna samajhna seekhna !!
    you can do itttt !
		
	}
