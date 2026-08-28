
// FocusYuDlg.h: 头文件
//

#pragma once
#include"AchievePage.h"

// CFocusYuDlg 对话框
class CFocusYuDlg : public CDialogEx
{
// 构造
public:
	CFocusYuDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FOCUSYU_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

private:
	AchievePage WindowOne;

public:
	afx_msg void OnBnClickedButton1();
};
