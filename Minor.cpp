https://github.com/Vanshree1Aswasthi/Minor-Project-

#include <iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct student
{
    char name[20],roll[20];
    int marks,random;
};
student st;
void cpp()

{  
    char choice;
    st.marks=0;
    int i=0,arr[5];
    while(i<6)
    {
        back:
    st.random=rand()%5;//To generate random number of options
    for(int j=0;j<=5;j++)
    {
        if(st.random==arr[j])
        {
            goto back;
        }
    }
    arr[i]=st.random;
   switch(st.random){
       case 0:
   cout<<i+1<<")What does the * operator do in C++ when used with a pointer? A. Declares a new pointer B. Dereferences the pointer to access the value it points to C. Creates a new memory address D. Returns the address of the pointer itself"<<endl;
   choice=getch();
    if(choice=='B' || choice=='b')
    {
        cout<<"Your answer is Correct"<<endl;
        st.marks++;
    }
    else
    {
     cout<<"Your answer is Incorrect"<<endl; 
     cout<<"correct answer is B "<<endl;
    }
   break;
   case 1:
   cout<<i+1<<"(Which of the following is NOT a pillar of OOP? A. Polymorphism B. Encapsulation C. Abstraction D. Inheritance E.None of the Above "<<endl;
   choice=getch();
    if(choice=='E' || choice=='e')
    {
        cout<<"Your answer is Correct"<<endl;
        st.marks++;
    }
    else
    {
     cout<<"Your answer is Incorrect"<<endl; 
     cout<<"correct answer is E "<<endl;
    }
    break;
    case 2:
   cout<<i+1<<"(Templates in C++ are used for: A. Creating generic functions and classes B. Defining data types C. Implementing inheritance D. Managing memory allocation"<<endl;
   choice=getch();
    if(choice=='A' || choice=='a')
    {
        cout<<"Your answer is Correct"<<endl;
        st.marks++;
    }
    else
    {
     cout<<"Your answer is Incorrect"<<endl; 
     cout<<"correct answer is A "<<endl;
    }
    break;
    case 3:
   cout<<i+1<<"(The try-catch block is used for: A. Defining functions B. Creating loops C. Handling errors and exceptions D. Implementing inheritance"<<endl;
   choice=getch();
    if(choice=='C' || choice=='c')
    {
        cout<<"Your answer is Correct"<<endl;
        st.marks++;
    }
    else
    {
     cout<<"Your answer is Incorrect"<<endl; 
     cout<<"correct answer is C "<<endl;
    }
   cout<<i+1<<"(Which STL container is best suited for efficient random access to elements? A. vector B. list C. map D. set"<<endl;
    choice=getch();
    if(choice=='A' || choice=='a')
    {
        cout<<"Your answer is Correct"<<endl;
        st.marks++;
    }
    else
    {
     cout<<"Your answer is Incorrect"<<endl; 
     cout<<"correct answer is A "<<endl;
    }
    break;
}
i++;
}
}
void java()
{
        char choice;
    st.marks=0;
    int i=0,arr[5];
    while(i<6)
    {
        back:
    st.random=rand()%5;//To generate random number of options
    for(int j=0;j<=5;j++)
    {
        if(st.random==arr[j])
        {
            goto back;
        }
    }
    arr[i]=st.random;
   switch(st.random){
       case 0:
   cout<<i+1<<")Which of the following is not a primitive data type in Java?a) int b) char c) boolean d) String"<<endl;
   choice=getch();
    if(choice=='D' || choice=='d')
    {
        cout<<"Your answer is Correct"<<endl;
        st.marks++;
    }
    else
    {
     cout<<"Your answer is Incorrect"<<endl; 
     cout<<"correct answer is D "<<endl;
    }
   break;
   case 1:
   cout<<i+1<<"(What is the purpose of the finally block in Java exception handling? a) It is executed only if an exception occurs. b) It is executed regardless of whether an exception occurs. c) It is executed only if no exception occurs. d) It is never executed."<<endl;
   choice=getch();
    if(choice=='B' || choice=='b')
    {
        cout<<"Your answer is Correct"<<endl;
        st.marks++;
    }
    else
    {
     cout<<"Your answer is Incorrect"<<endl; 
     cout<<"correct answer is B "<<endl;
    }
    break;
    case 2:
   cout<<i+1<<"(Which of the following is the correct syntax for creating a multi-line comment in Java? a) /* This is a multi-line comment */ b) // This is a multi-line comment c) # This is a multi-line comment d) ; This is a multi-line comment"<<endl;
   choice=getch();
    if(choice=='A' || choice=='a')
    {
        cout<<"Your answer is Correct"<<endl;
        st.marks++;
    }
    else
    {
     cout<<"Your answer is Incorrect"<<endl; 
     cout<<"correct answer is A "<<endl;
    }
    break;
    case 3:
   cout<<i+1<<"(What is the difference between == and equals() in Java? a) == compares object references, while equals() compares object contents. b) == compares object contents, while equals() compares object references. c) Both == and equals() compare object references. d) Both == and equals() compare object contents."<<endl;
   choice=getch();
    if(choice=='A' || choice=='a')
    {
        cout<<"Your answer is Correct"<<endl;
        st.marks++;
    }
    else
    {
     cout<<"Your answer is Incorrect"<<endl; 
     cout<<"correct answer is A "<<endl;
    }
   cout<<i+1<<"(Which of the following is the correct way to declare a constant in Java? a) final int CONSTANT_NAME = value; b) const int CONSTANT_NAME = value; c) #define CONSTANT_NAME value d) var CONSTANT_NAME = value;"<<endl;
    choice=getch();
    if(choice=='A' || choice=='a')
    {
        cout<<"Your answer is Correct"<<endl;
        st.marks++;
    }
    else
    {
     cout<<"Your answer is Incorrect"<<endl; 
     cout<<"correct answer is A "<<endl;
    }
    break;
}
i++;
}
}

void result()
{
    int per=0;
    cout<<"Student Name:"<<st.name<<endl;
    cout<<"Roll No.:"<<st.roll<<endl;
    cout<<"Marks:"<<st.marks<<"out of 6"<<endl;
    per=100*st.marks/6;
    cout<<"Percentage:"<<per<<"%"<<endl;
    if(per>=50)
    {
        cout<<"status:Pass"<<endl;
    }
    else
    {
        cout<<"status:Fail"<<endl;
    }
}
int main()
{
    char press,select;
    do
  
    {
        cout<<"\n\n\t\t**"<<endl;
        cout<<"\t\t QUIZ SYSTEM"<<endl;
        cout<<"\t\t**"<<endl;
        cout<<"\t\tEnter name:";
        gets(st.name);
        cout<<"\t\tRoll no:";
        gets(st.roll);
        // system("cls");
        cout<<"\t\tMarks less than 50% will be fail"<<endl<<endl;
        cout<<"select which subject quiz you want to perform"<<endl;
        cout<<"1)C++"<<endl;
        cout<<"1)Java"<<endl;
        
        select=getch();
        system("CLS");
        switch(select)
        {
         case '1' :
         cout<<"\t\tc++ Quiz"<<endl;
         cpp();
         system("CLS");
         cout<<"\t\tc++ Quiz Result"<<endl;
         result();
         break;
        
        case '2':
        cout<<"\t\t Java Quiz"<<endl;
        java();
        system("CLS");
         cout<<"\t\tJava Quiz Result"<<endl;
         result();
        break;
        
        
            
        default:
        cout<<"Invalid Input"<<endl;
        break;
        }
        cout<<"Disclaimer:Press y to continue or any key to terminate"<<endl;
        press=getch();
    }
    while(press=='y' || press=='Y');

    return 0;
}
