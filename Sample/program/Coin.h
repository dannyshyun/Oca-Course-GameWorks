#pragma once
#include "Base.h"

class Coin : public Base
{
public:

	Coin(int model, Vector3 pos);
	~Coin();

	void Init(int model, Vector3 pos);		//	初期化処理
	void Update();		//	更新処理
	void Render();		//	描画処理
	void Exit();		//	終了処理

private:

};
