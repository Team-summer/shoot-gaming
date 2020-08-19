#pragma once

#include "AbstractScene.h"
#include <fstream>

class GameScene : public AbstractScene
{
	enum eGameScene {
		GameNum
	};
public:
	GameScene(IOnSceneChangedListener* impl, const Parameter& parameter);
	virtual ~GameScene() = default;
	void update() override;
	void draw() const override;

private:
	int NowSelect;
};