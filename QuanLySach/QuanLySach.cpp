#include "KhachHang.h"
#include "User.h"
#include "NXB.h"
#include "TacGia.h"
#include "Admin.h"
#include "KHOSACH.h"
int main()
{
	KHOSACH B;
	TacGia C;
	SACH A;
	KhachHang D;

	A.tenSach = "hi";
	A.maSach = "1234";
	A.giaSach = 20000;
	A.tacGia = "huyCan";
	A.nhaXuatBan = "tre";
	A.khoaSach = 0;
	C.fThemSach(B,A);
	C.fGhiSach(B);
	D.fMuaSach(B);
	D.fCheckOut();

}
