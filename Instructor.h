#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
class Instructor : public Person(){
    private:
        string dep;
        int expLev;
    public:
        Instructor(string d, int ex){
            dep = d;
            expLev = ex;
        }
        Instructor(string d){
            dep = d;
            expLev=0;
        }
        ~Instructor(){            
        }
        string getDepartment(){
            return dep;
        }
        int getExperienceLevel(){
            return expLev;
        }
        void setDepartment(string d){
            dep = d;
        }
        void setExperienceLevel(int e){
            expLev = e;
        }

        string display(){
            return "Name: "<<Instructor.getName<<endl<<"Department: " << dep << endl << "Experience: " << expLev;
        }
}












#endif
