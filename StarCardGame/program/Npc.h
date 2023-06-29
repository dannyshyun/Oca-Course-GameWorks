#pragma once

//---------------------------------------------------------------------------------
//	ＮＰＣクラス
//---------------------------------------------------------------------------------
class Npc : public Player
{
public:
    Npc( int image );
    void Init() override;     //	初期化処理
    void Update() override;   //	更新処理
    void Render() override;   //	描画処理
    void Release() override;  //	終了処理

    void SelectCard( CardBase card );

private:
    std::unique_ptr<Deck> deck;
    std::unique_ptr<Hand> hand;
};
