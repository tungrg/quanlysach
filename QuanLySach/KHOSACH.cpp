#include "KHOSACH.h"

void KHOSACH::fThemSach(SACH& A)
{
	listSach.push_back(A);
}
void KHOSACH::fTimSach(KHOSACH& B)
{
	cin.ignore();
	string temp;
	cout << "Nhap ten cuon sach ban can tim: ";
	getline(std::cin, temp);
	int sum = 0;
	for (auto i = B.listSach.begin(); i != B.listSach.end(); ++i)
	{
		if (temp == (*i).tenSach)
		{
			sum++;
			(*i).fXuatSach();
		}
	}
	if (sum == 0)
	{
		cout << "Khong tim thay sach ban can tim.";
	}
}

void KHOSACH::fXoaSach(KHOSACH& B)
{
	cin.ignore();
	string temp;
	cout << "Nhap ma cuon sach ban can xoa: ";
	getline(std::cin, temp);
	bool kt = false;
	for (auto i = B.listSach.begin(); i != B.listSach.end(); ++i)
	{
		if (temp == (*i).maSach)
		{
			kt = true;
			B.listSach.erase(i);
		}
	}
	fGhiSach(B);
	if (kt == true)
	{
		cout << "Xoa sach thanh cong";
	}
	else
	{
		cout << "Khong tim thay sach can xoa";
	}
}

void KHOSACH::fSuaSach(KHOSACH& B)
{
	string temp;
	cout << "Nhap ma cuon sach ban can sua: ";
	getline(std::cin, temp);
	bool kt = false;
	for (auto i = B.listSach.begin(); i != B.listSach.end(); ++i)
	{
		if (temp == (*i).maSach)
		{
			kt = true;
			{
				cout << "Ma sach: ";
				getline(cin, (*i).maSach);
				fflush(stdin);
				cout << "Ten sach: ";
				getline(cin, (*i).tenSach);
				fflush(stdin);
				cout << "Gia sach: ";
				cin >> (*i).giaSach;
				cout << "Tac gia: ";
				getline(cin, (*i).tacGia);
				fflush(stdin);
				cout << "Nha xuat ban: ";
				getline(cin, (*i).nhaXuatBan);
			}
		}
	}
	fGhiSach(B);
	if (kt == false)
	{
		cout << "Khong tim thay sach ban can sua.";
	}
}

void KHOSACH::fLoadSach()
{
	ifstream fileIn("./KhoSach/KhoSach.txt");
	while (!fileIn.eof())
	{
		SACH temp;
		getline(fileIn, temp.maSach);
		getline(fileIn, temp.tenSach);
		fileIn >> temp.giaSach;
		getline(fileIn, temp.tacGia);
		getline(fileIn, temp.nhaXuatBan);
		fileIn >> temp.khoaSach;
		listSach.push_back(temp);
	}
	fileIn.close();
}

void KHOSACH::fGhiSach(KHOSACH& B)
{
	ofstream fileOut("./KhoSach/KhoSach.txt");
	for (auto i = B.listSach.begin(); i != B.listSach.end(); i++)
	{
		fileOut << (*i).maSach << endl;
		fileOut << (*i).tenSach << endl;
		fileOut << (*i).giaSach << endl;
		fileOut << (*i).tacGia << endl;
		fileOut << (*i).nhaXuatBan << endl;
		fileOut << (*i).khoaSach << endl;
	}
}
