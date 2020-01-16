// IIS.h: interface for the CIIS class.
//
//////////////////////////////////////////////////////////////////////
#if !defined(AFX_IIS_H__11B61858_60DD_4429_AFD2_29DE4C6BA243__INCLUDED_)
#define AFX_IIS_H__11B61858_60DD_4429_AFD2_29DE4C6BA243__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <lm.h>
#include "iads.H"
#include "Adshlp.h"
#pragma comment(lib,"Netapi32.lib")
#pragma comment(lib,"adsiid.lib")
#pragma comment(lib,"activeds.lib")

#pragma	pack (push,1)
// Site info
typedef struct S_SiteInfo
{
	int		nNumber;//���
	char 	szPort[8];	//�˿�
	char	szIP[40]; //IP
	char	szComment[256]; // Comment
	char	szVPath[256];	//����·��
}	S_SITEINFO,*P_S_SITEINFO;

#pragma	pack (pop)

class  CIIS  
{
public:
	CIIS();
	virtual ~CIIS();
protected:
	BOOL IsGroupMembers(IADsGroup *pGroup,char* sUser);
	BOOL EnumMembers(IADsMembers *pMembers,char* sUser);

	BOOL AddUserToGroup(char* sGroup, char* sUser);
	BOOL AddUser(char* sUser,char* sPsw,char* sGrp);
	BOOL ChangeUserPsw(char* sUser, char* sPsw);
	//BOOL AddObjectAccess(CString strFileName, const CSid &rSid, ACCESS_MASK accessmask,SE_OBJECT_TYPE eType /*= SE_OBJECT_TYPE*/);
public:
	
	BOOL GrantRightToUser(CString szDir);
	BOOL AddAccessRights(LPCTSTR lpszFileName,LPCTSTR szUserName,DWORD dwAccessMask);
	bool GetAnonymousUserName(LPSTR pUserName);
	BOOL InitIISAnonymousSA(LPSECURITY_ATTRIBUTES pSA);

	DWORD AddGroupMembers();
	DWORD AddMachineAccount();
	BOOL AddOperator();

	CString GetServerBinding(VARIANT FAR* vArray);

	void RemoveAllList(CPtrList &pList);

};

#endif // !defined(AFX_IIS_H__11B61858_60DD_4429_AFD2_29DE4C6BA243__INCLUDED_)
