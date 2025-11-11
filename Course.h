#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
#include <iostream>
using namespace std;
class Course(){
    private:
        string courseCode;
        string name;
        int max;
        Student* students; 
        int current;

     public:
        Course(string cc , string n, int m, Student* s, int c){
            
        }   
        Course(name, max , current){
            
        }
        ~Course(){
            
        }

        void addStudent(const Student& s){
            
        }
        string displayCourseInfo(){
             
        }
 }














#endif
