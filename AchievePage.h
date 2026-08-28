#pragma once
#include "afxdialogex.h"


// AchievePage 对话框

class AchievePage : public CDialogEx
{
	DECLARE_DYNAMIC(AchievePage)

public:
	AchievePage(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~AchievePage();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_AchievePage };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
