#include "alerters.h"
#include "stats.h"

int emailAlertCallCount = ledAlertCallCount = 0;
void emailAlerter()
{
  emailAlertCallCount++;
}

void ledAlerter()
{
  ledAlertCallCount++;
}
