#ifndef MESSAGE_H
#define MESSAGE_H

struct http_header_field {
  char *field_name;
  char *field_value;

  struct http_header_field *next;
};
  
struct http_message {
  struct http_header_field *headers;
  char *body;
};

#endif /* MESSAGE_H */
