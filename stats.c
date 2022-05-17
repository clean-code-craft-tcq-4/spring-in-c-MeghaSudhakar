#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength)
{
    	float result;
	float minimum[1] = {0};
	float maximum[1] = {0};
	
	
    struct Stats s;
    s.average = calculate_average(numberset, setlength, result);
	
	calculate_min_max(numberset, setlength, minimum, maximum);
	
    s.min = minimum[0] ;
    s.max = maximum[0] ;
    
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
	minimum[0] = numberset[0];
	maximum[0] = numberset[0];
	
	
	for(i=1; i<setlength; i++)
	{
		if(minimum[0]  > numberset[i] )
		{
			minimum[0]  = numberset[i];
		}
		else if(maximum[0] < numberset[i] )
		{
			maximum[0] = numberset[i];
		}
	}
   
}




int emailAlertCallCount()
{
}

int ledAlertCallCount()
{
}



    


