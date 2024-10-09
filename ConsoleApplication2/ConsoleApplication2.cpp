#pragma region First
//#include<iostream>
//#include"Admin.h"
//using namespace std;
//
//void Admin::Show() {
//	cout << username << endl;
//	cout << password << endl;
//}
//
//void main() {
//	Admin a;
//	a.Show();
//}
#pragma endregion

#include<iostream>
using namespace std;


class Student {
	int id;
	string name;
	string surname;
	int age; 
	string group_no;
	string speciality;
	string city;

	static int s_id;

public:
	Student() {
		s_id++;
		id = s_id;
		this->name = "";
		this->surname = "";
		this->group_no = "";
		this->speciality = "";
		this->city = "";
		this->age = 0;
	}

	Student(string name,string surname,string group_no,string speciality,string city,int age):Student() {

		this->name = name;
		this->surname = surname;
		this->group_no = group_no;
		this->speciality = speciality;
		this->city = city;
		this->age = age;
	}

	string Get_Name() const {
		return name;
	}

	void Set_Name(string name) {
		if (name.length() > 3) {
			this->name = name;
		}
		else {
			cout << "False" << endl;
		}
	}

	void Show_Student() const {
		cout << "ID: " << id << endl;
		cout << "Name: " << name << endl;
		cout << "Surname: " << surname << endl;
		cout << "Speciality: " << speciality << endl;
		cout << "City: " << city << endl;
		cout << "Age: " << age << endl;
		cout << "Group_no: " << group_no << endl;
	}

};

int Student::s_id = 0;

void Show_All_Students(Student**&students,int&size) {
	for (size_t i = 0; i < size; i++)
	{
		cout << "_______________________" << endl;
		students[i]->Show_Student();
		cout << "_______________________" << endl;
	}
}

void main() {

	/*
	
	Student id,name,surname,age,group_no,speciality,city 
	kecirilen her seyden istifade edin
	heapde obyektlerini yaradin massive yigin
	CRUD ememliyyatlarini edin
	*/

	Student* student1 = new Student("Ali", "Memmedov", "FSDE_789", "Programer", "Baku", 17);
	Student* student2 = new Student("Murad", "Aliyev", "FMDS_75", "Cyber security", "Baku", 34);
	Student* student3 = new Student("Mahmud", "Mahmudlu", "FDEM_45", "Designer", "Baku", 53);

	int size = 3;
	Student** students = new Student * [size] {student1, student2, student3};

	Show_All_Students(students, size);

}
