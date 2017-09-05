#include "InyectorControl.h"
void InyectorControlAct_init(void);





void InyectorControlAct_onIdleSpeed(Event *event);

void InyectorControlAct_onNormal(Event *event);





bool InyectorControlAct_isPressedThrottle(Event *event);

bool InyectorControlAct_isReleasedThrottle(Event *event);





void InyectorControlAct_starting(Event *event);
