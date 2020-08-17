#pragma once

#include "Task.h"
#include <string>

class AbstractPlayer : public Task
{
	enum eP_Flag {
		live,
		death,
	};

public:
	AbstractPlayer(double x, double y, int life, std::string img_path);
	virtual ~AbstractPlayer() = default;
	virtual void init() = 0;
	bool update();
	virtual void draw() const = 0;

private:
		//フラグ
	int	_flag,

		//ヒットポイント
		_lives,

		//幅
		_width,
		//高さ
		_heigh;

	//画像ファイルのパス
	std::string _img;

	//座標
	double _x, _y;

	/*弾幕関連*/

		//弾の種類
	int _bltype,

		//色
		_color;
};