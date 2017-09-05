void RPMControl_init(unsigned char minDuty, unsigned char maxDuty,

                     int targetRPM, int thHighRPM, int thLowRPM);

unsigned char RPMControl_compute(int currRPM);
