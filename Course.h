#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
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
            courseCode= cc;
            name = n;
            max = m;
            s = *Student[50]; 
            current=c; 
        }   
        Course(name, max , current){
            this -> name = name;
            this -> max = max;
            this -> current = current;
        }
        ~Course(){
            delete students[];
        }

        void addStudent(const Student& s){
            students.add(s);
        }
        string displayCourseInfo(){
            return "Course: "<< courseCode << "- "<< name << "Max Students: "<< max << "Currently Enrolled" << current; 
        }
 }














#endif
