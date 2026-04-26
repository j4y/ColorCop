#pragma once
#include <afxwin.h>
#include "Label.h"   // required for CLabel

class CAboutDlg : public CDialog {
public:
    enum { IDD = IDD_ABOUTBOX };
    CAboutDlg();

protected:
    virtual void DoDataExchange(CDataExchange* pDX);
    virtual BOOL OnInitDialog();

    DECLARE_MESSAGE_MAP()

private:
    CLabel m_maillink;
    CLabel m_link;
};
