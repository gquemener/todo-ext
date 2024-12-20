/* todo extension for PHP */

#ifndef PHP_TODO_H
# define PHP_TODO_H

extern zend_module_entry todo_module_entry;
# define phpext_todo_ptr &todo_module_entry

# define PHP_TODO_VERSION "0.1.0"

# if defined(ZTS) && defined(COMPILE_DL_TODO)
ZEND_TSRMLS_CACHE_EXTERN()
# endif

#endif	/* PHP_TODO_H */
