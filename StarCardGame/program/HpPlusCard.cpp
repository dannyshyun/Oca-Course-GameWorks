#include "Base.h"
#include "CardBase.h"
#include "ItemCard.h"
#include "HpPlusCard.h"

void HpPlusCard::Init()
{
    ItemCard::Init();
}

void HpPlusCard::Update()
{
    ItemCard::Update();
}

void HpPlusCard::Render()
{
    ItemCard::Render();
}

void HpPlusCard::Release()
{
    ItemCard::Release();
}

HpPlusCard::HpPlusCard( int image, uint32_t value, uint32_t part ) :
    ItemCard( image, value, part )
{
}
