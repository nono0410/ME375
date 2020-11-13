float vel(float gForceZ, float Velocity)
{
  // V = V0 + at
  Velocity = Velocity + gForceZ * 0.01; // t = 10 ms
  return Velocity;
}
