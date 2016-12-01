#define PI 3.141592653589793f

float JMathRadToDeg(const float rad)
{
	return rad * (180.0f / PI);
}
float JMathDegToRad(const float deg)
{
	return deg * (PI / 180.0f);
}
float JMathGetRandom(const float min, const float max)
{
	return 0.0f;
}

template < typename T> T JMathGetMin(const T & a,const T & b)
{
	return (a < b) ? a : b;
}

template < typename T> T JMathGetMax(const T & a, const T & b)
{
	return (a > b) ? a : b;
}