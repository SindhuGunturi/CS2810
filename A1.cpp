#include <iostream>
using namespace std;
class IITM{
public:
	vector<BTech> BTech_Students;
	vector<DualDegree> DualDegree_Students;
	vector<Faculty> Professors;
	int BTech_No;
	int DualDegree_No; 
};

class BTech{
public:
	RollNumber RollNumber;
	string hostel;
	Faculty facad;
	Faculty BTPGuide;
	float cgpa;

	BTech(RollNumber r, string hostel, Faculty facad, float cgpa);
	string getHostel();
	Faculty getFacad();
	Faculty getBTPGuide();	
	setBTPGuide(Faculty);
};

BTech::BTech(RollNumber r, string hostel, Faculty facad, float cgpa){
	this->RollNumber = r;
	this->hostel = hostel;
	this->facad = facad;
	this->cgpa = cgpa;
}

string BTech::getHostel(){
	return hostel;
}

Faculty BTech::getFacad(){
	return facad;
}

Faculty BTech::getBTPGuide(){
	return BTPGuide;
}

void BTech::setBTPGuide(Faculty f){
	BTPGuide = f;
}

class DualDegree{
public:
	RollNumber RollNumber;
	string hostel;
	Faculty facad;
	Faculty DDPGuide;
	Faculty TASupervisor;
	float cgpa;

	DualDegree(RollNumber r, string hostel, Faculty facad, float cgpa);
	string getHostel();
	Faculty getFacad();
	Faculty getDDPGuide();
	Faculty getTASupervisor();
	setDDPGuide(Faculty);
	setTASupervisor(Faculty);
};

DualDegree::DualDegree(RollNumber r, string hostel, Faculty facad, float cgpa){
	this->RollNumber = r;
	this->hostel = hostel;
	this->facad = facad;
	this->cgpa = cgpa;
}

string DualDegree::getHostel(){
	return hostel;
}

Faculty DualDegree::getFacad(){
	return facad;
}

Faculty DualDegree::getDDPGuide(){
	return BTPGuide;
}

void DualDegree::setDDPGuide(Faculty f){
	DDPGuide = f;
}

Faculty DualDegree::getTASupervisor(){
	return TASupervisor;
}

void DualDegree::setTASupervisor(Faculty f){
	TASupervisor = f;
}

class RollNumber{
public:
	string RollNumber;
};

class faculty{
public:
	string f_name;
	bool tenure;//0 for Adjunct, 1 for Professor
};

void main(){
	IITM insti;
	//generate m students and n faculty
	//assign btp, ddp and tas


	//percentage of students whose tas = ddp
	int count=0; 
	for(auto ii = insti.BTech_Students.begin(); ii<insti.BTech_Students.end(); ii++){
		if((*ii).DDPGuide == (*ii).TASupervisor){
			count++;	
		}	
	}
	cout << "Percentage : " << count/(insti.BTech_No + insti.DualDegree_No);
}
