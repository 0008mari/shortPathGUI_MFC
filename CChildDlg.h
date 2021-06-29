#pragma once


// CChildDlg 대화 상자

class CChildDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CChildDlg)

public:
	CChildDlg(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CChildDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ChildDlg };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	void GetUserData(int parm_w[][21]); // 부모로 값 넘기는 함수
	// 인접행렬 w의 원소
	int w12;
	int w13;
	int w14;
	int w15;
	int w21;
	int w23;
	int w24;
	int w25;
	int w32;
	int w34;
	int w35;
	int w41;
	int w42;
	int w43;
	int w45;
	int w51;
	int w52;
	int w53;
	int w54;
	int w31;
};
