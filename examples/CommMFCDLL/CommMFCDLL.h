// CommMFCDLL.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CCommMFCDLLApp:
// �йش����ʵ�֣������ CommMFCDLL.cpp
//

class CCommMFCDLLApp : public CWinApp
{
public:
	CCommMFCDLLApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CCommMFCDLLApp theApp;