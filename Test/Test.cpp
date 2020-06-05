#include<iostream>
using namespace std;
int main()
{
	int arr[7] = { 1,4,3,2,5,7,6 };
	int *front = &arr[0];
	int *back  = &arr[6];
	for (int a = 0; a < 3; a++)
	{
		int num = *(front + a);//1 4 3
		*(front + a) = *(back - a);//1 4 3 = 
		*(back - a) = num;
	}

	for (int i = 0; i < 7; i++)
	{
		cout << arr[i] << " ";
	}
}
/*
	for (int a = 0; a < 3; a++)
	{
		int num = *front;
		*front = *back;
		*back = num;
		back--;
		front++;

	}*/