#pragma once
#include<iostream>
using namespace std;

class Admin {
public:
	char* username = new char[20] {"anonim"};
	char* password = new char[20] {"anonim"};

	void Show();
};