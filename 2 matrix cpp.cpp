#include<iostream>
using namespace std;
int main()
{
	int m1[3][3],m2[3][3],m3[3][3],sum=0,i,j,k;
	
	cout << "\n Enter First MAtrix elements:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout << " ";
			cin >> m1[3][3];
		}
	}
	cout << "\n Enter Second Matrix elements:\n";
	for (i=0;i<3;++i)
	{
		for (j=0;j<3;j++)
		{
			cout << " ";
			cin >> m2[3][3];
		}
	}
	cout << "\n Enter Third Matrix elements:";
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			cout << " ";
			cout <<m3[i][j] ;
		}
		cout<<"\n";
	}
	return 0;
}
