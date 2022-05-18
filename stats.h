struct Stats 
{
  float average;
  float min;
  float max;
};

struct Stats compute_statistics(const float* numberset, int setlength);

typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);
float calculate_average(const float* numberset, int setlength, float result);
void calculate_min_max(const float* numberset, int setlength, float *minimum, float *maximum);

extern int emailAlertCallCount();
extern int ledAlertCallCount();

void emailAlerter();
void ledAlerter();
