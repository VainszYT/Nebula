#include "program.h"
#include "build.h"
#include <iostream>
namespace aurora
{
	Program::Program()
	{
		printf("Nebula Created By Vainsz\n", BUILD_ID);
#ifdef _PROD
		printf("Nebula Created By VainsZYT\n");
#endif
		printf("Built on: %s at %s\n", __DATE__, __TIME__);
		m_pCurl = new NebulaCurl;
	}

	Program::~Program()
	{
		if (m_pCurl) {
			delete m_pCurl;
		}
	}
}