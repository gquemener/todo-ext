--TEST--
Check if todo_ext is loaded
--EXTENSIONS--
todo_ext
--FILE--
<?php
echo 'The extension "todo_ext" is available';
?>
--EXPECT--
The extension "todo_ext" is available
