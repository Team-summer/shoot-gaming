#include "GameScene.h"
#include <DxLib.h>
#include "Define.h"
#include "Keyboard.h"

using namespace std;

//const char* GameScene::ParameterTagCharaNum = "ParameterTagCharaNum";//パラメータのタグ「キャラ数」

GameScene::GameScene(IOnSceneChangedListener* impl, const Parameter& parameter) : AbstractScene(impl, parameter)
, NowSelect(0)
{
}

void GameScene::update()
{
}

void GameScene::draw() const
{
	DrawString(Define::START_X, Define::START_Y, "ここはGameSceneです！", GetColor(255, 255, 255));
}