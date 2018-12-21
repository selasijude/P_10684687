

#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;


struct student
{
 string fname;
 string lname;
 string Registration;
 string classes;
}studentData;

//Defiing struct variables for teachers
struct teacher
{
 string fst_name;
 string lst_name;
 string qualification;
 string exp;
 string pay;
 string subj;
 string lec;
 string addrs;
 string cel_no;
 string blod_grp;
 string serves;

}tech[50];//Variable of teacher type

void updateRecord();
void deleteRecord();


int main()
{


int i=0,j;
char choice;
string find;
string srch;

while(1)
{
 system("cls");


 cout<<"**************************************************************************** \n\n";

 cout<<"HELLO AND WELCOME TO MY SCHOOL MANAGEMENT PROGRAM\n\n";

 cout<<"Kindly pick from the options below the respective suitable number \n";
 cout<<endl;

 cout<<"1. STUDENTS INFORMATION \n";
 cout<<endl;
 cout<<"2.  STAFF INFORMATION \n";
 cout<<endl;
 cout<<"3.     COURSES \n";
 cout<<endl;
 cout<<"4.       EXIT \n";
 cin>>choice;

system("cls");


switch(choice)
{

case '1':
 {
while(1)
{
system("cls");

cout<<"       STUDENTS INFORMATION AND BIO DATA SECTION\n\n";
cout<<"Kindly enter the option suitable \n ";
cout<<"1.Add new student\n";
cout<<"2.Find Print Student record\n";
cout<<"3.Edit Student record \n";
cout<<"4.Delete Student record \n";
cout<<"5.Record student grades \n";
cout<<"6.Go back to the MAIN MENU\n";


cin>>choice;

switch (choice)

{
case '1':
{  ofstream f1("student.txt",ios::app);

for( i=0;choice!='n';i++)
{

if((choice=='y')||(choice=='Y')||(choice=='1'))
{
 cout<<"Enter First name: ";
 cin>>studentData.fname;
 cout<<endl;
 cout<<"Enter Last name: ";
 cin>>studentData.lname;
 cout<<endl;
 cout<<"Enter ID number: ";
 cin>>studentData.Registration;
 cout<<endl;
 cout<<"Enter level ";
 cin>>studentData.classes;
 cout<<endl;

 f1<<studentData.fname<<endl<<studentData.lname<<endl<<studentData.Registration<<endl<<studentData.classes<<endl;

 cout<<"Kindly Press Y to create a NEW ENTRY or N to complete  ";
 cin>>choice;
}
}
f1.close();
}
continue;

case '2':
{  ifstream f2("student.txt");

cout<<"Kindly input student's first name to be displayed: ";

cin>>find;
cout<<endl;
int notFound = 0;
for( j=0;(j<i)||(!f2.eof());j++)
{

getline(f2,studentData.fname);

if(studentData.fname==find)
{
 notFound = 1;
 cout<<"First Name: "<<studentData.fname<<endl;
 cout<<"Last Name: "<<studentData.lname<<endl;

 getline(f2,studentData.Registration);
 cout<<"Registration No number: "<<studentData.Registration<<endl;
 getline(f2,studentData.classes);
 cout<<"Class: "<<studentData.classes<<endl<<endl;
}

}

if(notFound == 0){

cout<<"No Record Found"<<endl;
}
f2.close();
cout<<"Press any key two times to proceed";
getch();
getch();

}
continue;



case '3':
    {
    updateRecord();
    getch();
      break;
    }
continue;


case '4':
    {
      deleteRecord();
      getch();
      break;
    }
continue;



case '5':
    {
      cout<<"Kindly enter students firstname to enter grades";
      cin>>studentData.fname;
      int ia;
      int exm;
      int ass;
      int total;
      cout<<"Enter students IA score(out of 20) \n";
      cin>>ia;
      cout<<"Enter student assignment score(out of 10) \n";
      cin>>ass;
      cout<<"Enter students Exam score(out of 70) \n" ;
      cin>>exm;
      getch();
      break;
    }
continue;



case '6':
{
break;
}
}

break;
}
continue;
}


//STAFF  SESSION

case '2':
{
while(1)
{
system("cls");

cout<<"        WELCOME TO THE STAFF SECTION \n\n";

cout<<"Kindly enter the option suitable to you"<<endl;
cout<<"1.Make new entry\n";
cout<<"2.Find and display\n";
cout<<"3.Edit Staff record \n";
cout<<"4.Delete Staff record \n";
cout<<"5.Jump to main\n";
cin>>choice;

switch (choice)
{
case '1':
{
ofstream t1("teacher.txt",ios::app);

for(i=0;choice!='n'&& choice!='N';i++)
{

 if((choice=='y')||(choice=='Y')||(choice=='1'))
 {
  cout<<"Input the staff' First name: ";
  cout<<endl;
  cin>>tech[i].fst_name;
  cout<<endl;
  cout<<" KIndly Enter Last name:: ";
  cin>>tech[i].lst_name;
  cout<<endl;
  cout<<"Input his/her qualification: ";
  cin>>tech[i].qualification;
  cout<<endl;
  cout<<"Kindly input the staff' years of experience:  ";
  cin>>tech[i].exp;
  cout<<endl;
  cout<<"How long has the staff been in the school:  ";
  cin>>tech[i].serves;
  cout<<endl;
  cout<<"Kindly enter the course(s) taught by the staff:  ";
  cin>>tech[i].subj;
  cout<<endl;
  cout<<"Kindly Enter the number of working hours per week:  ";
  cin>>tech[i].lec;
  cout<<endl;
  cout<<"kindly input the staff' monthly salary:  ";
  cin>>tech[i].pay;
  cout<<endl;
  cout<<"Please input the staff' phone nunber:  ";
  cin>>tech[i].cel_no;
  cout<<"Enter the ID of the staff:  ";
  cin>>tech[i].blod_grp;
  cout<<endl;


  t1<<tech[i].fst_name<<endl<<tech[i].lst_name<<endl
   <<tech[i].qualification<<endl<<tech[i].exp<<endl
   <<tech[i].serves<<endl<<tech[i].subj<<endl<<tech[i].lec
   <<endl<<tech[i].pay<<endl<<tech[i].cel_no<<endl<<tech[i].blod_grp<<endl;

  cout<<"Do you want to Make a new entry('y' for yes and 'n' for no:  ";
  cin>>choice;
 }
}

system("cls");



t1.close();
}

continue;

case '2':
{
ifstream t2("teacher.txt");

cout<<"Kindly input firstname name to be displayed: ";
cin>>find;

cout<<endl;
int notFound = 0;
for( j=0;((j<i)||(!t2.eof()));j++)
{

 getline(t2,tech[j].fst_name);

 if(tech[j].fst_name==find)
 {
  notFound = 1;
  cout<<"First name: "<<tech[j].fst_name<<endl;
  getline(t2,tech[j].lst_name);
  cout<<"Last name: "<<tech[j].lst_name<<endl;
  getline(t2,tech[j].qualification);
  cout<<"Qualification: "<<tech[j].qualification<<endl;
  getline(t2,tech[j].exp);
  cout<<"Experience: "<<tech[j].exp<<endl;

  getline(t2,tech[j].serves);
  cout<<" number of year in this School: "<<tech[j].serves<<endl;

  getline(t2,tech[j].subj);
  cout<<"Subject whos teach: "<<tech[j].subj<<endl;

  getline(t2,tech[j].lec);
  cout<<"Enter Lecture(per Week): "<<tech[j].lec<<endl;
  getline(t2,tech[j].pay);
  cout<<"pay: "<<tech[j].pay<<endl;

  getline(t2,tech[j].addrs);
  cout<<"Address: "<<tech[j].addrs<<endl;

  getline(t2,tech[j].cel_no);
  cout<<"Phone Number: "<<tech[j].cel_no<<endl;

  getline(t2,tech[j].blod_grp);
  cout<<"Bool Group: "<<tech[j].blod_grp<<endl;
 }

}
t2.close();
if(notFound == 0){

 cout<<"No Record Found"<<endl;
}
cout<<"Press any key two times to proceed";
getch();
getch();
}

continue;


case '3':
    {
    updateRecord();
    getch();
      break;
    }
continue;


case '4':
    {
      deleteRecord();
      getch();
      break;
    }
continue;

case '5':
{
break;
}

}

break;
}

continue;
}

//COURSES SESSION
int noc;

case '3':
{
    cout<<"Enter the number of courses you will register this semester\n";
    cin>>noc;
    struct course {
        string arr[ ];
         };
        course cour;
    cout<<"Enter all the "<<noc<<" courses you'll be registering ";
    cin>>cour.arr[noc];
    break;
}
continue;
//EXITING THE PROGRAM

case '4':
{
break;
}
}
break;
}


}



void deleteRecord()
{
 /*
 Student temp;
 char choice;
 int position;
 MyFile.open( FILE_PATH, ios :: binary | ios :: in | ios :: out );
 MyFile.clear();
 MyFile.seekp( position * sizeof( Student ), ios :: beg );
 MyFile.read( ( char* )&temp, sizeof( Student ) );
 cout << endl << endl;
 cout << "Would you like to delete this record? Yes (y) or No (n): ";
 cin >> choice;
 choice = getch();
 MyFile.seekp( position * sizeof( Student ), ios :: beg );
 MyFile.write( ( const char* )&temp, sizeof( Student ) );
 getch();
 system("cls");
 mainMenu();
 MyFile.close();

 */
}



void updateRecord()
{
 /*Student temp;
 time_t t;
 char choice;
 int position;
 position = displayRecord ();
 MyFile.open( FILE_PATH, ios :: binary | ios :: out );
 MyFile.clear();
 if( position != -1 )
 {
 cout << endl << "Do you want to Update this Record( y or n )";
choice = getch();
 }
if( choice == 'y' )
 {
 cout << endl << "Enter name : ";
 cin >> temp.names;
 cout << endl << "And your age : ";
 cin >> temp.other;
 MyFile.open( FILE_PATH, ios :: binary | ios :: out );
 MyFile.clear();
 MyFile.seekp( position * sizeof( Student ), ios :: beg );
 MyFile.clear();
 MyFile.write( ( const char* ) &temp, sizeof( Student ) );
 MyFile.close();
 }*/
}

