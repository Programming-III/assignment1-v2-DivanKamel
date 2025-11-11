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






// ==================== Instructor Class Implementation ====================






// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
