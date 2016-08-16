#include "G2U.h"
#include <windows.h>
char* G2U(const char* gb2312)
{
int len = MultiByteToWideChar(CP_ACP, 0, gb2312, -1, NULL, 0);
wchar_t* wstr = new wchar_t[len+1];
memset(wstr, 0, len+1);
MultiByteToWideChar(CP_ACP, 0, gb2312, -1, wstr, len);
len = WideCharToMultiByte(CP_UTF8, 0, wstr, -1, NULL, 0, NULL, NULL);
char* str = new char[len+1];
memset(str, 0, len+1);
WideCharToMultiByte(CP_UTF8, 0, wstr, -1, str, len, NULL, NULL);
if(wstr) delete[] wstr;
return str;
}

char* get_world_dawn()
{
	char* pGB= "����";
	char* UTF8 = G2U(pGB);
	return UTF8;
}
char* get_world_morning()
{
	char* pGB= "����";
	char* UTF8 = G2U(pGB);
	return UTF8;
}
char* get_world_noon()
{
	char* pGB= "����";
	char* UTF8 = G2U(pGB);
	return UTF8;
}
char* get_world_afternoon()
{
	char* pGB= "����";
	char* UTF8 = G2U(pGB);
	return UTF8;
}
char* get_world_dusk()
{
	char* pGB= "�ƻ�";
	char* UTF8 = G2U(pGB);
	return UTF8;
}
char* get_world_evening()
{
	char* pGB= "����";
	char* UTF8 = G2U(pGB);
	return UTF8;
}
char* get_world_midnight()
{
	char* pGB= "��ҹ";
	char* UTF8 = G2U(pGB);
	return UTF8;
}
char* get_world_spring()
{
	char* pGB= "����";
	char* UTF8 = G2U(pGB);
	return UTF8;
}
char* get_world_summer()
{
	char* pGB= "����";
	char* UTF8 = G2U(pGB);
	return UTF8;
}
char* get_world_autumn()
{
	char* pGB= "����";
	char* UTF8 = G2U(pGB);
	return UTF8;
}
char* get_world_winter()
{
	char* pGB= "����";
	char* UTF8 = G2U(pGB);
	return UTF8;
}