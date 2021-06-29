# shortPathGUI_MFC
shortPath programme using floyd algorithm, MFC

## 개요
알고리즘 과목 과제가 수업때 배운 알고리즘 응용해서 프로그램 만드는 거였다. 교수님이 올려 주신 예제 프로젝트 이용해서 개선하는 방향으로 나가도 된다고 하셔서 기본으로 올려진 프로젝트 중 Floyd의 최단경로 알고리즘을 이용한 프로그램을 선택했다. 예시 프로그램은 정해진 그래프 (노드가 12개 있어서 매우 복잡하다) 에서 유저 입력으로 출발, 끝 노드 번호를 받아 결과를 출력하는 프로그램이었다. 알고리즘 부분은 손대지 않고 가져와 이용하였고 아래와 같은 사항을 개선하였다.
## 프로젝트 내용 (내가 개선한 것)
### 그래프 직접 입력
해당 구현은 어렵지는 않았지만 하려고 보니 그래프의 사이즈에 따라 입력받아야할 개수가 다른 것이 문제였다. 지금 생각하니 파일 입출력으로 인접행렬을 입력받았으면 더 좋았을 것 같다. 한편 사이즈에 따라 입력받는 다이얼로그의 형태를 다르게 하는 방법은 알 수 없었다. 그래서 그냥 고정 크기로 ``5*5`` 사이즈로 입력받았다.
### MFC 버전 업데이트
해당 프로그램이 Win XP 시절의 MFC로 작성된 것이기 때문에, 프로그램을 새로 작성하였다. Visual Studio 2017, Windows 10 에서 개발하였다.
## 한계
### 그래프 사이즈가 고정됨 
위의 그래프 직접 입력 부분에서 언급한 문제이다.
### 문자열 출력 문제
```c
void CFloydMFCDlg::PathPint(int q, int r)
{
	CString str;
	CString V = L"V";
	CString next = L" -> ";

	if (P[q][r] != 0) {
		PathPint(q, P[q][r]);
		str.Format(_T("%d"), P[q][r]);
		// P[q][r] 값을 문자열로 변환해 str에 저장한다.
		
		path = path + V + str + next;
		PathPint(P[q][r], r);
	}
}
```
위 코드에서 재귀호출 하면서 path 문자열을 갱신한다. 디버그창에서 확인해본 결과 입력된 인접행렬, 그걸로 생성한 D, P 행렬도 정상적인데 문자열 갱신이 제대로 되지 않았다.

```
path = path + V + str + next;
```
위의 코드는 MFC에서 지원하는 자료형인 CString에 대한 concat(접합) 연산인데, 해당 코드가 작성되었던 시점과 현재 비주얼 스튜디오에서 지원하는 작동이 달라 생기는 문제인 것 같다. 이거에 근거가 있진 않고 다른 건 원활하게 되는 거 같아서 생각나는 문제가 이거밖에 없다. 해당 문제를 해결하기 위해 문자열 접합 방법을 달리 해봤는데 그래도 안 됐다. ㅠㅠ 아마 이거 때문에 과제 점수 깎인 거 같다.

## 배운 것
### MFC란 무엇인가 
C++로 프로그램이라고 부를만한 것을 만들어 본 게 처음이었다. 그리고 배포용 exe 파일도 처음으로 만들었다.
### gui의 개념들
#### 다이얼로그
##### 다이얼로그란
유저가 실행하는 프로그램에서 뜨는 창 하나를 다이얼로그라고 하는 것 같다. 음... 이론적으로 아마 다른 기능을 수행하도록 분할하겠지
##### 부모-자식 다이얼로그
평등한 관계가 아니고 main에서 sub를 호출하는 관계를 자식 다이얼로그라 한다. main 다이얼로그에서 다이얼로그 객체를 생성하고 DoModal() 함수를 써서 불러온다.
#### 입출력
가장 간단하게 전역배열 불러서 전역배열 고쳤다. 이건 배열이 call by ref 이라서 가능한 거지만...
#### gui 구현
다이얼로그 미리보기에서 미리 준비된 버튼 등을 끌어다가 원하는 위치에 배치할 수 있는데 이 시스템이 신기했다. 예전에 잠깐 손댔던 안드로이드 스튜디오에서도 해당 방식을 사용하는 걸 봐서 gui 제작 툴의 기초인 거 같다.
#### CString
MFC에서만 쓰는 자료형인데 기본적으로 지원하는 기능이 많아서 MFC 프로그래밍에서 사용한다.
* 생성은 ``_T("문자열");``
** ``_T`` 를 붙이면 컴파일러에서 알아서 환경을 찾아내서 유니코드, ANSI에 맞게 알아서 바꿔준다.
* 더하기 연산자(+)를 접합으로 지원함
* c++에서 말하는 c string 이랑은 다른 거다.

