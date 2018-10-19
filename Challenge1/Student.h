//Student.h
//Author: Sian McClean
//Date: 19/10/2018
//Description: Class declaration header file for the Student Class


#pragma once

#include<iostream>
#include<string>

class Student {

private: 
	std::string name_;
	std::string registrationID_;
	std::string course_;
	int yearofStudy_;
	int moduleOneMark_;
	int moduleTwoMark_;
	int moduleThreeMark_;

public:
	//Default constructor
	Student();

	//Custom constructor
	Student(std::string name_, std::string registrationID_, std::string course_, int yearofStudy_,int moduleOneMark_, int moduleTwoMark_, int moduleThreeMark_);

	//Now create the getters and setters 

	std::string GetName()const;
	void SetName(std::string name);

	std::string GetRegistrationID()const;
	void SetRegistrationID(std::string registrationID);
	
	std::string GetCourse()const;
	void SetCourse(std::string course);

	int GetYearofStudy() const;
	void SetYearofStudy(int year);

	int GetmoduleOneMark() const;
	void SetmoduleOneMark(int year);

	int GetmoduleOneMark() const;
	void SetYearofStudy(int year);

	int GetYearofStudy() const;
	void SetYearofStudy(int year);
	







};
