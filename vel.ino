void velX(float gForceX, float *Velocity, float *Distance, float Time)
{
  // V = V0 + at
  // X = 1/2 at^2;
  *Velocity = *Velocity + (gForceX*9.81) * (Time/1000); //  ms
  *Distance = 0.5 * gForceX * Time * Time;
  return;
}

void velY(float gForceY, float *Velocity, float *Distance, float Time)
{
  // V = V0 + at
  // X = 1/2 at^2;
  *Velocity = *Velocity + (gForceY*9.81) * (Time/1000); //  ms
  *Distance = 0.5 * gForceY * Time * Time;
  return;
}

void velZ(float gForceZ, float *Velocity, float *Distance, float Time)
{
  // V = V0 + at
  // X = 1/2 at^2;
  *Velocity = *Velocity + (gForceZ*9.81) * (Time/1000); //  ms
  *Distance = 0.5 * gForceZ * Time * Time;
  return;

}
