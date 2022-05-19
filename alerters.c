#include "alerters.h"
#include "stats.h"

int emailAlertCallCount,  ledAlertCallCount;
void emailAlerter()
{
  emailAlertCallCount++;
}

void ledAlerter()
{
  ledAlertCallCount++;
}
