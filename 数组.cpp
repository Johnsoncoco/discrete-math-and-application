#include <iostream>
using namespace std;
void outMr(int *Mr, int n);
void R°R(int *A, int *R, int n);
void copyM(int *A, int *R, int n);
void addM(int *A, int *R, int n);
int compareM(int *A, int *R, int n);
void main()
{
	int Mr[3][3] = { { 1, 0, 1 }, { 0, 1, 0 }, { 1, 1, 0 } };
	outMr((int *)Mr, 3);
	int Mr2[9];
	R°R((int *)Mr2, (int *)Mr, 3);
	int Mr3[9];
	copyM((int *)Mr3, (int *)Mr2, 3);
	int MR[9];
	for (int i = 1;i; )
	{
		R°R((int *)MR, (int *)Mr3, 3);
		i=compareM((int *)MR, (int *)Mr2, 3);
		if (i)
		{ 
			int temp[9];
			copyM((int *)temp, (int *)MR, 3); 
			addM((int *)MR, (int *)Mr3, 3);
			copyM((int *)Mr3, (int *)temp, 3); i = 1;
		}
		else i = 0;
	}
	int M[9];
	addM((int *)M, (int *)MR, 3);
	addM((int *)M, (int *)Mr, 3);
	outMr((int *)M, 3);
}
void outMr(int *Mr, int n)
{
	cout << "Mr is:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << Mr[i*n + j] << " ";
		}
		cout << endl;
	}
}
//计算R°R
void R°R(int *A, int *R, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (R[i*n + j] == 1)
			{
				for (int z = 0; z < n; z++)
				{
					if (R[j*n + z] == 0)continue;
					else A[i*n + z] = 1;
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (A[i*n + j] != 1)A[i*n + j] = 0;
		}
	}
}
//复制数组
void copyM(int *A, int *R, int n)
{
	for (int i = 0; i < n; i++)
	for (int j = 0; j < n; j++)
	{
		A[i*n + j] = R[i*n + j];
	}
}
//数组的比较
int compareM(int *A, int *R, int n)
{
	for (int i = 0; i < n; i++)
	for (int j = 0; j < n; j++)
	{
		if ((A[i*n + j] ) ==(R[i*n + j]))
		{
			if ((i < n - 1) && (j < n - 1))continue;
			else return 0;
		}
		else return 1;
	}
}
//数组的并联
void addM(int *A, int *R, int n)
{
	for (int i = 0; i < n; i++)
	for (int j = 0; j < n; j++)
	{
		if ((A[i*n + j] == 1) || (R[i*n + j])){ A[i*n + j] = 1; }
		else A[i*n + j] = 0;
	}
}