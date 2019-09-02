#ifndef REQUEST_H
#define REQUEST_H

/*
We need an object to represent a request. From the specification:

Request = Request-Line
*(( general-header
| request-header
| entity-header) CRLF
CRLF
[ message-body ]

Request-Line = Method SP Request-URI SP HTTP-Version CRLF
request-target = origin-form
               / absolute-form
               / asterisk-form

origin-form = absolute-path [ "?" query ]
asterisk-form = "*"

 */

#include <resting/http/message.h>

struct http_request {
  struct http_message _parent;
};

#endif /* REQUEST_H */
