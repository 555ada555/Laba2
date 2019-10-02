#define _CRT_SECURE_NO_WARNINGS
#include "cl.h"
#include <iostream>
#include <cstring>
#include <string>
#include <time.h>
#include <algorithm>
#include <vector>
#define N 3
using namespace std;

void function() {	/*функція, що виділяє випадкову величину динамічної пам’яті. В пам’яті
					розміщено множину значень одного з цілочисельних полів та відсортовано їх.*/
	srand(time(nullptr));
	int randomIntenger = rand() % 9 + 1;
	cout << randomIntenger << endl;
	int* memory = new int(randomIntenger);
	for (int i = 0; i < randomIntenger; i++)memory[i] = rand() % 10;

	for_each(memory, memory + randomIntenger, [](int value) {cout << value << " "; });
	sort(memory, memory + randomIntenger);
	cout << "\n";
	for_each(memory, memory + randomIntenger, [](int value) {cout << value << " "; });
	cout << "\n" << "\n";
}
int main() {
	function();

	Faculty faculty[5];
	string nameFacult[5] = { "FPCTS", "FEM", "FIR", "FTD", "FHP" };
	for (int i = 0; i < 5; i++)
	{
		Faculty *f = &faculty[i];			 // використання покажчика на екземпляр класу.
		f->nameFaculty = nameFacult[i];
	}


	Student student[5];							//масив об'єктів
	string names[5] = { "Ivan", "Petro", "Dima", "Adam", "Max" };
	for (int i = 0; i < 5; i++)
	{
		Student *st = &student[i];			 // використання покажчика на екземпляр класу.
		st->name = names[i];
		cout << st->name << " ";
	}

	cout << endl;

	Student* student1 = new Student[5];					
	string names1[5] = { "Megan", "Petro", "Dima", "Adam", "Max" };
	for (int i = 0; i < 5; i++)
	{
		Student *st = &student[i];			 // використання покажчика на екземпляр класу.
		st->name = names1[i];
		cout << st->name << " ";
	}

	cout << endl << endl;

	Student* dynamicStudent = new Student; //побудова об'єкта у динамічній пам'яті
	delete dynamicStudent;

	int count;
	cout << "Count of Students ";
	cin >> count;
	Student* students = new Student[count];
	for (int i = 0; i < count; i++)
	{
		students[i].Registration();
		students[i].WriteFile("List.txt");
		students[i].ReadFile("List.txt");
	}


	for (int i = 0; i < count; i++)
	{
		faculty[0].AddStudents(students[i]);
	}



	int m[5] = { 0, 0, 0, 0, 0 };
	Teacher teacher1;
	Teacher *t = &teacher1;  // використання покажчика на екземпляр класу.
	t->name = "Hanna";
	t->surname = "Petrivna";


	for (int i = 0; i < count; i++) {
		t->SetMarksStudents(m, i, students);
	}
	for (int i = 0; i < count; i++) {
		t->ExpelStudents(m, i, students);
	}

	delete[] students;
	delete[] student1;
	system("PAUSE");
}
