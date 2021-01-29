#ifndef PluginsDTO_hpp
#define PluginsDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class Plugins : public oatpp::DTO
{
   DTO_INIT(Plugins, DTO);
   DTO_FIELD(Vector<String>, plugins) = {};
};

#include OATPP_CODEGEN_END(DTO)

#endif /* PluginsDTO_hpp */