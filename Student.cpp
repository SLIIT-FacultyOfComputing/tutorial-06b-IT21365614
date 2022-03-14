#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

void Student::assignDetails(int sId, char sName[]) {
  studentId = sId;
  strcpy(name, sName);
}

void Student::display() {
  cout << "The student Id is: " << studentId << endl;
  cout << "The name of the student is : " << name << endl;
}
