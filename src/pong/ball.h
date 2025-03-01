#pragma once

class Ball
{
public:
  Ball();
  void Update();
  void Draw() const;

private:
  int x, y;
  int speed_x, speed_y;
  int radius;
};
