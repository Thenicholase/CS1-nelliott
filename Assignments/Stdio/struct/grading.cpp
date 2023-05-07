#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

struct Student {
	string fname, lname;
	double test[4];
	double avg;
	char grade;
};

void findGrades(Student students[], int size, string outFileName) {
	ofstream fout(outFileName, ios::out);

	for (int i = 0; i < size; ++i) {
		students[i].avg = (students[i].test[0] + students[i].test[1] + students[i].test[2] + students[i].test[3]) / 4.0;

		if (students[i].avg >= 90)
			students[i].grade = 'A';
		else if (students[i].avg >= 80 && students[i].avg < 90)
			students[i].grade = 'B';
		else if (students[i].avg >= 70 && students[i].avg < 80)
			students[i].grade = 'C';
		else if (students[i].avg >= 60 && students[i].avg < 70)
			students[i].grade = 'D';
		else
			students[i].grade = 'E';

		fout << students[i].fname << " " << students[i].lname << " " << students[i].avg << " " << students[i].grade << "\n";

	}

	fout.close();
}

bool comp(Student& s1, Student& s2) {
	return s1.avg > s2.avg;
}

void sortStudents(Student students[], int size) {
	sort(students, students + size, comp);
}

int main() {
	string fileName, outFileName;
	Student students[50];
	int size = 0;

	cout << "Enter input file name: ";
	cin >> fileName;

	cout << "Enter output file name: ";
	cin >> outFileName;

	ifstream fin(fileName);

	if (!fin.fail()) {
		string fname, lname;
		double test[4], avg;
		Student student;

		while (!fin.eof()) {
			fin >> student.fname >> student.lname >> student.test[0] >> student.test[1] >> student.test[2] >> student.test[3];
			students[size++] = student;
		}
	}

	fin.close();

	sortStudents(students, size);
	findGrades(students, size, outFileName);

	return 0;
}