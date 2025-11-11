#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#include <iostream>
#using namespace std;
class Student : public Person(){
    private:
        int year;
        string major;
    public:
        Student(int y,string maj){
            
        }
        Student(int y){
           
        }
        ~Student(){            
        }

        string display(){
            
        }
        int getYear(){
            
        }
        string getMajor(){
           
        }
        void setYear(int y){
            
        }
        void setMajor(string m){
            
        }
}













#endif
