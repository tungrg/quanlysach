#ifndef __KHOSACH_H__
#define __KHOSACH_H__
#include "SACH.h"
#include <vector>
#include <fstream>
class KHOSACH
{
public:
	vector <SACH> listSach;
	void fThemSach(KHOSACH& B, SACH& A);
	void fTimSach(KHOSACH& B);
	void fXoaSach(KHOSACH& B);
	void fSuaSach(KHOSACH& B);
	void fLoadSach();
	void fGhiSach(KHOSACH& B);
};
#endif