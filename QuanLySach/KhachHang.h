#ifndef __KHACHHANG_H__
#define __KHACHHANG_H__
#include "User.h"
#include "ListHoaDon.h"
#include "KHOSACH.h"
class KhachHang : public KHOSACH
{
public:
	User xyz;
	ListHoaDon KhachHoaDon;
	void fThemSach() = delete;
	void fXoaSach() = delete;
	void fGhifileHoaDon();
};
#endif
