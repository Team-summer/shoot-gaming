#include <fstream>
#include <sstream>
#include "EnemyMgr.h"
#include "Macro.h"

using namespace std;

EnemyMgr::EnemyMgr(string stage_file_path)
{
	Load(stage_file_path);
}



void EnemyMgr::Load(std::string filename)
{
	fstream fs(filename);
	string buf;

	if (!fs.is_open()) {
		ERR("ファイルが見つかりません！");
	}

	//読み飛ばし
	getline(fs, buf);

	while (getline(fs, buf)) {
		istringstream streambuf(buf);
		string s;
		vector<int> _d;

		while (getline(streambuf, s, ','))
		{
			_d.push_back(int(s.c_str()));
		}

		E_info tmp(_d);
		_stage.push(tmp);
	}
	fs.close();
}