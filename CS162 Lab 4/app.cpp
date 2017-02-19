#include "student.h"

int main()
{
	Student s1("G10", 3.9);
	Student s2("G20", 3.5);

	s1.print();
	s2.print();

	if (s1.isLessThanByID(s2))
	{
		cout << "about right!" << endl;
	}
	else
	{
		cout << "uhmm ..." << endl;
	}
	if (!s1.isLessThanByGpa(s2))
	{
		cout << "about right!" << endl;
	}
	else
	{
		cout << "uhmm ..." << endl;
	}
	return 0;

}




	/*
	implement the three member functions in student.h
	fill in the implementation in student.cpp:

	Student(const chr initId[], double gpa)
	--function will initialize a newly created student object with the passed in value

	bool isLessThanByID(const Student& aStudent)
	--function will compare the current student object with the passed in one by ID

	bool isLessThanByGpa(const Student& aStudent)
	--the function will compare the current student object with the passed in one by gpa


	app.cpp is used to test your code.

	You can build the app using hte make utility, which is suppored by the file named makefile in the directory
	For lab4 submission, copy the function Student(..) and bool isLessThanByID(..) implementatino into lab4.txt,
	then append the output of the app to the file using the command line below
	ftp lab4.txt to your local machine and upload it to the desire2learn dropbox
	./app >> lab4.txt
	*/