#include<iostream>
#include<vector>
#include<string>
#include <iomanip>
using namespace std;

const int MAX_NUM_OF_CLASSES = 5 ;
const double FEE_PER_UNIT = 31.0  ;

class Course
{
      private:
           string m_name ;
           int    m_units ;
      public:
              
                string getName()
                {
                     return m_name ;
                }
                int getUnits()
                {
                     return m_units ;
                }
            void setName(){
                cout << "Please enter the class name: ";
                getline(cin, m_name);
            }
            void setUnit(){
                cout << "Please enter the number of units for this class: ";
                cin >> m_units;
            }
           
} ;
void enroll(vector<Course> &courses)
{
     bool flag = false;
     do {
        Course course;
        course.setName();
        course.setUnit();
        cout << "You are enrolled." << endl;
        courses.push_back(course);
        flag = true;
     } while (flag != true);
}

void detail(vector<Course> &courses){
    int units = 0;
    cout << "======================================" << endl;
    cout << "List of classes: " << endl;
    for (int i = 0; i < courses.size(); i++)
    {
        cout << i+1<< ": Class: "<< courses.at(i).getName() << setw(40) <<"Units: "<< courses.at(i).getUnits() << endl;
        units += courses.at(i).getUnits();
    }
    cout << "Total classes: " << courses.size() << endl;
    cout << "Total units: " <<units << endl;
    cout << "Total fee: $" << units*31 << ".00" << endl;
    cout << "======================================";

    
}

void units(vector<Course> courses){
    cout <<"Please enter the search units: ";
    int units;
    cin >> units;
    cout << "======================================" << endl;
    cout << "List of classes: " << endl;
    for (int i = 0; i < courses.size(); i++)
    {
        if (courses.at(i).getUnits() >= units)
        {
            cout << "Class: "<< courses.at(i).getName() << setw(40) <<"Units: "<< courses.at(i).getUnits() << endl;
        }
    }

}
void help(){
    cout << "List of available commands:\n" 
         << "enroll  - to enroll in a class\n"
         <<"drop    - to drop from the class list\n"
<< "detail  - to list the enrollment in details\n"
<< "units>= - to search for classes with units greater and equal\n"
<< "exit    - to exit the program" ;
}
void drop(vector<Course> &courses){
    cout << "Please enter the class index to drop: ";
    int index;
    cin >> index;
    cout  << endl;
   if (index >=1 && index <= (courses.size()+1)){
        courses.erase(courses.begin()+index-1);
    }
    else {
        cout << "Invalid index."<< endl;
    }
}





int main(){
    vector<Course> courses;
    int times= 0;
    string option;
    
     do{
        
         if ( times>0){
            cin.clear();
             cin.ignore();
         }
        
        cout << "Please enter a command: ";
        getline(cin, option);
      
        if (option=="enroll"){
            
            
            enroll(courses);
             times++;
        }
        else if (option=="detail"){
            
              detail(courses);
               times++;
        }
        
        else if (option=="units>="){
            
             units(courses);
              times++;
        }
        else if (option=="help"){
            
            help();
             times++;
        }
        else if (option=="drop"){
            drop(courses);
            times++;
        }
        else {
            cout <<"Invalid command. Please enter \"help\" for the list of valid commands.";
             times++;
        }
    
    
    }while(option!="exit");


}