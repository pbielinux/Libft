#ifndef TOKEN_H
#define TOKEN_H

#include "str.h"

typedef enum	token_type {
	END_TOKEN = -1,
	WORD_TOKEN = 0,
	PIPE_TOKEN = 1,
}				token_type;

typedef struct	s_token
{
	token_type	type;
	t_str		lexeme;
}				t_token;

#endif
