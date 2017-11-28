//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain Version 0.10.12
// The SmartSoft Toolchain has been developed by:
//
// ZAFH Servicerobotic Ulm
// Christian Schlegel (schlegel@hs-ulm.de)
// Alex Lotz (lotz@hs-ulm.de)
// University of Applied Sciences
// Prittwitzstr. 10
// 89075 Ulm (Germany)
//
// Information about the SmartSoft MDSD Toolchain is available at:
// smart-robotics.sourceforge.net
//
// This file is generated once. Modify this file to your needs.
// If you want the toolchain to re-generate this file, please
// delete it before running the code generator.
//--------------------------------------------------------------------------

// --------------------------------------------------------------------------
//
//  Copyright (C) 2014 Alex Lotz
//
//        lotz@hs-ulm.de
//
//        Prof. Dr. Christian Schlegel
//        University of Applied Sciences
//        Prittwitzstr. 10
//        D-89075 Ulm
//        Germany
//
//
//  This file is part of ACE/SmartSoft.
//
//  ACE/SmartSoft is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Lesser General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  ACE/SmartSoft is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public License
//  along with ACE/SmartSoft.  If not, see <http://www.gnu.org/licenses/>.
//
// --------------------------------------------------------------------------


#ifndef _COMM_COMMPARAMETER_COMMPARAMETERRESPONSE_HH
#define _COMM_COMMPARAMETER_COMMPARAMETERRESPONSE_HH

// include Message-Data-Struct
#include "smartCommParameterResponseIdl.hh"

// include enums
#include "smartEnumParamResponseType.hh"

#include <iostream>

namespace SmartACE
{

class CommParameterResponse
{
protected:
	CommParameterIDL::CommParameterResponse idl_CommParameterResponse;
public:
	CommParameterResponse()
	{
	}

	CommParameterResponse(const CommParameterIDL::CommParameterResponse &obj) :
		idl_CommParameterResponse(obj)
	{
	}

	virtual ~CommParameterResponse()
	{
	}

	operator CommParameterIDL::CommParameterResponse() const
	{
		return idl_CommParameterResponse;
	}

	void get(ACE_Message_Block *&msg) const;
	void set(const ACE_Message_Block *msg);

	static inline std::string identifier(void)
	{
		return "CommParameter::CommParameterResponse";
	}

	//
	// generated getter and setter methods
	//

	inline ParamResponseType getResponse() const
	{
		return idl_CommParameterResponse.response;
	}
	inline void setResponse(const ParamResponseType &response)
	{
		idl_CommParameterResponse.response = response;
	}

	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
};

inline std::ostream &operator<<(std::ostream &os, const CommParameterResponse &co)
{
	co.to_ostream(os);
	return os;
}

}
#endif