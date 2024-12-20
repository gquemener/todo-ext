/* todo_ext extension for PHP */

#ifndef PHP_TODO_EXT_H
# define PHP_TODO_EXT_H

extern zend_module_entry todo_ext_module_entry;
# define phpext_todo_ext_ptr &todo_ext_module_entry

# define PHP_TODO_EXT_VERSION "0.1.0"

# if defined(ZTS) && defined(COMPILE_DL_TODO_EXT)
ZEND_TSRMLS_CACHE_EXTERN()
# endif

#endif	/* PHP_TODO_EXT_H */
