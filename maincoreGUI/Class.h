#pragma once
#include "Header.h"

class Student {
private:
	std::vector<int> grades;
	string name, surname;
	double final;
	double egz = 0;
public:
	double capture;
	Student() {
		name = "Null";
		surname = "Null";
		final = 1;
	};
	Student(string xname, string xsurname, std::vector<int>xgrades, double xfinal) {
		name = xname;
		surname = xsurname;
		grades = xgrades;
		egz = xfinal;
		double mathxx = std::accumulate(xgrades.begin(), xgrades.end(), 0.0) / xgrades.size();
		double fscore = (0.4 * mathxx) + (0.6 * egz);
		final = fscore;
	};
	Student(const Student& p1) {
		name = p1.name;
		surname = p1.surname;
		grades = p1.grades;
		final = p1.final;
	};
	Student& operator=(const Student& og);
	~Student() {
		grades.clear();
	};
	string GetName() {
		return name;
	};
	string GetSurname() {
		return surname;
	};
	int GetND1() {
		return grades[0];
	}
	int GetND2() {
		return grades[1];
	}
	int GetND3() {
		return grades[2];
	}
	int GetND4() {
		return grades[3];
	}
	int GetND5() {
		return grades[4];
	}
	double GetEGZ() {
		return egz;
	}

	double GetFinal() {
		return final;
	};
	//int Menu();																		NOT REUIRED
	void DeleteGrades() {
		grades.clear();
	};
	//void PrintData();																	NOT REUIRED
	//void PrintFile();																	NOT REUIRED
	//friend std::istream& operator >>(std::istream& input, Student& x);				NOT REUIRED
	//friend std::ostream& operator <<(std::ostream& output, const Student& x);			NOT REUIRED
};

int wordnum(string wordnume) {
	int countinger = 0;
	std::string word;
	std::stringstream strm(wordnume);

	while (strm >> word) {
		++countinger;
	};
	return countinger;
}

bool __lambda(Student& lhs, Student& rhs) {
	return rhs.GetName() > lhs.GetName();
}
bool __lambda2(Student& lhs, Student& rhs) {
	return rhs.GetFinal() > lhs.GetFinal();
}
bool __lambda3(Student& temper) {return temper.GetFinal() >= 5;}
/*std::list<Student> aSort(std::list<Student> a) {
	a.sort();
}*/

