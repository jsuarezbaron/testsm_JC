typedef struct Timer Timer;







Timer *Timer_init(int count, int period, int eventSignal);

void Timer_start(Timer *const me);
