#include <iostream>
using namespace std;
const int N = 4;
void main()
{
	//求解最短路径问题
	/*cout << "please input the adjacency matrix:" << endl;
	int MUL[N][N];
	for (int i = 0; i < N; i++)
	{
	for (int j = 0; j < N; j++)
	{
	cin >> MUL[i][j];
	}
	}
	cout << "The adjacency matrix is:" << endl;
	for (int i = 0; i < N; i++)
	{
	for (int j = 0; j < N; j++)
	{
	cout<< MUL[i][j];
	}
	}*/
	int MUL[N][N] = { { 0, 3, 5, 2 },
								{ 3, 0, 2, 1 },
								{ 5, 2, 1, 2 },
								{ 2, 1, 2, 0 }, };
	cout << "请输入起点和终点（a,b,c,d）" << endl;
	char x, y; cin >> x; cin >> y;
	cout << "from " << x << " to " << y;cout << endl << "the weight is:";
	for (int i = 0; i<N; ++i)
	{
		for (int j = 0; j<N; ++j) 
		{
			for (int k = 0; k<N; ++k)
			{
				if (MUL[i][k] + MUL[k][j] < MUL[i][j])
				{
					MUL[i][j] = MUL[i][k] + MUL[k][j];
				}
			}
		}
	}
	cout << MUL[x-'a'][y-'a'];
}