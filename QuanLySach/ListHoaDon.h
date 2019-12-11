#ifndef __LISTHOADON_H__
#define __LISTHOADON_H__
#include "HoaDon.h"
#include <vector>
#include <fstream>
class ListHoaDon
{
public:
	vector <HoaDon> DanhSach;
	void fThemHoaDon(HoaDon& A);
	void fXuatHoaDon(ListHoaDon& B);
	void fXoaHoaDon(ListHoaDon& B);
	void fSuaHoaDon(ListHoaDon& B);
	void fLoadHoaDon();
	void fGhiHoaDon(ListHoaDon &B);
};
#endif