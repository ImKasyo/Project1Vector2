#pragma once
class Vector
{
	int* arr;
	int size;
public:
	Vector();
	~Vector();


	Vector(int s);
	void InputRand(); // инициализация случ числами
	void Print();// вывод на консоль

	void PushBack(int a);
	int PopBack();
	
	void PuchFront(int value); //Добавил 1-вого значения на начало массива
	void PushFront(int index, int value); //Добавление по индексу, где индекс и значение передается как параметр
	void DeleteIndex(int index); //удаление по индексу
	void AddArrPushBack(int* arr, int size); //добавление массива в конец текущего массива
};

/*
Добавляем следующие методы:
Добаление 1 значения на начало массива
Добавление по индексу, индекс и значение передаем как параметр
Удаление по индексу
удаление первого элемента

Добавление массива в конец текущего массива!


*/