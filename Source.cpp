#include <iostream>
using namespace std;
//разница float и double
void Sum(int *One) {//указатель
	*One += 1;//обращаемся к данной переменной
	
}


void MySwap(int &first, int &second) {//&ссылка на переменную
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



//void MySwap(int *first, int* second) {//&ссылка на переменную
//
//	int num = *first;
//	*first = *second;
//	*second = num;
//}
//MySwap(__Указатель1,__Указатель2)



int main() {
	//int number = 5;
	//int* ptr = &number; // указатель
	//
	//cout << ptr << endl;//обращение к адресу
	//cout << *ptr << endl;//обращение к данной переменной
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
	cout << *arr<<endl;//0 элемент в массиве
	cout << arr << endl;
	cout << arr[0] << endl;//то же что и *arr
	cout << *(arr+1) << endl;//1 элемент в массиве










	return 0;
	//указатель - переменная которая хранит в себе адрес
}