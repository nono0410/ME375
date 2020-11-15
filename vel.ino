float vel(float gForceZ, float Velocity, float Time)
{
  // V = V0 + at
  Velocity = Velocity + gForceZ * (Time/1000); // t = 10 ms
  return Velocity;
}
