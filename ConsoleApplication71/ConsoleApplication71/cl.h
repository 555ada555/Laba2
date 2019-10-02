#pragma once
#include <string>
#include <vector>
using namespace std;
/*
������� ����������, ����� ������� ���� ������������ �� ���������, �� �������� ������. ��������� ������
����������� ������ ��������� ��������, � ����� ���������� ������ �� ������, ���� � ������ ����� �� 3, ��
�������� �������� ��������

1. ��������� 2 ���� - ���� �������������� �����, ������� � ������� �������(�� ����� 8 ���� �� ����).
2. ����� ���� ������� ������ 3 ������� �� 5 ������� ��������.³��������� ������������ ��� ���� ����� �
�������.
3. ����������� ��'���� ���� �ᒺ��� ������ ��������� �ᒺ��� ������ ����� � ������ ��� ������������
������ �������.
4. � ������� ���� ��������� 6 ������, �� ������������ ������ ���(��� ������ ����� ����
���������������), �� ���� ����� ������ � ����� ��������� �ᒺ�� �����, � �� ���� ����� ������� ���
�����.
5. ��������� � ���� ������ ��� ������ � ���� �� ������� � ����� ���� �����.
6. � ������� ���������� 5 ��'����, ��������� � �������� �����, �� 5 �ᒺ��� - � �������� ���'��.
7. � ������� ������� ��������� 2 ������ ��'����.
8. ���������������� ������ � �ᒺ�����, ���������� � ������ �����.
9. ���������������� ������ ��� ������, �������� � ������.
10. ���������������� ������� �����䳿 ���� �ᒺ���(��������� ���� ��� ����� : ������� � �����, ���
��������� ��������, �� ������� ���� �����).
11. �������� � ������� ������������ ��������� �� ��������� �����.
12. ��������� ���������� ����� � ����, ���� ������ ��������� �������� �������� �����.� �����
��������� ������� ������� ������ � ������������� ���� �� ����������� ��.
13. � ����� �������� ������� � ���������� ��������� ������� ������ ������ ��������.
14. ���������� ����������� ���� ������� ������������� ������ code style
15. �������� ��������� ��� ����� : ���������� h - ���� �� ����������� �����, cpp - ���� �� ���������� �����, �pp���� �������������� ��������.*/

class Student;

class Faculty {private:	int countOfStudents;public:	string nameFaculty;	vector<Student> arrayOfStudents;	void AddStudents(Student students);};


class Student   // ������ �������������� ����
{
public:
	string name, surname, gender; // 3 ������� ��`���� ������� �����
	string faculty;
private:
	int age;	// 5 ��������� �������� ������� �����
	string city;
	string adress;
	int namberPhone;	int namberOfTestBook;	int marks[5];
public:
	void Registration();
	void SetAge(int age);
	void SetCity(string city);
	void SetAdress(string adress);
	void SetNumberPhone(int numberPhone);
	void SetNumberOfTestBook(int numberOfTestBook);
	void SetMarks(int marks[5], int i);

	int GetAge();
	string GetCity();
	string GetAdress();
	int GetNumberPhone();	int GetNumberOfTestBook();
	int GetMark(int index);

	void WriteFile(string m); //����� ��� ������ � ����
	void ReadFile(string m); //����� ��� ������� � �����

};


class Teacher // ������ �������������� ����
{	class ListOfStudents
	{
	private:
		vector<Student> student;
	};
public:
	string name, surname, gender; // 3 ������� ��`���� ������� �����
private:
	int age;	 // 5 ��������� �������� ������� �����
	string city;
	string adress;
	int numberPhone;
public:
	void SetAge(int age);
	void SetCity(string cours);
	void SetAdress(string adress);
	void SetNumberPhone(int numberPhone);

	int GetAge();
	string GetCity();
	string GetAdress();
	int GetNumberPhone();	void SetMarksStudents(int marks[5], int count, Student* students);	void ExpelStudents(int marks[5], int count, Student* students);
};
