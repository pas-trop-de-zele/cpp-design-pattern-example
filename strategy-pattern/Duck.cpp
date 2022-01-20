#include "Duck.h"

Duck::Duck(I_Quack* _quack_behavior)
	:quack_behavior{ std::move(_quack_behavior)} {}