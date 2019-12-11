#ifndef __ADMIN_H__
#define __ADMIN_H__
#include "KHOSACH.h"
#include "User.h"
#include "ListHoaDon.h"
class Admin : public KHOSACH, public ListHoaDon
{
public:
	User A;

};
#endif
