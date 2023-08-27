// This is the source code of AyuGram for Desktop.
//
// We do not and cannot prevent the use of our code,
// but be respectful and credit the original author.
//
// Copyright @Radolyn, 2025
#pragma once

namespace AyuUiSettings {

void setMonoFont(QString newFont);
QString getMonoFont();

void setWideMultiplier(double val);

bool isWideMultiplied();
int getWideMultiplied(int width, double mult);

void setMaterialSwitches(bool val);
bool isMaterialSwitches();

}
