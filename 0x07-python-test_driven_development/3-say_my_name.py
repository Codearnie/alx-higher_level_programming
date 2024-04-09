#!/usr/bin/python3
"""Defines a name-printing out function."""


def say_my_name(first_name, last_name=""):
    """Prints out a name.
    Args:
        first_name: The first_name to print out
        last_name: The last_name to print out
    Raises:
        TypeError: If first_name or last_name are not strings.
    """
    if not isinstance(first_name, str):
        raise TypeError("first_name must be a string")
    if not isinstance(last_name, str):
        raise TypeError("last_name must be a string")
    print("My name is {} {}".format(first_name, last_name))
