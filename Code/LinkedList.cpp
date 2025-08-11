/*Operations on LL:
1. Insertion: 1. Insert a node(Element) in the beg; 2. insertion in the End. 3. insertion After a specific node.
    Printing Last node: Atleast one node should be there, Printing second last atleast 2 node should be there...
2. Finding the length of the LL.
3. Deletion: 1. Deletion of nods beg; 2. Deletion Last node; 3. Deletion from anywhere
4. Priting a LL; Printing a LL in reverse order
5. Searching an element in LL
6. Sorting in LL

 Create:
  dataType* ptr_name = new dataType;
  *ptr_name = value;
   Delete: 
   delete ptr_name; */

#include<iostream>
Student* ins_Beg(Student* S, int data)
    struct Student{
        int data;
        Student* Link;
    };
int main()
{
    Student* Start = NULL;
    Student* temp = new Student;
    Start = temp;
    temp -> data = 10;
    temp -> Link = new Student;
    temp -> Link -> data = 20;
    temp -> Link -> Link = new Student; 
    temp -> Link -> Link -> data = 30;
    temp -> Link -> Link -> Link = NULL;
    std :: cout << "1st Node Data:"<< temp -> data << "\n2nd Node Data: "<< temp -> Link -> data << "\nThird Node Data: "<< temp -> Link -> Link -> data;
    Student S;
    ins_Beg(&Student, data);
}
Student* ins_Beg(Student* S, int data){
return 0;
}


