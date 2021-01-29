#ifndef ScriptInterpretersContainerDTO_hpp
#define ScriptInterpretersContainerDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/update/UpdatePluginDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class ScriptInterpretersContainer : public oatpp::DTO
{
   DTO_INIT(ScriptInterpretersContainer, DTO);
   DTO_FIELD(Object<UpdatePluginData>, yPython3) = { {Object<UpdatePluginData>({UpdatePluginData::createShared()})} };
   DTO_FIELD(Fields<String>, New) = {};
};

#include OATPP_CODEGEN_END(DTO)

#endif /* ScriptInterpretersContainerDTO_hpp */



