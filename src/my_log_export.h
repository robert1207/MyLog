// MyLog is a log-lib for Qt applications.
// Copyright (C) <2019>  <Robert Zhang> e-mail:robert.cysy@gmail.com

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.

// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

#ifndef MY_LOG_EXPORT_H
#define MY_LOG_EXPORT_H

#include "my_log.h"

#define MyLogIns Singleton<MyLogNS::MyLog>::instance()

#define I MyLogNS::MyLog::Helper().set_file_line(__FILE__, __LINE__, Q_FUNC_INFO).info()
#define D MyLogNS::MyLog::Helper().set_file_line(__FILE__, __LINE__, Q_FUNC_INFO).debug()
#define E MyLogNS::MyLog::Helper().set_file_line(__FILE__, __LINE__, Q_FUNC_INFO).error()

#define MYLOG_NO_LOG_MACRO  MyLogNS::MyLog::Helper().no_log()


#if defined(MYLOG_NO_I_OUTPUT)
#  undef I
#  define I MYLOG_NO_LOG_MACRO
#endif
#if defined(MYLOG_NO_D_OUTPUT)
#  undef D
#  define D MYLOG_NO_LOG_MACRO
#endif
#if defined(MYLOG_NO_E_OUTPUT)
#  undef E
#  define E MYLOG_NO_LOG_MACRO
#endif


#endif // MY_LOG_EXPORT_H
