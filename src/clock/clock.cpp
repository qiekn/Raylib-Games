#include "clock.h"
#include "raylib.h"
#include <ctime>

Color DARK_GREY = {45, 45, 45, 255};
Color LIGHT_GREY = {229, 229, 229, 255};

void Clock::Draw() const {
  DrawBackground();

  DrawHourHand(hour, minute);
  DrawMinuteHand(minute);
  DrawSecondHand(second);

  DrawCircleV(pos, 15, DARK_GREY);
}

void Clock::Update() {
  time_t now = time(0);
  tm *ltm = localtime(&now);
  hour = ltm->tm_hour;
  minute = ltm->tm_min;
  second = ltm->tm_sec;
}

void Clock::DrawBackground() const {
  DrawCircleV(pos, size, DARK_GREY);
  DrawCircleV(pos, size - 30, LIGHT_GREY);
  DrawCircleV(pos, size - 40, RAYWHITE);

  // hour marks
  float rect_w = 10;
  float rect_h = size;

  Rectangle rect = {pos.x, pos.y, rect_w, rect_h};
  for (int i = 0; i < 12; i++) {
    DrawRectanglePro(rect, {rect_w / 2, rect_h}, i * 30, DARK_GREY);
  }
  DrawCircleV(pos, size - 50, RAYWHITE);
}

void Clock::DrawHand(float width, float length,
                     int angle, Color color, int offset) const {
  Rectangle handRect = Rectangle{pos.x, pos.y, width, length};
  DrawRectanglePro(handRect, {width / 2, length - offset}, angle, color);
}

void Clock::DrawHourHand(int hour, int minute) const {
  float width = 15;
  float length = size * 0.6;
  int angle = 30 * hour + (minute / 60.0) * 30;
  DrawHand(width, length, angle, DARK_GREY, 0);
}

void Clock::DrawMinuteHand(int minute) const {
  float width = 10;
  float length = size * 0.7;
  int angle = minute * 6;
  DrawHand(width, length, angle, DARK_GREY, 0);
}

void Clock::DrawSecondHand(int second) const {
  float width = 5;
  float length = size * 1.05;
  int angle = 6 * second;
  DrawHand(width, length, angle, RED, 55);
}
