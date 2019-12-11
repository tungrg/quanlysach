#ifndef __NXB_H__
#define __NXB_H__
#include "User.h"
#include "KHOSACH.h"
class NXB :public KHOSACH
{
public:
	User N;
	void fKhoaSach(KHOSACH& B);
	void fInDanhSach(KHOSACH& B);
	void fMoSach(KHOSACH& B);
};
#endif