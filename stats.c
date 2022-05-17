#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength)
{
    	float result;
	float min[1] = {0};
	float max[1] = {0};
	
    struct Stats s;
    s.average = calculate_average(numberset, setlength, result);
    s.min = calculate_min_max(numberset, setlength, min);
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

return (result/setlength);
}

float calculate_min_max(const float* numberset, int setlength, float result, float min)
{
    int i;
	
	for(i=1; i<=setlength; i++)
	{
		if
	}
   
}




int emailAlertCallCount()
{
}

int ledAlertCallCount()
{
}



    


