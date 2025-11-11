#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;
class Person(){
  private:
      string name;
      int id;
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


//#write Person class here












#endif
