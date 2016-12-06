struct JImage
{
	JImage() :m_iSizeX(0), m_iSizeY(0), m_iPosX(0), m_iPosY(0)
	{

	}

	int m_iSizeX = 0;
	int m_iSizeY = 0;

	int m_iPosX = 0;
	int m_iPosY = 0;
};


int GImageGetSizeX(const JImage * image)
{
	return image->m_iSizeX;
}

int GImageGetSizeY(const JImage * image)
{
	return image->m_iSizeY;
}

int GImageGetPosX(const JImage * image)
{
	return image->m_iPosX;
}

int GImageGetPosY(const JImage * image)
{
	return image->m_iPosY;
}

JImage * GImageCreate(const int sizeX, const int sizeY)
{
	return nullptr;
}

JImage * GImageLoad(const char * fileName)
{
	return nullptr;
}