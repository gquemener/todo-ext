/* todo extension for PHP */

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include "php.h"
#include "ext/standard/info.h"
#include "php_todo.h"
#include "todo_arginfo.h"

/* For compatibility with older PHP versions */
#ifndef ZEND_PARSE_PARAMETERS_NONE
#define ZEND_PARSE_PARAMETERS_NONE() \
	ZEND_PARSE_PARAMETERS_START(0, 0) \
	ZEND_PARSE_PARAMETERS_END()
#endif

PHP_FUNCTION(todo)
{
	ZEND_PARSE_PARAMETERS_NONE();
  zend_throw_error(NULL, "Not implemented yet!", 0);
  RETURN_NULL();
}

PHP_RINIT_FUNCTION(todo)
{
#if defined(ZTS) && defined(COMPILE_DL_TODO)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif

	return SUCCESS;
}

PHP_MINFO_FUNCTION(todo)
{
	php_info_print_table_start();
	php_info_print_table_row(2, "todo support", "enabled");
	php_info_print_table_end();
}

zend_module_entry todo_module_entry = {
	STANDARD_MODULE_HEADER,
	"todo",					/* Extension name */
	ext_functions,					/* zend_function_entry */
	NULL,							/* PHP_MINIT - Module initialization */
	NULL,							/* PHP_MSHUTDOWN - Module shutdown */
	PHP_RINIT(todo),			/* PHP_RINIT - Request initialization */
	NULL,							/* PHP_RSHUTDOWN - Request shutdown */
	PHP_MINFO(todo),			/* PHP_MINFO - Module info */
	PHP_TODO_VERSION,		/* Version */
	STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_TODO
# ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
# endif
ZEND_GET_MODULE(todo)
#endif
