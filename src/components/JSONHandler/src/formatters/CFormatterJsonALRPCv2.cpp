
#include "JSONHandler/formatters/CFormatterJsonALRPCv2.hpp"


bool NsAppLink::NsJSONHandler::Formatters::CFormatterJsonALRPCv2::toString(
        const NsAppLink::NsSmartObjects::CSmartObject& obj,
        std::string& outStr)
{
    Json::Value root(Json::objectValue);

    objToJsonValue(obj.getElement(NsAppLink::NsJSONHandler::strings::S_MSG_PARAMS), root);

    outStr = root.toStyledString();

    return true;
}

