# todo-ext

A PHP extension that simplify detection of the next piece of code to implement.

This is especially powerfull in conjunction with Outside-in TDD, when generating this kind of methods:
```php
class MyThing
{
  public function doThat(): void
  {
    todo();
  }
}
```
Once your IDE does not complain about any missing class/method anymore, your test execution will tell you what is the next piece of code to write!

Inspired by Rust's macro [std::todo](https://doc.rust-lang.org/std/macro.todo.html).

## Installation
```
$ phpize
$ ./configure
$ make
$ sudo make install
```

## Activation
```ini
# php.ini
extension=todo
```
