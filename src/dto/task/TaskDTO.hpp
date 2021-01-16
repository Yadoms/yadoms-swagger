#ifndef TaskDTO_hpp
#define TaskDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/TaskStatusDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class Task : public oatpp::DTO
{
   DTO_INIT(Task, DTO);
   DTO_FIELD(String, uuid) = "";
   DTO_FIELD(String, name) = "";
   DTO_FIELD(Int32, progression) = 0;
   DTO_FIELD(String, message) = "";
   DTO_FIELD(Enum<TaskStatus>, status) = TaskStatus::STARTED;
   DTO_FIELD(String, creationDate) = "";

};

#include OATPP_CODEGEN_END(DTO)

#endif /* TaskDTO_hpp */