#include <iostream>
using namespace std;
void outA(int *A, int n);
void reflexive(int *A, int n);
void irreflexive(int *A, int n);
void symmetric(int *A, int n);
void antisymmetric(int *A, int n);
void transitive(int *A, int n);
void main()
{
	int A[4][4] = {	{1,1,1,0},
							{1,1,1,0},
							{1,1,1,0},
							{1,0,1,1} };
	outA((int *)A, 4);
	reflexive((int *)A, 4);
	irreflexive((int *)A, 4);
	symmetric((int *)A, 4);
	antisymmetric((int *)A, 4);
	transitive((int *)A, 4);
}
//输出A
void outA(int *A, int n)
{
	cout << "A is:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i*n + j] << " ";
		}
		cout << endl;
	}
}
//判断是否自反
void reflexive(int *A,int n)
{
	for (int i = 0; i < n; i++)
	{
		if (A[i*n + i] == 0)
		{
			cout << "A isn't reflexive" << endl;
			break;
		}
		else
		{
			if (i < n - 1)continue;
			else{ cout << "A is reflexive" << endl; break; }
		}
	}
}
//判断是否反自反
void irreflexive(int *A, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (A[i*n + i] == 1)
		{
			cout << "A isn't irreflexive" << endl;
			break;
		}
		else
		{
			if (i < n - 1)continue;
			else{ cout << "A is irreflexive" << endl; break; }
		}
	}
}
//判断是否对称
void symmetric(int *A, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)break;
			else
			{
				if ((A[i*n + j]) == (A[j*n + i]))
				{
					if ((i < n - 2) && (j < n - 1))continue;
					else{ cout << "A is symmetric" << endl; return; }
				}
				else{ cout << "A isn't symmetric" << endl; return; }
			}
		}
	}
}
//判断是否反对称
void antisymmetric(int *A, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)break;
			else
			{
				if (0 == A[i*n + j])continue;
				else
				{
					if (0 == A[j*n + i])
					{
						if ((i < n - 2) && (j < n - 1))continue;
						else{ cout << "A is antisymmetric" << endl; return; }
					}
					else{ cout << "A isn't antisymmetric" << endl; return; }
				}
			}
		}
	}
}
//判断是否传递
void transitive(int *A, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (A[i*n + j] == 1)
			{
				for (int z = 0; z < n; z++)
				{
					if (A[j*n + z] == 0)continue;
					else
					{
						if (A[i*n + z] == 0){ cout << "A isn't transitive" << endl; return; }
						else
						{
							if ((i < n - 2) && (j < n - 1))continue;
							else{cout << "A is transitive" << endl; return;}
						}
					}
				}
			}
			else continue;
		}
	}
}