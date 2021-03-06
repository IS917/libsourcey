///
//
// LibSourcey
// Copyright (c) 2005, Sourcey <http://sourcey.com>
//
// SPDX-License-Identifier: LGPL-2.1+
//
/// @addtogroup base
/// @{


#include "scy/pipe.h"


using std::endl;


namespace scy {


Pipe::Pipe(uv::Loop* loop)
    : Stream(loop, new uv_pipe_t)
{
}


Pipe::~Pipe()
{
}


void Pipe::init(bool ipc)
{
    uv_pipe_init(loop(), ptr<uv_pipe_t>(), ipc ? 1 : 0);
    //Stream::readStart();
}


bool Pipe::readStart()
{
    return Stream::readStart();
}

//
//bool Pipe::readStop()
//{
//    return Stream::readStop();
//}


} // namespace scy


/// @\}
