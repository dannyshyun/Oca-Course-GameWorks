﻿#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <windows.h>
#include <time.h>
#include <math.h>
#include <vector>
#include <memory>
#include <stdint.h>
#pragma warning( disable : 4819 )

#include <d3d9.h>
//#include <d3dx9.h>

#include <DxLib.h>
#include <GameSystem/Random.h>
#include <GameSystem/imageDatas.h>

bool  PushHitKey( int key );
bool  CheckMouseInput( int button = MOUSE_INPUT_LEFT | MOUSE_INPUT_RIGHT );
bool  PushMouseInput( int button = MOUSE_INPUT_LEFT | MOUSE_INPUT_RIGHT );
int   GetMouseX();
int   GetMouseY();
int   GetMouseMoveX();
int   GetMouseMoveY();
float TO_RADIAN( float degree );
float TO_DEGREE( float radian );
typedef const TCHAR* TC;
