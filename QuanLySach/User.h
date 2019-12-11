#ifndef __USER_H__
#define __USER_H__
#include "KHOSACH.h"
#include "ListHoaDon.h"
class User
{
public:
	string ID;
	string PASS;
	bool fLogin();
	bool fDoesFileExist(const string& name);
	void fSignUp();
};
#endif

