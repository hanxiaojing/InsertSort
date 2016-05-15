#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

#include<assert.h>

void Print(int* a,int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;
}

//Sequence in ascending order 
void InsertSort(int* a,int size)
{
	assert(a);
	for (int begin = 0; begin < size ; begin++)
	{
		int tmp = a[begin];
		int end = begin-1;
		while (end >= 0 && tmp < a[end])
		{
			a[end+1] = a[end];
			a[end] = tmp;
			end--;
		}
	}
}


void TestInsertSort()
{
	int a[10] = { 1, 9, 8, 6, 9, 9, 3, 7, 2, 4 };
	InsertSort(a, sizeof(a) / sizeof(a[0]));
	Print(a,sizeof(a)/sizeof(a[0]));
}


int main()
{
	TestInsertSort();
	system("pause");
	return 0;
}