#define _CRT_SECURE_NO_WARNINGS
#include "cl.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void Faculty::AddStudents(Student students)
{
		if (students.faculty == nameFaculty)
		{
			arrayOfStudents.push_back(students);
		}
		countOfStudents++;
}

void Student::Registration() 
{
	cout << endl << "Name ";
	cin >> name;
	cout << "Surname ";
	cin >> surname;
	cout << "Gender ";
	cin >> gender;
	cout << "Age ";
	cin >> age;
	cout << "City ";
	cin >> city;
	cout << "Adress ";
	cin >> adress;
	cout << "Namber phone ";
	cin >> namberPhone;
	cout << "Namber of test book ";
	cin >> namberOfTestBook;
	cout << "Faculty ";
	cin >> faculty;
}

void Teacher::SetMarksStudents(int m[5], int n, Student* students) {
	cout << "Enter marks," << name << " " << surname << endl;
	cout << students[n].name << " " << students[n].surname << " " << endl;
	for (int i = 0; i < 5; i++) {
		cin >> m[i];
		students[n].SetMarks(m, i);
	}
}

void Teacher::ExpelStudents(int marks[5], int count, Student* students)
{
	string temp;
	string temp1;
	for (int i = 0; i < 5; i++) {
		if (students[count].GetMark(i) == 2 && students[count].name != temp && students[count].surname != temp1)
		{
			cout << name << " " << surname << " expel :" << endl;
			cout << students[count].name << " " << students[count].surname << endl;
			temp = students[count].name;
			temp1 = students[count].surname;
		}
	}
}

void Student::ReadFile(string m)
{
	ifstream info;
	info.open(m);
	if (!info.is_open())
	{
		cout << "ERROR";
	}
	else
	{
			info >> name;
			info >> surname;
			info >> gender;
			info >> age;
			info >> city;
			info >> adress;
			info >> namberPhone;
			info >> namberOfTestBook;
	}
	info.close();
}


void Student::WriteFile(string m)
{
	fstream clear_file(m, ios::out);
	clear_file.close();
	ofstream info;
	info.open(m, ios::app);
	if (!info.is_open())
	{
		cout << "ERROR";
	}
	else
	{
		info << name << " " << surname << " " << gender << " " << age << " " << city << " " << adress << " " << namberPhone << " " << namberOfTestBook << endl;
	}
	info.close();
}

void Student::SetAge(int age) {
	this->age = age;
}
void Student::SetCity(string city) {
	this->city = city;
}
void Student::SetAdress(string adress) {
	this->adress = adress;
}
void Student::SetNumberPhone(int numberPhone)
{
	this->namberPhone = numberPhone;
}
void Student::SetNumberOfTestBook(int numberOfTestBook)
{
	this->namberOfTestBook = numberOfTestBook;
}


int Student::GetAge() {
	return age;
}
string Student::GetCity() {
	return city;
}
string Student::GetAdress() {
	return adress;
}
int Student::GetNumberPhone()
{
	return namberPhone;
}
int Student::GetNumberOfTestBook()
{
	return namberOfTestBook;
}

void Student::SetMarks(int marks[5], int i) {
	this->marks[i] = marks[i];
}
int Student::GetMark(int index) {
	return marks[index];
}

void Teacher::SetAge(int age) {
	this->age = age;
}
void Teacher::SetAdress(string adress) {
	this->adress = adress;
}
void Teacher::SetCity(string city) {
	this->city = city;
}
void Teacher::SetNumberPhone(int numberPhone) {
	this->numberPhone = numberPhone;
}


int Teacher::GetAge() {
	return age;
}
string Teacher::GetAdress() {
	return adress;
}
string Teacher::GetCity() {
	return city;
}
int Teacher::GetNumberPhone() {
	return numberPhone;
}
