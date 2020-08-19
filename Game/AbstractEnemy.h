#pragma once

#include "Task.h"
#include <string>

class AbstractEnemy : public Task
{
	enum eE_Flag {
		live,
		death,
	};

public:
	AbstractEnemy(int hp, int _pattern, double x, double y, std::string img_path);
	virtual ~AbstractEnemy() = default;
	virtual void init() = 0;
	bool update();
	virtual void draw() const = 0;

private:
		//フラグ
	int	_flag,

		//カウント
		_cnt,
		
		//移動パターン
		_pattern,

		//ヒットポイント
		_hp,

		//最大ヒットポイント
		_max_hp,

		//停滞時間
		_wait,

		//幅
		_width,
		//高さ
		_heigh;

		//画像ファイルのパス
	std::string _img;

		//座標
	double _x, _y,
		
		//スピード
		_sp,

		//角度
		_ang;


	/*弾幕関連*/

		//弾の種類
	int _bltype,

		//色
		_color;
};