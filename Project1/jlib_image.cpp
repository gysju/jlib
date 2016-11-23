struct JImage
{
	JImage() :m_iSizeX(0), m_iSizeY(0)
	{

	}

	int m_iSizeX = 0;
	int m_iSizeY = 0;
};


int GImageGetSizeX(const JImage * image)
{
	return image->m_iSizeX;
}

int GImageGetSizeY(const JImage * image)
{
	return image->m_iSizeY;
}

JImage * GImageCreate(const int sizeX, const int sizeY)
{
	return nullptr;
}

JImage * GImageLoad(const char * fileName)
{
	return nullptr;
}