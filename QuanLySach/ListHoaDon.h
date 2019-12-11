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
	void fXuatHoaDon();
	void fXoaHoaDon();
	void fSuaHoaDon();
	void fLoadHoaDon();
	void fGhiHoaDon();
};
#endif