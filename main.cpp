#include <iostream>
using namespace std;

int main() 
{
	int length;
	cout<<"\nenter the number of items : ";
	cin>>length;
	int array[length];
	cout<<"\nenter the items \n";
	for(int i =0; i<length; i++)
		cin>>array[i];
	cout<<"\nthe items\n";
	for(int i =0; i<length; i++)
		cout<<endl<<i+1<<" . "<<array[i];
	for(int i =0; i<length; i++)
		cout<<"\naddress of "<<array[i]<<" is "<<&array[i];
}