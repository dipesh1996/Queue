#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
void main()
{
		int arr[5]={0},counter = 0,temp;
		clrscr();
		Menu:
		cout<<" \n Press 1 for push operation";
		cout<<" \n Press 2 for pop operation";
		cout<<" \n Press 3 for dispay the aray";
		cout<<" \n Press 4 for exit";
		cout<<" \n Enter you option => ";
		int choice;
		cin>>choice;
		if(choice == 1)
		{
			//Push Function
			if(counter>4)
			{
				cout<<"\n Stack is full please perform Pop function";
				goto Menu;
			}
			else
			{
				cout<<"\n Enter number to be inserted => ";
				cin>>arr[counter];
				counter++;
				goto Menu;
			}
		}
		else if(choice == 2)
		{
			//Pop function
			counter--;
				if(counter<0)
				{
					cout<<"\n Stack is empty please perform Push function";
					goto Menu;
				}
				else
				{
					cout << arr[0] << " has been poped out";
					for(temp=0;temp<counter;temp++)
					{
						arr[temp] = arr[temp + 1];
						if(temp == counter - 1)
						{
							arr[counter] = 0;
						}
						else
						{
                              	continue;
						}
					}
				}
				goto Menu;
		}
		else if(choice == 3)
		{
				for(temp=0;temp<5;temp++)
				{
				    cout << arr[temp] << " ";
				}
			goto Menu;
		}
		else if(choice == 4)
		{
		exit(0);
		}
		else
		{
		cout<<"\n Enter a valid option";
		goto Menu;
		}
		getch();
}

