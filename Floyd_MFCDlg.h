
// Floyd_MFCDlg.h: 헤더 파일
//

#include "CChildDlg.h"
#pragma once


// CFloydMFCDlg 대화 상자
class CFloydMFCDlg : public CDialogEx
{
// 생성입니다.
public:
	CChildDlg ChildDlg;
	CString path = _T("");
	void PathPint(int q, int r);
	void Floyd();
	void Set();
	int W[21][21];
	int D[21][21];
	int P[21][21]; 
	// Floyd 알고리즘에서 필요한 W, D, P 행렬입니다. 최대 크기 20

	CFloydMFCDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FLOYD_MFC_DIALOG };
#endif

	CString m_strLength;
	CString m_strPath;
//	int m_iStartPoint;
//	int m_iEndPoint;

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButtonopenchild();
//	CEdit m_iStartPoint;
	CEdit m_iStartPoint;
	CEdit m_iEndPoint;
};
