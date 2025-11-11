#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
class Student : public Person(){
    private:
        int year;
        string major;
    public:
        Student(int y,string maj){
            year = y;
            major = maj;
        }
        Student(int y){
            year =y;
            major = "";
        }
        ~Student(){            
        }

        string display(){
            return "Student Info: "<< endl<<"Name: "<< Student.getName<<"Year: " << year << endl << "Major: " << major;
        }
        int getYear(){
            return year;
        }
        string getMajor(){
            return major;
        }
        void setYear(int y){
            year = y;
        }
        void setMajor(string m){
            major = m;
        }
}













#endif
