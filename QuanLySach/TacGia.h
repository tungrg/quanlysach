#ifndef __TACGIA_H__
#define __TACGIA_H__
#include "User.h"
#include "KHOSACH.h"
class TacGia : public KHOSACH
{
	User T;
	void fKhoaSach(KHOSACH& B);
	void fMoSach(KHOSACH& B);
	void fInDanhSach(KHOSACH& B);
};
#endif
