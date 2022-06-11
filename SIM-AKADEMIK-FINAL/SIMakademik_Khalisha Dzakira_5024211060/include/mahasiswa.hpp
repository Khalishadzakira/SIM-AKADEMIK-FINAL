#ifndef __MAHASISWA_HPP__
#define __MAHASISWA_HPP__


#include <iostream>
#include <vector>
#include "include/person.hpp"

class mahasiswa : public person {
private:
	std::string nrp;
	std::string departemen;
	int tahunmasuk;
	int semesterke;
	int skslulus;
	float ipk;
	std::vector<float> ips;
	std::vector<std::string> matkul;

public:
	mahasiswa(std::string id, std::string nama, int dd, int mm, int yy, std::string nrp, std::string departemen, int tahunmasuk, std::vector<std::string> matkul);

	void setSemester(int semesterke);
	int getSemester();

	void setSKSLulus(int skslulus);
	int getSKSLulus();

	void hitungIPK();

	void setIPS(int semester, float ips);
	float getIPS(int semester);
	std::vector<float> getAllIPS();
	std::string getNRP();

	void setDepartemen(std::string departemen);
	std::string getDepartemen();

	int getTahunMasuk();

	void setMatkul(std::string matkul);
	std::vector<std::string> getMatkul();

};

#endif
