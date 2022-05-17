#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength)
{
    float result;
    struct Stats s;
    s.average = calculate_average(numberset, setlength, result);
    s.min = 0;
    s.max = 0;
    
    return s;
};

float calculate_average(const float* numberset, int setlength, float result)
{
    result = 0.0f;
    int i;
    
	for(i=0; i<setlength; i++)
	{
		result = result + numberset[i];
	}

return result/setlength;

}

s.average = (result/setlength);



int emailAlertCallCount()
{
}

int ledAlertCallCount()
{
}



    


