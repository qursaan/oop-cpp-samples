#include<string>

#ifndef STUDENT_H
#define STUDENT_H

class Student{

private:
	int *grade;
	int _size;
	std::string name;

public:
	Student(int size);
	~Student();
	void print() const;
	bool addScore(int , int );

};

#endif // STUDENT_H
