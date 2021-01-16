#ifndef SerialPortsRESPONSEDTO_hpp
#define SerialPortsRESPONSEDTO_hpp

#include "oatpp/core/macro/codegen.hpp"
#include "oatpp/core/Types.hpp"
#include "dto/shared/CommonsDataDTO.hpp"
#include OATPP_CODEGEN_BEGIN(DTO)

class SerialPortsResponse : public CommonsData
{
   DTO_INIT(SerialPortsResponse, CommonsData);
   DTO_FIELD(Fields<String>, data) = oatpp::data::mapping::type::PairList<String, String>({ std::make_pair("\\\\.\\COM1","") });
};

#include OATPP_CODEGEN_END(DTO)

#endif /* SerialPortsRESPONSEDTO_hpp */

