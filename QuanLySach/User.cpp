#include "User.h"

bool User::fLogin()
{
	string username, password;
	//cin.ignore();
	cout << "ID: ";
	getline(cin, username);
	fflush(stdin);
	cout << "Password: ";
	getline(cin, password);
	if (fDoesFileExist("./TaiKhoan/" + username + ".txt") == true)
	{
		ifstream fileIn("./TaiKhoan/" + username + ".txt");
		getline(fileIn, ID);
		getline(fileIn, PASS);
		if (ID == username && PASS == password)
		{
			//cout << "Dang nhap thanh cong.";
			return true;
		}
	}
	return false;
}
bool User::fDoesFileExist(const string& name)
{
	struct stat buffer;
	return (stat(name.c_str(), &buffer) == 0);
}

void User::fSignUp()
{
	//cin.ignore();
	string taiKhoan, matKhau;
	cout << "Nhap ten dang ky: ";
	getline(cin, taiKhoan);
	fflush(stdin);
	if (fDoesFileExist("./TaiKhoan/" + taiKhoan + ".txt") == true)
	{
		cout << "Ten dang nhap da duoc dang ky" << endl;
		fSignUp();
	}
	cout << "Nhap mat khau: ";
	getline(std::cin, matKhau);
	fflush(stdin);
	ofstream fileOut("./TaiKhoan/" + taiKhoan + ".txt");
	fileOut << taiKhoan << endl;
	fileOut << matKhau << endl;
	fileOut.close();
}
