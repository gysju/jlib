#define PI 3.141592653589793f

float JMathRadToDeg(const float rad)
{
	return rad * (180.0f / PI);
}
float JMathDegToRad(const float deg)
{
	return deg * (PI / 180.0f);
}

int JMathGetRandom(const int min, const int max)
{
	// add assert if max < min

	float random = (float)rand() / (float)RAND_MAX;
	int diff = max - min;

	return min + (int)(random * diff);
}

float JMathGetRandom(const float min, const float max)
{
	// add assert if max < min

	float random = (float)rand() / (float)RAND_MAX;
	float diff = max - min;

	return min + random * diff;
}

template < typename T> T JMathGetMin(const T & a,const T & b)
{
	return (a < b) ? a : b;
}

template < typename T> T JMathGetMax(const T & a, const T & b)
{
	return (a > b) ? a : b;
}