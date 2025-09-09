#pragma once

#include "curl.h"

namespace aurora {
	class Program {
	private:
		NebulaCurl* m_pCurl;

	public:
		Program();
		~Program();
	};
}