#include "ListHoaDon.h"

void ListHoaDon::fThemHoaDon(HoaDon& A)
{
	DanhSach.push_back(A);
}

void ListHoaDon::fXuatHoaDon()
{
	int sum = 0;
	for (auto i = DanhSach.begin(); i != DanhSach.end(); i++)
	{
		sum = sum + (*i).fThanhTien();
		(*i).fXuatHoaDon();
	}
	cout << "Tong tien la: " << sum;
}

void ListHoaDon::fXoaHoaDon()
{
	int dem = 0;
	for (auto i = DanhSach.begin(); i != DanhSach.end(); i++)
	{
		cout << dem;
		(*i).fXuatHoaDon();
		dem++;
	}
	int x;
	cout << "Nhap hoa don ban muon xoa: ";
	cin >> x;
	DanhSach.erase(DanhSach.begin() + x);
	fGhiHoaDon();
}

void ListHoaDon::fSuaHoaDon()
{
	int dem = 0;
	for (auto i = DanhSach.begin(); i != DanhSach.end(); i++)
	{
		cout << dem;
		(*i).fXuatHoaDon();
		dem++;
	}
	int x;
	cout << "Nhap hoa don ma ban can sua: ";
	cin >> x;
	cout << "Nhap so luong sach ban muon thay doi: ";
	int temp;
	cin >> temp;
	DanhSach[x].soLuong = temp;
	fGhiHoaDon();
}

void ListHoaDon::fLoadHoaDon()
{
	ifstream fileIn("./HoaDon/ListHoaDon.txt");
	while(!fileIn.eof())
	{
		HoaDon temp;
		getline(fileIn, temp.tenSach);
		fileIn >> temp.giaTien;
		fileIn >> temp.soLuong;
		DanhSach.push_back(temp);
	}
}

void ListHoaDon::fGhiHoaDon()
{
	ofstream fileOut("./HoaDon/ListHoaDon.txt");
	for (auto i = DanhSach.begin(); i != DanhSach.end(); i++)
	{
		fileOut << (*i).tenSach << endl;
		fileOut << (*i).giaTien << " " << (*i).soLuong << endl;
	}
}
