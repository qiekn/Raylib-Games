#pragma once

#include <raylib.h>

class Clock {
public:
  Clock(int size, Vector2 pos)
      : size(size), pos(pos), hour(0), minute(0), second(0) {}

  void Draw() const;
  void Update();

private:
  void DrawBackground() const;

  void DrawHourHand(int hour, int minute) const;
  void DrawMinuteHand(int minute) const;
  void DrawSecondHand(int second) const;

  // helper function
  void DrawHand(float width, float length, int angle, Color color,
                    int offset) const;
  Vector2 pos;
  int size;
  int hour;
  int minute;
  int second;
};
