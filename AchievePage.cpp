// AchievePage.cpp: 实现文件
//

#include "pch.h"
#include "FocusYu.h"
#include "afxdialogex.h"
#include "AchievePage.h"


// AchievePage 对话框

IMPLEMENT_DYNAMIC(AchievePage, CDialogEx)

AchievePage::AchievePage(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_AchievePage, pParent)
{

}

AchievePage::~AchievePage()
{
}

void AchievePage::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(AchievePage, CDialogEx)
END_MESSAGE_MAP()


// AchievePage 消息处理程序
