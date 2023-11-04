#include<iostream>
struct Student{
    int studentID;
    double GPA;
};
void printStudentInfo(Student s){
    std::cout << "Student ID: " << s.studentID << '\n';
    std::cout << "Student GPA: " << s.GPA << '\n';
}
int main(){

struct Student alice = {101, 3.8};
printStudentInfo(alice);
return 0;

}
