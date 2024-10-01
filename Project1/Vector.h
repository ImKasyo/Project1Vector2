#pragma once
class Vector
{
	int* arr;
	int size;
public:
	Vector();
	~Vector();


	Vector(int s);
	void InputRand(); // ������������� ���� �������
	void Print();// ����� �� �������

	void PushBack(int a);
	int PopBack();
	
	void PuchFront(int value); //������� 1-���� �������� �� ������ �������
	void PushFront(int index, int value); //���������� �� �������, ��� ������ � �������� ���������� ��� ��������
	void DeleteIndex(int index); //�������� �� �������
	void AddArrPushBack(int* arr, int size);
};

/*
��������� ��������� ������:
��������� 1 �������� �� ������ �������
���������� �� �������, ������ � �������� �������� ��� ��������
�������� �� �������
�������� ������� ��������

���������� ������� � ����� �������� �������!


*/