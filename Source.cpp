#include <iostream>
using namespace std;
//������� float � double
void Sum(int *One) {//���������
	*One += 1;//���������� � ������ ����������
	
}


void MySwap(int &first, int &second) {//&������ �� ����������
	int num = first;
	first = second;
	second = num;
}

void FillArray(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{

		arr[i] = i;
	}

	

}



//void MySwap(int *first, int* second) {//&������ �� ����������
//
//	int num = *first;
//	*first = *second;
//	*second = num;
//}
//MySwap(__���������1,__���������2)



int main() {
	//int number = 5;
	//int* ptr = &number; // ���������
	//
	//cout << ptr << endl;//��������� � ������
	//cout << *ptr << endl;//��������� � ������ ����������
	//Sum(ptr);
	//cout << number << endl;
	int numberOne = 5;
	int numberTwo = 8;
	int *first = &numberOne;
	int *second = &numberTwo;
	const int Size = 5;
	int arr[Size]{};





	cout << numberOne << " " << numberTwo << endl;
	MySwap(numberOne,numberTwo);
	cout << numberOne << " " << numberTwo << endl;
	FillArray(arr, Size);
	cout << *arr<<endl;//0 ������� � �������
	cout << arr << endl;
	cout << arr[0] << endl;//�� �� ��� � *arr
	cout << *(arr+1) << endl;//1 ������� � �������










	return 0;
	//��������� - ���������� ������� ������ � ���� �����
}