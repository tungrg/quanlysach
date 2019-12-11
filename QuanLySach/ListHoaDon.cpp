#include "ListHoaDon.h"

void ListHoaDon::fThemHoaDon(HoaDon& A)
{
	DanhSach.push_back(A);
}

void ListHoaDon::fXuatHoaDon(ListHoaDon& B)
{
	int sum = 0;
	for (auto i = DanhSach.begin(); i != DanhSach.end(); i++)
	{
		sum = sum + (*i).fThanhTien();
		(*i).fXuatHoaDon();
	}
	cout << "Tong tien la: " << sum;
}

void ListHoaDon::fXoaHoaDon(ListHoaDon& B)
{
	int dem = 0;
	for (auto i = B.DanhSach.begin(); i != B.DanhSach.end(); i++)
	{
		cout << dem;
		(*i).fXuatHoaDon();
		dem++;
	}
	int x;
	cout << "Nhap hoa don ban muon xoa: ";
	cin >> x;
	B.DanhSach.erase(B.DanhSach.begin() + x);
	fGhiHoaDon(B);
}

void ListHoaDon::fSuaHoaDon(ListHoaDon& B)
{
	int dem = 0;
	for (auto i = B.DanhSach.begin(); i != B.DanhSach.end(); i++)
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
	B.DanhSach[x].soLuong = temp;
	fGhiHoaDon(B);
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

void ListHoaDon::fGhiHoaDon(ListHoaDon& B)
{
	ofstream fileOut("./HoaDon/ListHoaDon.txt", ofstream::out);
	for (auto i = B.DanhSach.begin(); i != B.DanhSach.end(); i++)
	{
		fileOut << (*i).tenSach << endl;
		fileOut << (*i).giaTien << " " << (*i).soLuong << endl;
	}
	fileOut.close();
}
