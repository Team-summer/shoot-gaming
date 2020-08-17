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
		//�t���O
	int	_flag,

		//�q�b�g�|�C���g
		_lives,

		//��
		_width,
		//����
		_heigh;

	//�摜�t�@�C���̃p�X
	std::string _img;

	//���W
	double _x, _y;

	/*�e���֘A*/

		//�e�̎��
	int _bltype,

		//�F
		_color;
};