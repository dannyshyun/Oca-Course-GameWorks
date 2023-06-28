#include "Main.h"
#include "Game.h"
#include "Base.h"
#include "Player.h"

Player::Player( int image ) : Base( image )
{
    deck = std::make_unique<Deck>( 0 );
    hand = std::make_unique<Hand>( 0 );
}
//---------------------------------------------------------------------------------
//	初期化処理
//---------------------------------------------------------------------------------
void Player::Init()
{
    deck->Init();
}
//---------------------------------------------------------------------------------
//	更新処理
//---------------------------------------------------------------------------------
void Player::Update()
{
    switch ( Turn )
    {
        case LOAD_TURN :
            if ( deck->LOAD() )
                Turn = SHUFFLE_TURN;
            break;

        case SHUFFLE_TURN :
            if ( deck->Shuffle() )
                Turn = DEAL_TURN;
            break;

        case DEAL_TURN :

            if ( hand->GetHandNum() < HAND_MAX )
            {
                hand->Init();
                hand->Draw( deck->Deal( HAND_MAX - hand->GetHandNum() ) );
            }
            break;

        case MOVE_TURN : break;

        case PLAYER_ATTACK_TURN : break;

        case PLAYER_DEFENSE_TURN : break;

        case NPC_ATTACK_TURN : break;

        case NPC_DEFESE_TURN : break;

        case RESULT_TURN : break;

        case TURN_MAX : break;

        default :;
    }
    deck->Update();
}
//---------------------------------------------------------------------------------
//	描画処理
//---------------------------------------------------------------------------------
void Player::Render()
{
    deck->Render();
    hand->Render( true );
}
//---------------------------------------------------------------------------------
//	終了処理
//---------------------------------------------------------------------------------
void Player::Release()
{
}

void Player::SelectCard( CardBase card )
{
}
