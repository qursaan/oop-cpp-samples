#include "Student.h"
#include <iostream>

Student::Student(int size){
	this->_size = size;
	grade = new int[size];
}

Student::~Student(){
	delete []grade;
}

void Student::print()const{
	for (int i=0; i<_size; ++i){
		std::cout << grade[i]<<std::endl;
	}
}

bool Student::addScore(int score, int index){
    if(index < _size && index >= 0){
        grade[index] = score;
        return true;
    }
    return false;
}
