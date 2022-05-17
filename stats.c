#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength)
{
    	float result, min, max;
	
	
    struct Stats s;
    s.average = calculate_average(numberset, setlength, result);
    s.min = calculate_min_max(numberset, setlength, &min, &max);
    s.max = calculate_min_max(numberset, setlength, &min, &max);
    
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

void calculate_min_max(const float* numberset, int setlength, float *min, float *max)
{
    int i;
	*min = *max = numberset[0];
	for(i=1; i<=setlength; i++)
	{
		if(*min > numberset[i] )
		{
			*min = numberset[i];
		}
		else if(*max < numberset[i] )
		{
			*max = numberset[i];
		}
	}
   
}




int emailAlertCallCount()
{
}

int ledAlertCallCount()
{
}



    


