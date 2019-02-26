#pragma once
#include<iostream>
using namespace std;

class student {
	private:
		char *name;
		int nameLengh;
		unsigned int id;
		double score;
	public:
		void output()const;
		void input();
		~student();
		student();
		student(const student &);
};

student::student() {	//构造函数
	char *a = new char[2]; unsigned int b; double c; int nameLen = 1;
	cout << "name ?" << endl;
	cin >> a;
	cout << "id ?" << endl;
	cin >> b;
	cout << "score ?" << endl;
	cin >> c;
	this->name = a;
	id = b;
	score = c;
}
student::student(const student &old) {	//复制构造函数-----有问题保持密切注意
	id = old.id;
	score = old.score;
	nameLengh = strlen(old.name);
	cout << "coping started!" << endl;
	this->name = new char[nameLengh + 1];
	strcpy_s(this->name,nameLengh+1, old.name);
}
student::~student() {
	delete(name);
}
void student::output() const
{
	cout << "name: " << this->name << "\t" << "id: " << this->id << "\t" << "score: " << this->score << endl;
}
void student::input() {
	char *a = new char[20]; unsigned int b; double c;
	cout << "name ?" << endl;
	cin >> a;
	cout << "id ?" << endl;
	cin >> b;
	cout << "score ?" << endl;
	cin >> c;
	this->name = a;
	id = b;
	score = c;
}