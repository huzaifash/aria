#ifndef _TOKEN_TYPE_H
#define _TOKEN_TYPE_H

typedef enum {
	T_IDENTIFIER = 0,
	T_KEYWORD,
	T_STRING,
	T_CHAR,
	T_INTEGER,
	T_FLOAT32,
	T_FLOAT64,
} TokenType;

#endif /* _TOKEN_TYPE_H */