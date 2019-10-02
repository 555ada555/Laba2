#pragma once
#include <string>
#include <vector>
using namespace std;
/*
Система Університет, кожен Студент може записуватись на Факультет, та складати іспити. Викладачі можуть
переглядати списки записаних студентів, а також виставляти оцінки за іспити, якщо є оцінки менше за 3, то
Викладач відраховує Студента

1. Визначити 2 будь - яких користувацьких класи, обраних з варіанта завдань(не менше 8 полів на клас).
2. кожен клас повинен містити 3 загальні та 5 приватні елементи.Відобразити використання усіх полів даних в
методах.
3. Забезпечити зв'язок двох об’єктів шляхом розміщення об’єкта одного класу в іншому без використання
дружніх функцій.
4. В кожному класі визначити 6 методів, які опрацьовують описані дані(два методи мають бути
перевантаженими), де один метод приймає в якості параметрів об’єкт класу, а ще один метод повертає тип
класу.
5. Визначити в класі методи для запису у файл та читання з файлу полів даних.
6. У програмі побудувати 5 об'єктів, розміщених у статичній пам’яті, та 5 об’єктів - у динамічній пам'яті.
7. В основній програмі визначити 2 масиви об'єктів.
8. Продемонструвати роботу з об’єктами, розміщеними в даному масиві.
9. Продемонструвати роботу усіх методів, описаних в класах.
10. Продемонструвати сценарій взаємодії двох об’єктів(наприклад маємо два класи : студент і книга, тоді
необхідно показати, як студент купує книгу).
11. Показати в програмі використання покажчика на екземпляр класу.
12. Визначити додатковий метод в класі, який виділяє випадкову величину динамічної пам’яті.В пам’яті
розмістити множину значень одного з цілочисельних полів та відсортувати їх.
13. В тексті програми вказати в коментарях реалізацію кожного пункту даного завдання.
14. Оформлення програмного коду повинно дотримуватися правил code style
15. Програма використає три файли : заголовний h - файл із визначенням класу, cpp - файл із реалізацією класу, сppфайл демонстраційної програми.*/

class Student;

class Faculty {private:	int countOfStudents;public:	string nameFaculty;	vector<Student> arrayOfStudents;	void AddStudents(Student students);};


class Student   // другий користувацький клас
{
public:
	string name, surname, gender; // 3 загальні об`єкти першого класу
	string faculty;
private:
	int age;	// 5 приватних елементи другого класу
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

	void WriteFile(string m); //метод для запису у файл
	void ReadFile(string m); //метод для читання з файлу

};


class Teacher // перший користувацький клас
{	class ListOfStudents
	{
	private:
		vector<Student> student;
	};
public:
	string name, surname, gender; // 3 загальні об`єкти першого класу
private:
	int age;	 // 5 приватних елементи першого класу
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
