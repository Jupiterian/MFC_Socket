
// SocketServer.h : главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить stdafx.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CSocketServerApp:
// О реализации данного класса см. SocketServer.cpp
//

class CSocketServerApp : public CWinApp
{
public:
	CSocketServerApp();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CSocketServerApp theApp;