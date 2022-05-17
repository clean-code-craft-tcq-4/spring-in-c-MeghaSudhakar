#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength)
{
    	float result, minimum, max;
	
	
    struct Stats s;
    s.average = calculate_average(numberset, setlength, result);
	
	calculate_min_max(numberset, setlength, &minimum, &maximum);
	
    s.min = *minimum;
    s.max = *maximum;
    
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

void calculate_min_max(const float* numberset, int setlength, float *minimum, float *maximum)
{
    int i;
	*minimum = *maximum = numberset[0];
	for(i=1; i<=setlength; i++)
	{
		if(*minimum > numberset[i] )
		{
			*minimum = numberset[i];
		}
		else if(*maximum < numberset[i] )
		{
			*maximum = numberset[i];
		}
	}
   
}




int emailAlertCallCount()
{
}

int ledAlertCallCount()
{
}



    


