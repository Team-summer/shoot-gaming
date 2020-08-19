#include "GameScene.h"
#include <DxLib.h>
#include "Define.h"
#include "Keyboard.h"

using namespace std;

//const char* GameScene::ParameterTagCharaNum = "ParameterTagCharaNum";//�p�����[�^�̃^�O�u�L�������v

GameScene::GameScene(IOnSceneChangedListener* impl, const Parameter& parameter) : AbstractScene(impl, parameter)
, NowSelect(0)
{
}

void GameScene::update()
{
}

void GameScene::draw() const
{
	DrawString(Define::START_X, Define::START_Y, "������GameScene�ł��I", GetColor(255, 255, 255));
}