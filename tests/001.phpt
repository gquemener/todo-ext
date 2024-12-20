--TEST--
Check if todo() throws exception
--EXTENSIONS--
todo
--FILE--
<?php
todo();
?>
--EXPECTF--
Fatal error: Uncaught Error: Not implemented yet! in %s:%d
Stack trace:
#0 %s(%d): todo()
#1 {main}
  thrown in %s on line %d
