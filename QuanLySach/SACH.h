#ifndef __SACH_H__
#define __SACH_H__
#include <iostream>
using namespace std;
#include <string>
class SACH
{
public:
	string tenSach;
	string maSach;
	int giaSach;
	string tacGia;
	string nhaXuatBan;
	int khoaSach;
	SACH();
	void fXuatSach();
	const SACH& operator=(const SACH& A);
};
#endif
