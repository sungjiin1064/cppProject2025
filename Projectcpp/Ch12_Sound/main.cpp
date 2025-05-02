

// Winmm.lib : Window Multi Media Library
// 추가방법 : 프로젝트우클릭-속성-링커-입력-추가종속성(편집) 에 입력
//bool isSound = PlaySound(_T("sound.wav"), NULL, SND_ASYNC);
// SND_ASYNC : 아래의 코드와 별개로 파일이 실행된다. 
// SND_SYNC  : 사운드 파일이 전부 실행되고 난 후에 아래의 코드가 실행된다.

#include "Common.h"
#include "SoundUtil.h"
#include "GameManager.h"

// ctrl+r+r 이름바꾸기

int main()
{
	GameManager game;
	game.Play();

	

	
	
}