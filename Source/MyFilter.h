#pragma once;
#include <math.h>


// --------------------------------------------------------------------------------
// CMyFilter
// --------------------------------------------------------------------------------
class CMyFilter
{
private:
	// フィルタの係数
	float a0, a1, a2, b0, b1, b2;
	// バッファ
	float out1, out2;
	float in1, in2;

public:
	//inline CMyFilter();

	//// 入力信号にフィルタを適用する関数
	//inline float Process(float in);

	//// フィルタ係数を計算するメンバー関数
	//inline void LowPass(float freq, float q, float samplerate = 44100.0f);
	//inline void HighPass(float freq, float q, float samplerate = 44100.0f);
	//inline void BandPass(float freq, float bw, float samplerate = 44100.0f);
	//inline void Notch(float freq, float bw, float samplerate = 44100.0f);
	//inline void LowShelf(float freq, float q, float gain, float samplerate = 44100.0f);
	//inline void HighShelf(float freq, float q, float gain, float samplerate = 44100.0f);
	//inline void Peaking(float freq, float bw, float gain, float samplerate = 44100.0f);
	//inline void AllPass(float freq, float q, float samplerate = 44100.0f);

	CMyFilter();

	// 入力信号にフィルタを適用する関数
	float Process(float in);

	// フィルタ係数を計算するメンバー関数
	void LowPass(float freq, float q, float samplerate = 44100.0f);
	void HighPass(float freq, float q, float samplerate = 44100.0f);
	void BandPass(float freq, float bw, float samplerate = 44100.0f);
	void Notch(float freq, float bw, float samplerate = 44100.0f);
	void LowShelf(float freq, float q, float gain, float samplerate = 44100.0f);
	void HighShelf(float freq, float q, float gain, float samplerate = 44100.0f);
	void Peaking(float freq, float bw, float gain, float samplerate = 44100.0f);
	void AllPass(float freq, float q, float samplerate = 44100.0f);
};