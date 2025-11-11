#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"

#include <iostream>
using namespace std;

// ==================== Person Class Implementation =========================
class Person(){
   public:
      Person(string name, int id){
        this -> name = name;
        this -> id = id;
      }
      ~Person(){        
      }
      Person(string name){
        this -> name = name;
        id = 0;
      }

    string getName(){
        return this -> name;
    }  
    int getId(){
        return this ->id;
    }
    void setName(string name){
        this -> name = name;
    }
    void setId(int id){
        this -> id= id;
    }

    string display(){
        return name << ": "<< id;
    }
}









// ==================== Student Class Implementation ====================
class Student(){
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






// ==================== Instructor Class Implementation ====================
class Instructor : public Person(){
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






// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
