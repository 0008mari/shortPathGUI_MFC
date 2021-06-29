// CChildDlg.cpp: 구현 파일
//

#include "pch.h"
#include "Floyd_MFC.h"
#include "CChildDlg.h"
#include "afxdialogex.h"


// CChildDlg 대화 상자

IMPLEMENT_DYNAMIC(CChildDlg, CDialogEx)

CChildDlg::CChildDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_ChildDlg, pParent)
	, w12(0)
	, w13(0)
	, w14(0)
	, w15(0)
	, w21(0)
	, w23(0)
	, w24(0)
	, w25(0)
	, w32(0)
	, w34(0)
	, w35(0)
	, w41(0)
	, w42(0)
	, w43(0)
	, w45(0)
	, w51(0)
	, w52(0)
	, w53(0)
	, w54(0)
	, w31(0)
{

}

CChildDlg::~CChildDlg()
{
}

void CChildDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT12, w12);
	DDV_MinMaxInt(pDX, w12, 0, INT_MAX);
	DDX_Text(pDX, IDC_EDIT13, w13);
	DDV_MinMaxInt(pDX, w13, 0, INT_MAX);
	DDX_Text(pDX, IDC_EDIT14, w14);
	DDV_MinMaxInt(pDX, w14, 0, INT_MAX);
	DDX_Text(pDX, IDC_EDIT15, w15);
	DDV_MinMaxInt(pDX, w15, 0, INT_MAX);
	DDX_Text(pDX, IDC_EDIT21, w21);
	DDV_MinMaxInt(pDX, w21, 0, INT_MAX);
	DDX_Text(pDX, IDC_EDIT23, w23);
	DDV_MinMaxInt(pDX, w23, 0, INT_MAX);
	DDX_Text(pDX, IDC_EDIT24, w24);
	DDV_MinMaxInt(pDX, w24, 0, INT_MAX);
	DDX_Text(pDX, IDC_EDIT25, w25);
	DDV_MinMaxInt(pDX, w25, 0, INT_MAX);
	DDX_Text(pDX, IDC_EDIT32, w32);
	DDV_MinMaxInt(pDX, w32, 0, INT_MAX);
	DDX_Text(pDX, IDC_EDIT34, w34);
	DDV_MinMaxInt(pDX, w34, 0, INT_MAX);
	DDX_Text(pDX, IDC_EDIT35, w35);
	DDV_MinMaxInt(pDX, w35, 0, INT_MAX);
	DDX_Text(pDX, IDC_EDIT41, w41);
	DDV_MinMaxInt(pDX, w41, 0, INT_MAX);
	DDX_Text(pDX, IDC_EDIT42, w42);
	DDV_MinMaxInt(pDX, w42, 0, INT_MAX);
	DDX_Text(pDX, IDC_EDIT43, w43);
	DDV_MinMaxInt(pDX, w43, 0, INT_MAX);
	DDX_Text(pDX, IDC_EDIT45, w45);
	DDV_MinMaxInt(pDX, w45, 0, INT_MAX);
	DDX_Text(pDX, IDC_STATIC51, w51);
	DDV_MinMaxInt(pDX, w51, 0, INT_MAX);
	DDX_Text(pDX, IDC_STATIC52, w52);
	DDV_MinMaxInt(pDX, w52, 0, INT_MAX);
	DDX_Text(pDX, IDC_STATIC53, w53);
	DDV_MinMaxInt(pDX, w53, 0, INT_MAX);
	DDX_Text(pDX, IDC_STATIC54, w54);
	DDV_MinMaxInt(pDX, w54, 0, INT_MAX);
	DDX_Text(pDX, IDC_EDIT31, w31);
	DDV_MinMaxInt(pDX, w31, 0, INT_MAX);
}


BEGIN_MESSAGE_MAP(CChildDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &CChildDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &CChildDlg::OnBnClickedCancel)
END_MESSAGE_MAP()


// CChildDlg 메시지 처리기


void CChildDlg::OnBnClickedOk()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialogEx::OnOK();
}


void CChildDlg::OnBnClickedCancel()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialogEx::OnCancel();
}


void CChildDlg::GetUserData(int parm_w[][21]) 
{
	// Child에서 입력받은 값을 매개변수로 복사
	// 이때 parm_w는 배열의 시작주소

	parm_w[1][2] = w12;
	parm_w[1][3] = w13;
	parm_w[1][4] = w14;
	parm_w[1][5] = w15;

	parm_w[2][1] = w21;
	parm_w[2][3] = w23;
	parm_w[2][4] = w24;
	parm_w[2][5] = w25;

	parm_w[3][1] = w31;
	parm_w[3][2] = w32;
	parm_w[3][4] = w34;
	parm_w[3][5] = w35;

	parm_w[3][1] = w31;
	parm_w[3][2] = w32;
	parm_w[3][4] = w34;
	parm_w[3][5] = w35;

	parm_w[4][1] = w41;
	parm_w[4][2] = w42;
	parm_w[4][3] = w43;
	parm_w[4][5] = w45;

	parm_w[5][1] = w51;
	parm_w[5][2] = w52;
	parm_w[5][3] = w53;
	parm_w[5][4] = w54;

}