--TEST--
Check if todo() throws exception
--EXTENSIONS--
todo
--FILE--
<?php
todo('Foo is not available');
?>
--EXPECTF--
Fatal error: Uncaught Error: Not implemented yet (reason: Foo is not available)! in %s:%d
Stack trace:
#0 %s(%d): todo()
#1 {main}
  thrown in %s on line %d
