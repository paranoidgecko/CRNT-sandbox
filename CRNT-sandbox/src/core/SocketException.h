/*
 * Copyright (C) 2007 David Bannach, Embedded Systems Lab
 * 
 * This file is part of the CRN Toolbox.
 * The CRN Toolbox is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 * The CRN Toolbox is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 * You should have received a copy of the GNU Lesser General Public License
 * along with the CRN Toolbox; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

// SocketException class


#ifndef SOCKETEXCEPTION_H
#define SOCKETEXCEPTION_H

#include <string>
#include <stdexcept>

/**
 * \ingroup core
 * \brief Socket exception.
 *
 */
class SocketException : public std::runtime_error
{
	public:
		SocketException(const  std::string& what) : std::runtime_error(what) {};
		const std::string description() { return what(); }; ///\deprecated
};

#endif //SOCKETEXCEPTION_H
