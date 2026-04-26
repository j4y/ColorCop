#include "pch.h"
#include "AboutDlg.h"
#include "resource.h"

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
    // no handlers currently
END_MESSAGE_MAP()

CAboutDlg::CAboutDlg()
    : CDialog(CAboutDlg::IDD) {
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX) {
    CDialog::DoDataExchange(pDX);

    DDX_Control(pDX, IDC_MAILLINK, m_maillink);
    DDX_Control(pDX, IDC_LINK, m_link);
}

BOOL CAboutDlg::OnInitDialog() {
    CDialog::OnInitDialog();
    return TRUE;
}
