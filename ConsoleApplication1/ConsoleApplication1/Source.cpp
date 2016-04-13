#include<iostream>
using namespace std;
int main(void)
{
	unsigned int a;
	unsigned int b;
	unsigned int i;
	unsigned int j;
	cout << "Enter two unsigned integers in the range from 1 to 9:" << endl;
	cin >>  a >> b;
	for (i = 1; i <= b; i++)
	{
		for (j = 1; j <= a; j++)
		{
			cout << "+"; 
		}


		if ((i % 2) == 0)
			cout << "\n"<<endl;
		else
			cout << "\t"<<endl;
	}
	
	system("pause");
	return 0;
}