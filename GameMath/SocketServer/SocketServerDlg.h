
// SocketServerDlg.h : файл заголовка
//

#pragma once
#include "afxcmn.h"
#include "../Client/reply.h"
#include <vector>

// диалоговое окно CSocketServerDlg
class CSocketServerDlg : public CDialogEx
{
// Создание
public:
	CSocketServerDlg(CWnd* pParent = NULL);	// стандартный конструктор

// Данные диалогового окна
	enum { IDD = IDD_SOCKETSERVER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// поддержка DDX/DDV

	SOCKET m_socket;
// Реализация
protected:
	HICON m_hIcon;

	// Созданные функции схемы сообщений
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedStart();
	afx_msg void OnBnClickedStop();
	int m_port;
	virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
	CListCtrl m_list;
	std::vector<reply> all_r;
	std::vector<SOCKET> s_clients;
};