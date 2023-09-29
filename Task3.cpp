#include <iostream>
#include <string>
using namespace std;

const int max_students = 100; // we consider 100 as the maximum number of students

int main() {
    string names[max_students]; //to store the names of the students.
    double marks[max_students]; //to store the grade marks of each student.
    
    int cnt;
  
    double total = 0; // to calculate the total grade marks.
    double max = 0; // to store the maximum grade marks.
    double min = 100; // to store the minimum grade marks.
    
    cout <<"\nWelcome to the Student Grade Management System..." << endl;
    cout<<"Type exit to end!\n";
    
    while(cnt < max_students)
    {
        cout<<"\nEnter the name of student"<<cnt+1<<" :";
        cin>>names[cnt];
        
        if(names[cnt] == "Exit")
        {
            cout<<endl;  
            break;
        }
        cout<<"\nEnter the grade marks of student"<<cnt+1<<" :";
        cin>>marks[cnt];
        
        total += marks[cnt];
        
        if(marks[cnt] > max)
            max = marks[cnt];
        
        if(marks[cnt] < min)
            min = marks[cnt];
        cout<<endl;
        cnt++;
    }
    
    if(cnt == 0)
    {
        cout<<endl<<"No students exists!"<<endl;
        return 0;
    }
    
    double avg = total/cnt; //calculating the average grade marks.  
    //Printing the results:
    cout<<"\nAverage grade marks: "<<avg<<endl;
    cout<<"Highest grade marks: "<<max<<endl;
    cout<<"Lowest grade marks: "<<min<<endl;
    
    return 0;
}
