#pragma once

#include "hook.h"

namespace aurora {
	class NebulaCurl {
	private:
		Hook* m_pCurlEasySetoptHook;

	public:
		NebulaCurl();
		~NebulaCurl();
	};
}