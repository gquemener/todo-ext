--TEST--
test1() Basic test
--EXTENSIONS--
todo_ext
--FILE--
<?php
$ret = test1();

var_dump($ret);
?>
--EXPECT--
The extension todo_ext is loaded and working!
NULL
