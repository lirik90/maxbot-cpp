#include "maxbot/BotException.h"

#include <string>

namespace MaxBot {

BotException::BotException(
	const std::string& description, ErrorCode errorCode,
	const std::string& urlPath, const std::string& method)
	: runtime_error(description)
	, errorCode(errorCode)
	, urlPath(urlPath)
	, method(method)
{ }

}
