#pragma once
#include "Base.h"

class Frisbee : public Base
{
public:

	void Init(int model);		//	初期化処理
	void Update(Vector3 player_pos, Vector3 player_rot);		//	更新処理
	void Render();		//	描画処理
	void Exit();		//	終了処理

	bool isMove = false;
	
private:
	Vector3 m_move;
	int time_count;
	void posInit(Vector3 player_pos, Vector3 player_rot);
};
