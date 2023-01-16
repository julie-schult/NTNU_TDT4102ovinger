#include "Fibonacci.h"
#include "Matrix.h"
#include "Dummy.h"

void fillInFibonacciNumbers(int result[], int length){
    int start = 0;
	int end = 1;
	int sum;
	for (int i = 0; i < length; ++i)
	{
		result[i] = start;
		sum = start + end;
		start = end;
		end = sum;
	}
}

void printArray(int arr[], int length){
    for (int i=0;i<length;i++){
        cout<<arr[i]<<endl;
    }
}

 void createFibonacci(){
    int length;
	cout << "How many numbers? ";
	cin >> length;
	int *numbers = new int[length] {};
	fillInFibonacciNumbers(numbers, length);
	printArray(numbers, length);
	delete[] numbers;
	numbers = nullptr;
 }