#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

void gradeStudent(string ID, char*& answers, char*& studentAnswers);

string letterGrade(double grade);


int main() {

    ifstream data;
    data.open("data.txt");

    char* answers = new char[20];

    char* studentAnswers = new char[20];

    string studentId;

    int counter = 0;

    string line;

     while(getline(data,line)){

        if(counter == 0) {
        //cout << line << endl;

            for(int i = 0; i < 20; i++){
                answers[i] = line[i];
            } 
        } else {

            int idIndex = line.find_first_of(" ");

            studentId = line.substr(0, idIndex);
            string y = line.substr(idIndex + 1, line.size());

            //cout << "Student: " << studentId << " Answers: " << y << endl;

            for(int i = 0; i < y.length(); i++){
                studentAnswers[i] = y[i];
            }
            
            /*
            for(int i = 0; i < 20; i++){
                cout << studentAnswers[i] << " ";
            }
            */

           gradeStudent(studentId, answers, studentAnswers);

            cout << endl;

        }

        counter++;
    } 

    /*
    for(int i = 0; i < 20; i++){
        cout << answers[i] << " ";
    }
    */

   
    
    
    cout << endl;



   

}

void gradeStudent(string ID, char*& answers, char*& studentAnswers) {

    int rawScore = 0;
    int numberCorrect = 0;
    double grade;

    for(int i = 0; i < 20; i++){
        if(answers[i] == studentAnswers[i]){
            rawScore += 2;
            numberCorrect++;
        } else if(studentAnswers[i] == ' ') {
            //do nothing
        } else {
            rawScore -= 1;
        }
    }


    grade = (numberCorrect / 20.00) * 100;

    cout<< "Student ID: " << ID << " -- Raw Score: " << rawScore << " -- Grade: " << letterGrade(grade) << " -- Answers: ";

    for(int i = 0; i < 20; i++){
        cout << studentAnswers[i];
    }

    cout << endl;
}

string letterGrade(double grade) {

   if(grade >= 90.00){
        return "A";
   } else if (grade >= 80){
         return "B";
   } else if (grade >= 70){
         return "C";
   } else if (grade >= 60){
         return "D";
   } else {
         return "F";
   }
}

/**
 * 
 *  int counter = 0;

    string answers = new string[20];
    string *answersPtr = answers;
    //answers = new string[20];

    string *studentAnswers;
    studentAnswers = new string[20];

    string line;

    while(getline(data,line)){

        if(counter == 0) {
            //cout << line << endl;

            for(char& c : line) {
              //cout << c << " "; 
              *answers = c;
              answers++; 
             }
        } else {

            int idIndex = line.find_first_of(" ");

            string x = line.substr(0, idIndex);
            string y = line.substr(idIndex + 1, line.size());

            //cout << "Student: " << x << " Answers: " << y << endl;

            for(int i = 0; i < y.size(); i++){
                *studentAnswers = y[i];



                if( i == y.size() - 1){
                    //cout << "do nothing \n";
                    
                    studentAnswers = new string[20];
                } else {
                    //cout << studentAnswers[i];
                    studentAnswers++;
                }
            }


            cout << answers;
            
            //gradeStudent(x, *studentAnswers);

            cout << "\n";          
        }

        



        counter++;
    }
*/
